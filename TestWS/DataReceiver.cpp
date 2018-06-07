
#include "stdafx.h"
#include <thread>
#include "DataReceiver.h"
#include <chrono>
#include <fstream>
#define _WEBSOCKETPP_NO_CPP11_THREAD_
//#include <string>

using websocketpp::lib::placeholders::_1;
using websocketpp::lib::placeholders::_2;
using websocketpp::lib::bind;


//Redundant variables
std::vector<std::string> words;
std::string s;
std::string delimiter = ",";
size_t pos;
std::string token;
fingersFunc fingersFunction;
accelerometerFunction accFunction;
gyroscopeFunction gyroFunction;
magnometerFunction magnoFunction;
imu_ValuesFunction imuValuesFunction;
imu_attitudeFunction attitudeFunction;


int test = 0;
int pruebas = 1;
std::chrono::steady_clock::time_point started;
std::chrono::steady_clock::time_point done;

void on_open(client * c, websocketpp::connection_hdl hdl) {
	//clear_access_channels(log::alevel::all);
}

void xn_message(client * c, websocketpp::connection_hdl hdl, message_ptr msg)
{
	s = msg->get_payload();
	pos = 0;
	while ((pos = s.find(delimiter)) != std::string::npos) {
		token = s.substr(0, pos);
		words.push_back(token);
		s.erase(0, pos + delimiter.length());
	}
	words.push_back(s);

	switch (words[0][0]) {
	case 'f':

		if (fingersFunction != NULL) {
			fingersFunction(stoi(words[1]), stoi(words[2]));
		}
		break;
	case 'a':
		if (accFunction != NULL) {
			accFunction(stof(words[1]), stof(words[2]), stof(words[3]));
		}
		break;
	case 'g':
		if (gyroFunction != NULL) {
			gyroFunction(stof(words[1]), stof(words[2]), stof(words[3]));
		}
		break;
	case 'm':
		if (magnoFunction != NULL) {
			magnoFunction(stof(words[1]), stof(words[2]), stof(words[3]));
		}
		break;
	case 'z':
		if (imuValuesFunction != NULL) {
			imuValuesFunction(stof(words[1]), stof(words[2]), stof(words[3]), stof(words[4]), stof(words[5]), stof(words[6]), stof(words[7]), stof(words[8]), stof(words[9]));
		}
		break;
	default:
		std::cout << "Format doesn't exist" << std::endl;
	}
	words.clear();
}


void DataReceiver::on_message(client * c, websocketpp::connection_hdl hdl, message_ptr msg)
{
	s = msg->get_payload();
	pos = 0;
	while ((pos = s.find(delimiter)) != std::string::npos) {
		token = s.substr(0, pos);
		words.push_back(token);
		s.erase(0, pos + delimiter.length());
	}
	words.push_back(s);

	switch (words[0][0]) {
	case 'f':
		if (fingersFunction != NULL) {
			fingersFunction(stoi(words[1]), stoi(words[2]));
		}
		break;
	case 'a':
		break;
	case 'g':
		break;
	case 'm':
		break;
	case 'z':
		if (imuValuesFunction != NULL) {
			imuValuesFunction(stof(words[1]), stof(words[2]), stof(words[3]), stof(words[4]), stof(words[5]), stof(words[6]), stof(words[7]), stof(words[8]), stof(words[9]));
		}
		break;
	default:
		std::cout << "Format doesn't exist" << std::endl;
	}
	words.clear();
}

void DataReceiver::readData()
{
	std::string uri;
	uri += "ws://localhost:" + WebSocketPort + "/" + SerialPort;
	try {
		// Set logging to be pretty verbose (everything except message payloads)
		WebSocketClient.set_access_channels(websocketpp::log::alevel::all);
		WebSocketClient.clear_access_channels(websocketpp::log::alevel::frame_payload);

		// Initialize ASIO
		WebSocketClient.init_asio();
		WebSocketClient.set_open_handler(websocketpp::lib::bind(&on_open, &WebSocketClient, ::_1));

		WebSocketClient.set_message_handler(websocketpp::lib::bind(&xn_message, &WebSocketClient, ::_1, ::_2));

		websocketpp::lib::error_code ec;
		client::connection_ptr con = WebSocketClient.get_connection(uri, ec);
		if (ec) {
			std::cout << "could not create connection because: " << ec.message() << std::endl;
			return;
		}
		WebSocketClient.connect(con);
		WebSocketClient.run();
	}
	catch (websocketpp::exception const & e) {
		std::cout << e.what() << std::endl;
	}

	//std::cout << "WebSocket" << SerialPort << " closed" << std::endl;
}
/**/

DataReceiver::DataReceiver(std::string _WebSocketPort, std::string _SerialPort) {
	WebSocketPort = _WebSocketPort;
	SerialPort = _SerialPort;
	WebSocketActive = true;
	//std::cout << ">>>Recibiendo datos desde" << _SerialPort << std::endl;
	task = boost::thread(&DataReceiver::readData, this);
}

void DataReceiver::stop()
{
	if (WebSocketClient.stopped() == false) {
		//std::cout << "Cerrando puerto " << SerialPort << std::endl;
		WebSocketClient.stop();
		task.join();
	}
}

DataReceiver::~DataReceiver()
{
}


void DataReceiver::setFin(fingersFunc func)
{
	fingersFunction = func;
}

fingersFunc DataReceiver::getFin() {
	return fingersFunction;
}

void DataReceiver::setImuValuesFunction(imu_ValuesFunction func)
{
	imuValuesFunction = func;
}

imu_ValuesFunction DataReceiver::getImuValuesFunction()
{
	return imuValuesFunction;
}

void DataReceiver::setAccFunction(accelerometerFunction func)
{
	accFunction = func;

}

accelerometerFunction DataReceiver::getAccFunction()
{
	return accFunction;
}

void DataReceiver::setGyroFunction(gyroscopeFunction func)
{
	gyroFunction = func;
}

gyroscopeFunction DataReceiver::getGyroFunction()
{
	return gyroFunction;
}

void DataReceiver::setAttitudeFunction(imu_attitudeFunction func)
{
	attitudeFunction = func;
}

imu_attitudeFunction DataReceiver::getAttitudeFunction()
{
	return attitudeFunction;
}

void DataReceiver::setMagnoFunction(magnometerFunction func)
{
	magnoFunction = func;
}

magnometerFunction DataReceiver::getMagnoFunction()
{
	return magnoFunction;
}

std::string DataReceiver::getPort()
{
	return this->SerialPort;
}




