#include "pch.h"

#include "SmartpotController.h"


/*******************		Plant			*******************+*/
void Controller::Controller::AddSmartpot(Plant^ plant) {
	SmartpotPersistance::Persistance::AddPlant(plant);
}

List<Plant^>^ Controller::Controller::QueryAllPlants() {
	return SmartpotPersistance::Persistance::QueryAllPlants();
}

void Controller::Controller::DeletePlant(int plantId) {
	SmartpotPersistance::Persistance::DeletePlant(plantId);
}

void Controller::Controller::UpdatePlant(Plant^ plant) {
	SmartpotPersistance::Persistance::UpdatePlant(plant);
}

Plant^ Controller::Controller::QueryPlantById(int plantId) {
	return SmartpotPersistance::Persistance::QueryPlantById(plantId);

}

/*******************		User			*******************+*/
void Controller::Controller::AddUser(User^ user) {
	UserPersistance::Persistance::AddUser(user);
}

List<User^>^ Controller::Controller::QueryAllUsers() {
	return UserPersistance::Persistance::QueryAllUsers();
}

void Controller::Controller::DeleteUser(int id) {
	UserPersistance::Persistance::DeleteUser(id);
}

void Controller::Controller::UpdateUser(User^ user) {
	UserPersistance::Persistance::UpdateUser(user);
}

User^ Controller::Controller::QueryUserById(int id) {
	return UserPersistance::Persistance::QueryUserById(id);

}

/*******************		Alarm			*******************+*/
void Controller::Controller::AddAlarm(Alarm^ alarm) {
	AlarmPersistance::Persistance::AddAlarm(alarm);
}
List<Alarm^>^ Controller::Controller::QueryAllAlarm() {
	return AlarmPersistance::Persistance::QueryAllAlarm();
}
void Controller::Controller::DeleteAlarm(int alarmId) {
	AlarmPersistance::Persistance::DeleteAlarm(alarmId);
}
void Controller::Controller::UpdateAlarm(Alarm^ alarm) {
	AlarmPersistance::Persistance::UpdateAlarm(alarm);
}
Alarm^ Controller::Controller::QueryAlarmById(int alarmId) {
	return AlarmPersistance::Persistance::QueryAlarmById(alarmId);
}

/*******************		Login			*******************+*/
User^ Controller::Controller::Login(String^ username, String^ password) {

	//return UserPersistance::Persistance::ValidateUser(username, password); 

	User^ user;
	if (username->Equals("admin") && password->Equals("12345")) {
		Admin^ nuser = gcnew Admin();
		nuser->Id = 1;
		nuser->Username = "User admin";
		user = nuser;
		return user;
	}
	else {
		return UserPersistance::Persistance::ValidateUser(username, password);
	}

	
	//else if (username->Equals("user") && password->Equals("12345")) {
	//	User^ nuser = gcnew User();
	//	nuser->Id = 2;
	//	nuser->Username = "User";
	//	user = nuser;
	//}

	//return user;
}
void Controller::Controller::SendMusic() {
	//Pasos para el envío de datos
	OpenPort();
	ArduinoPort->Write("H");
	ClosePort();
}

float Controller::Controller::ReceiveDataHumidity() {
	OpenPort();
	if (ArduinoPort->BytesToRead > 0) {
		String^ data = ArduinoPort->ReadLine();
		array<String^>^ values = data->Split(',');
		float humidity = Convert::ToSingle(values[1]); //Valor de la humedad
		return humidity;
	}
	else {
		return 50.0;
	}
	ClosePort();
}
float Controller::Controller::ReceiveDataTemp() {
	OpenPort();
	if (ArduinoPort->BytesToRead > 0) {
		String^ data = ArduinoPort->ReadLine();
		array<String^>^ values = data->Split(',');
		float temp = Convert::ToSingle(values[0]); //Valor de la humedad
		return temp;
	}
	else {
		return 50.0;
	}
	ClosePort();
}
float Controller::Controller::ReceiveDataLux() {
	OpenPort();
	if (ArduinoPort->BytesToRead > 0) {
		String^ data = ArduinoPort->ReadLine();
		array<String^>^ values = data->Split(',');
		float lux = Convert::ToSingle(values[2]); //Valor de la humedad
		return lux;
	}
	else {
		return 50.0;
	}
	ClosePort();
}
void Controller::Controller::OpenPort() {
	ArduinoPort = gcnew SerialPort();
	ArduinoPort->PortName = "COM3";
	ArduinoPort->BaudRate = 9600;
	ArduinoPort->Open();
}

void Controller::Controller::ClosePort() {
	if (ArduinoPort->IsOpen) {
		ArduinoPort->Close();
	}
}