#include <iostream>
#include <websocketpp/config/asio_no_tls_client.hpp>
#include <websocketpp/client.hpp>

typedef websocketpp::client<websocketpp::config::asio_client> client;

// pull out the type of messages sent by our config
typedef websocketpp::config::asio_client::message_type::ptr message_ptr;

class DataReceiver;
typedef void (*fingersFunc)(int, int);

#ifndef  DATARECEIVER_H
#define DATARECEIVER_H

class DataReceiver  {
private:
	std::string WebSocketPort;
	std::string SerialPort;
	bool WebSocketActive = false;
	client WebSocketClient;
	std::thread task;
	
	//void on_message(client* c, websocketpp::connection_hdl hdl, message_ptr msg);
		
public:
	DataReceiver(std::string, std::string);
	~DataReceiver();
	
	fingersFunc fin;
	void setFin(fingersFunc func);
	fingersFunc getFin();
	std::string getPort();
	//fingersFunc fingersFunction;
	//fingersFunc DataReceiver::getFin() { return fingersFunction; }
	void readData();
	void on_message(client * c, websocketpp::connection_hdl hdl, message_ptr msg);
	void stop();

	
};

#endif // ! DATARECEIVER_H

