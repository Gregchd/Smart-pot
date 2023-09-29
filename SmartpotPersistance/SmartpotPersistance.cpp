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
	if (File::Exists(fileName)) {
		file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
		reader = gcnew StreamReader(file);
		if (fileName->Equals(PLANT_FILE_NAME)) {
			result = gcnew List< Plant^>();
			while (true) {
				String^ line = reader->ReadLine();
				if (line == nullptr) break;
				array<String^>^record=line->Split(',');
				Plant^ plant = gcnew Plant();
				plant->Id = Convert::ToInt32(record[0]);
				plant->Type = record[1];
				plant->Name = record[2];
				((List< Plant^>^)result)->Add(plant);
			}
		}
		if (reader != nullptr) reader->Close();
		if (file!=nullptr) file->Close();
	}
	
	return result;
}

void SmartpotPersistance::Persistance::AddPlant(Plant^ plant) {
	plantsList->Add(plant);
	PersistTextFile(PLANT_FILE_NAME, plantsList);

}

List<Plant^>^ SmartpotPersistance::Persistance::QueryAllPlants() {
	plantsList = (List<Plant^>^)LoadTextFile(PLANT_FILE_NAME);
	return plantsList;
}