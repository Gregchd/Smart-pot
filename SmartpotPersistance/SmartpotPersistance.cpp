#include "pch.h"

#include "SmartpotPersistance.h"
using namespace System::IO;

//plant persistance
void SmartpotPersistance::Persistance::PersistTextFile(String^ fileName, Object^ persistObject) {
	FileStream^ file;
	StreamWriter^ writer;


	file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
	writer = gcnew StreamWriter(file);
	if (persistObject->GetType() == List<Plant^>::typeid) {
		List<Plant^>^ plants = (List<Plant^>^)persistObject;
		for (int i = 0; i < plants->Count; i++) {
			Plant^ p = plants[i];
			writer->WriteLine(p->Id + ", " + p->Name + ", " + p->Type);
		}
	}
	if (writer != nullptr) writer->Close();
	if (file != nullptr) file->Close();
}

Object^ SmartpotPersistance::Persistance::LoadTextFile(String^ fileName) {
	FileStream^ file;
	StreamReader^ reader;
	Object^ result;

	return result;
}

void SmartpotPersistance::Persistance::AddPlant(Plant^ plant) {
	plantsList->Add(plant);
	PersistTextFile(PLANT_FILE_NAME, plantsList);

}

List<Plant^>^ SmartpotPersistance::Persistance::QueryAllPlants() {
	return (List<Plant^>^)LoadTextFile(PLANT_FILE_NAME);
}

//User persistance
void UserPersistance::Persistance::PersistTextFile(String^ fileName, Object^ persistObject) {
	FileStream^ file;
	StreamWriter^ writer;


	file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
	writer = gcnew StreamWriter(file);
	if (persistObject->GetType() == List<User^>::typeid) {
		List<User^>^ users = (List<User^>^)persistObject;
		for (int i = 0; i < users->Count; i++) {
			User^ p = users[i];
			writer->WriteLine(p->Username + ", " + p->Password + ", " + p->
			Email);
		}
	}
	if (writer != nullptr) writer->Close();
	if (file != nullptr) file->Close();
}

Object^ UserPersistance::Persistance::LoadTextFile(String^ fileName) {
	FileStream^ file;
	StreamReader^ reader;
	Object^ result;

	return result;
}

void UserPersistance::Persistance::AddUser(User^ user) {
	usersList->Add(user);
	PersistTextFile(USER_FILE_NAME, usersList);

}

List<User^>^ UserPersistance::Persistance::QueryAllUsers() {
	return (List<User^>^)LoadTextFile(USER_FILE_NAME);
}