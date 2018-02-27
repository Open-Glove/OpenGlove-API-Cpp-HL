
//#include "stdafx.h"
#include "DataReceiver.h"
#include "OpenGloveAPI.h"
#include <iostream>

void lectura1(int a, int b) {
	std::cout << "flexor: " << a << "value: " << b << std::endl;
}

void lectura2(int a, int b) {
	std::cout << a << " <-> " << b << std::endl;
}

int main(int argc, char* argv[]) {

	OpenGloveAPI api;

	ns4__ArrayOfGlove response = api.getGloves();
	std::cout << "OpenGlove API" << std::endl;
	ns4__Glove * selectedGlove = NULL;
	ns4__Glove * glove2 = NULL;

	for (auto glove = response.Glove.begin();
		glove != response.Glove.end();
		glove++)
	{
		//std::cout << "Guante: " << *((*(*glove._Ptr)).Name);
		if (*((*(*glove._Ptr)).Connected) == true) {
		//	std::cout << " Status: Connected" << std::endl;
			if (*((*(*glove._Ptr)).Name) == "COM4") {
				selectedGlove = (*glove._Ptr);
				std::cout << "Selecionado: " << *((*selectedGlove).Name) << std::endl;
				system("PAUSE");
			//	api.activate(*selectedGlove, PalmarFingerMiddleDistal, 255);
			}
			if (*((*(*glove._Ptr)).Name) == "COM24") {
				glove2 = (*glove._Ptr);
				std::cout << "Selecionado player 2: " << *((*glove2).Name) << std::endl;
				system("PAUSE");
				//	api.activate(*selectedGlove, PalmarFingerMiddleDistal, 255);
			}
		}
		else {
			//std::cout << " Status: Disconnected" << std::endl;
		}

	}
	system("PAUSE");
	api.startCaptureData(*selectedGlove);
	api.startCaptureData(*glove2);
	//DataReceiver dr1("9894", "COM24");

	system("PAUSE");
	//dr.setFin(lectura1);
	api.getDataReceiver(*selectedGlove)->setFin(lectura1);
	api.getDataReceiver(*selectedGlove)->setFin(lectura2);
//	dr1.setFin(lectura2);
	std::cout << "redefinida funcion" << std::endl;
	system("PAUSE");
	//api.stopCaptureData(*selectedGlove);
	//dr.stop();
	
//	system("PAUSE");
	//dr1.stop();
		
	system("PAUSE");
	api.activate(*selectedGlove, PalmarFingerMiddleDistal, 0);
}
