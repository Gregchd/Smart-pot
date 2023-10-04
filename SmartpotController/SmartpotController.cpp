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

void Controller::Controller::DeletePlant(int plantId) {
	SmartpotPersistance::Persistance::DeletePlant(plantId);
}

void Controller::Controller::UpdatePlant(Plant^plant) {
	SmartpotPersistance::Persistance::UpdatePlant(plant);
}

Plant^ Controller::Controller::QueryPlantById(int plantId) {
	return SmartpotPersistance::Persistance::QueryPlantById(plantId);

}