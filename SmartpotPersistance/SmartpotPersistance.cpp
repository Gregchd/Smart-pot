#include "pch.h"

#include "SmartpotPersistance.h"
using namespace System::IO;

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