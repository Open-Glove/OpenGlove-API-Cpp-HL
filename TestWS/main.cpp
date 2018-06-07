
//#include "stdafx.h"
#include "DataReceiver.h"
#include "OpenGloveAPI.h"
#include <iostream>
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <stdlib.h>
#include <mutex>          // std::mutex

void cls()
{
	// Get the Win32 handle representing standard output.
	// This generally only has to be done once, so we make it static.
	static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO csbi;
	COORD topLeft = { 0, 0 };

	// std::cout uses a buffer to batch writes to the underlying console.
	// We need to flush that to the console because we're circumventing
	// std::cout entirely; after we clear the console, we don't want
	// stale buffered text to randomly be written out.
	std::cout.flush();

	// Figure out the current width and height of the console window
	if (!GetConsoleScreenBufferInfo(hOut, &csbi)) {
		// TODO: Handle failure!
		abort();
	}
	DWORD length = csbi.dwSize.X * csbi.dwSize.Y;

	DWORD written;

	// Flood-fill the console with spaces to clear it
	FillConsoleOutputCharacter(hOut, TEXT(' '), length, topLeft, &written);

	// Reset the attributes of every character to the default.
	// This clears all background colour formatting, if any.
	FillConsoleOutputAttribute(hOut, csbi.wAttributes, length, topLeft, &written);

	// Move the cursor back to the top left for the next sequence of writes
	SetConsoleCursorPosition(hOut, topLeft);
}

void setCursorPosition(int x, int y)
{
	static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	std::cout.flush();
	COORD coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(hOut, coord);
}

std::mutex mtx;

void lectura1(int a, int b) {
	mtx.lock();
	setCursorPosition(13, 6 + a);
	std::cout << b << "                                          "<< std::endl;
	mtx.unlock();	
}

void imuValues(float ax, float ay, float az, float gx , float gy , float gz, float mx, float my, float mz) {
	mtx.lock();
	setCursorPosition(0, 16);
	std::cout << "**-----------------------------------------------------------------**" << std::endl;
	setCursorPosition(0, 17);
	std::cout << "**-----------------------------------------------------------------**" << std::endl;
	setCursorPosition(0, 18);
	std::cout << "<<*>>IMU Values<<*>>: "<< std::endl; 
	setCursorPosition(0, 19);
	std::cout << "               ||   X    ||   Y   ||   Z   | " << std::endl;
	setCursorPosition(0, 20);
	std::cout << "Accelerometer:   " << ax << "      " << ay << "      " << az << std::endl;
	setCursorPosition(0, 21);
	std::cout << "Gyroscope:       " << gx << "      " << gy << "      " << gz << std::endl;
	setCursorPosition(0, 22);
	std::cout << "Magnometer:      " << mx << "      " << my << "      " << mz << std::endl;
	setCursorPosition(0, 23);
	std::cout << "**-----------------------------------------------------------------**" << std::endl;
	mtx.unlock();
}

void initFlexorsMapp() {
	mtx.lock();
	for (int i = 0; i < 10; i++) {
		Sleep(10);
		setCursorPosition(0, 6 + i);
		std::cout << "Region[" << i <<"]"<< " =  0							" << std::endl;
		
	}
	mtx.unlock();
}


int main(int argc, char* argv[]) {
	int exit = 1;
	while(1){
	OpenGloveAPI api;
	system("cls");
	ns4__ArrayOfGlove response = api.getGloves();
	std::cout << "<<<<<<<<<<<<OpenGlove API>>>>>>>>>>>>\n" << std::endl;
	ns4__Glove * selectedGlove = NULL;
	std::cout << "Guantes disponibles:" << std::endl;
	
	for (auto glove = response.Glove.begin();
		glove != response.Glove.end();
		glove++)
	{
		if (*((*(*glove._Ptr)).Connected) == true) {
			std::cout <<"-->" << (*((*(*glove._Ptr)).Name))<< std::endl;	
		}
	}
	std::cout << "Escriba el nombre del guante que quiere probar" << std::endl;
	std::string selection;
	std::getline(std::cin, selection);
	if (selection == "") {
		continue;

	}
	if (selection == "exit") {
		exit = 1;
		break;
	}
	int valid = 0;
	for (auto glove = response.Glove.begin();
		glove != response.Glove.end();
		glove++)
	{
		if (*((*(*glove._Ptr)).Connected) == true && (*((*(*glove._Ptr)).Name))==selection) {
			selectedGlove = (*glove._Ptr);	
			api.startCaptureData(*selectedGlove);
			valid = 1;
		}
	}
	if (valid == 0) {
		continue;
	}	
	system("cls");
	mtx.lock();
	setCursorPosition(0, 0);
	std::cout << "\nGuante seleccionado: " << *((*selectedGlove).Name) << std::endl;
	setCursorPosition(0, 2);
	std::cout << "**-----------------------------------------------------------------**" << std::endl;
	setCursorPosition(0, 3);
	std::cout << "**-----------------------------------------------------------------**" << std::endl;
	setCursorPosition(0, 4);
	std::cout << ">>FLEXORS VALUES<<" << std::endl;
	mtx.unlock();
	initFlexorsMapp();
	Sleep(100);
	api.getDataReceiver(*selectedGlove)->setFin(lectura1);
	api.getDataReceiver(*selectedGlove)->setImuValuesFunction(imuValues);

	
	getchar();
	api.stopCaptureData(*selectedGlove);
	std::cout << "CONEXION CERRADA" << std::endl;
	system("cls");
	}
}
