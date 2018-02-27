
#include "stdafx.h"
#include <thread>
#include "DataReceiver.h"
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
//fingersFunc fin;

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
		/*if (fin != NULL) {
			fin(stoi(words[1]), stoi(words[2]));
		}*/
		break;
	case 'a':
		break;
	case 'g':
		break;
	case 'm':
		break;
	case 'z':
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
		//if (fin != NULL) {
	//	fin(	stoi(words[1]), stoi(words[2]));
		//}
		break;
	case 'a':
		break;
	case 'g':
		break;
	case 'm':
		break;
	case 'z':
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
		WebSocketClient.set_message_handler(websocketpp::lib::bind(&on_message, &WebSocketClient, ::_1, ::_2));
		//if (&on_message != NULL) {
			
	//		return;
		//}
		// Register our message handler
		

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

	std::cout << "WebSocket" << SerialPort << " closed" << std::endl;
}
/**/

DataReceiver::DataReceiver(std::string _WebSocketPort, std::string _SerialPort) {
	WebSocketPort = _WebSocketPort;
	SerialPort = _SerialPort;
	WebSocketActive = true;
	std::cout << ">>>Recibiendo datos desde" << _SerialPort << std::endl;
	task = std::thread(&DataReceiver::readData, this);
	std::cout << "Recibiendo datos desde" << _SerialPort << std::endl;
}

void DataReceiver::stop()
{
	if (WebSocketClient.stopped() == false) {
		std::cout << "Cerrando puerto "<< SerialPort<< std::endl;
		WebSocketClient.stop();
		task.join();
	}
}

DataReceiver::~DataReceiver()
{
}


void DataReceiver::setFin(fingersFunc func)
{
	fin = func;
}

fingersFunc DataReceiver::getFin() {
	return fin;
}

std::string DataReceiver::getPort()
{
	return this->SerialPort;
}




