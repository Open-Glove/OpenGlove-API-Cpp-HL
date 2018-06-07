#include <iostream>
#include <websocketpp/config/asio_no_tls_client.hpp>
#include <websocketpp/client.hpp>
#include <boost/thread/thread.hpp>

typedef websocketpp::client<websocketpp::config::asio_client> client;

// pull out the type of messages sent by our config
typedef websocketpp::config::asio_client::message_type::ptr message_ptr;

class DataReceiver;
typedef void(*fingersFunc)(int, int);
typedef void(*accelerometerFunction)(float, float, float);
typedef void(*gyroscopeFunction)(float, float, float);
typedef void(*magnometerFunction)(float, float, float);
typedef void(*imu_attitudeFunction)(float, float, float);
typedef void(*imu_ValuesFunction)(float, float, float, float, float, float, float, float, float);

#ifndef  DATARECEIVER_H
#define DATARECEIVER_H

class DataReceiver {
private:
	std::string WebSocketPort;
	std::string SerialPort;
	bool WebSocketActive = false;
	client WebSocketClient;
	boost::thread task;

	//void on_message(client* c, websocketpp::connection_hdl hdl, message_ptr msg);

public:
	DataReceiver(std::string, std::string);
	~DataReceiver();

	//fingersFunc fin;
	void setFin(fingersFunc func);
	fingersFunc getFin();

	void setImuValuesFunction(imu_ValuesFunction func);
	imu_ValuesFunction getImuValuesFunction();

	void setAccFunction(accelerometerFunction func);
	accelerometerFunction getAccFunction();

	void setGyroFunction(gyroscopeFunction func);
	gyroscopeFunction getGyroFunction();

	void setAttitudeFunction(imu_attitudeFunction func);
	imu_attitudeFunction getAttitudeFunction();

	void setMagnoFunction(magnometerFunction func);
	magnometerFunction getMagnoFunction();

	std::string getPort();
	void readData();
	void on_message(client * c, websocketpp::connection_hdl hdl, message_ptr msg);
	void stop();
};

#endif // ! DATARECEIVER_H

