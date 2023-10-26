#include "pch.h"

#include "SmartpotController.h"


/*******************		Plant			*******************+*/
void Controller::Controller::AddSmartpot(Plant^ plant) {
	SmartpotPersistance::Persistance::AddPlant(plant);
}

List<Plant^>^ Controller::Controller::QueryAllPlants() {
	return SmartpotPersistance::Persistance::QueryAllPlants();
}

void Controller::Controller::AddUser(User^ user) {
	UserPersistance::Persistance::AddUser(user);
}


/*******************		User			*******************+*/
List<User^>^ Controller::Controller::QueryAllUsers() {
	return UserPersistance::Persistance::QueryAllUsers();
}

void Controller::Controller::DeletePlant(int plantId) {
	SmartpotPersistance::Persistance::DeletePlant(plantId);
}

void Controller::Controller::UpdatePlant(Plant^plant) {
	SmartpotPersistance::Persistance::UpdatePlant(plant);
}

Plant^ Controller::Controller::QueryPlantById(int plantId) {
	return SmartpotPersistance::Persistance::QueryPlantById(plantId);

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

void Controller::Controller::DeleteUser(String^ useremail) {
	UserPersistance::Persistance::DeleteUser(useremail);
}

void Controller::Controller::UpdateUser(User^ user) {
	UserPersistance::Persistance::UpdateUser(user);
}

User^ Controller::Controller::QueryUserById(int id) {
	return UserPersistance::Persistance::QueryUserById(id);

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