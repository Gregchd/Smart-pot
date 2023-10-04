#include "pch.h"

#include "SmartpotController.h"

void Controller::Controller::AddSmartpot(Plant^ plant) {
	SmartpotPersistance::Persistance::AddPlant(plant);
}

List<Plant^>^ Controller::Controller::QueryAllPlants() {
	return SmartpotPersistance::Persistance::QueryAllPlants();
}

void Controller::Controller::AddUser(User^ user) {
	UserPersistance::Persistance::AddUser(user);
}

List<User^>^ Controller::Controller::QueryAllUsers() {
	return UserPersistance::Persistance::QueryAllUsers();
}