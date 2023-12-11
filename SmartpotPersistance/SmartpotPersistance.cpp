#include "pch.h"

#include "SmartpotPersistance.h"
using namespace System::IO;
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

SqlConnection^ UserPersistance::Persistance::GetConnection() {
	SqlConnection^ conn = gcnew SqlConnection();
	String^ password = "wPZdjV3o";
	conn->ConnectionString = "Data Source=200.16.7.140;Database=a20172696;User ID=a20172696;Password=" + password + ";";
	conn->Open();
	return conn;
}

SqlConnection^ SmartpotPersistance::Persistance::GetConnectionp() {
	SqlConnection^ conn = gcnew SqlConnection();
	String^ password = "wPZdjV3o";
	conn->ConnectionString = "Data Source=200.16.7.140;Database=a20172696;User ID=a20172696;Password=" + password + ";";
	conn->Open();
	return conn;
}

SqlConnection^ AlarmPersistance::Persistance::GetConnectiona() {
	SqlConnection^ conn = gcnew SqlConnection();
	String^ password = "wPZdjV3o";
	conn->ConnectionString = "Data Source=200.16.7.140;Database=a20172696;User ID=a20172696;Password=" + password + ";";
	conn->Open();
	return conn;
}
SqlConnection^ SensorHum::Persistance::GetConnectionHum() {
	SqlConnection^ conn = gcnew SqlConnection();
	String^ password = "2R7J3QMa";
	conn->ConnectionString= "Data Source = 200.16.7.140; Database =  a20201398; User ID =  a20201398; Password = " + password + "; ";
	conn->Open();
	return conn;
}
SqlConnection^ SensorTemp::Persistance::GetConnectionTemp() {
	SqlConnection^ conn = gcnew SqlConnection();
	String^ password = "2R7J3QMa";
	conn->ConnectionString = "Data Source = 200.16.7.140; Database =  a20201398; User ID =  a20201398; Password = " + password + "; ";
	conn->Open();
	return conn;
}
SqlConnection^ SensorLux::Persistance::GetConnectionLux() {
	SqlConnection^ conn = gcnew SqlConnection();
	String^ password = "2R7J3QMa";
	conn->ConnectionString = "Data Source = 200.16.7.140; Database =  a20201398; User ID =  a20201398; Password = " + password + "; ";
	conn->Open();
	return conn;
}
/**************************************************************************************************************************
*************************************************************Plant persistance**********************************************
***************************************************************************************************************************/

void SmartpotPersistance::Persistance::PersistTextFile(String^ fileName, Object^ persistObject) {
	FileStream^ file;
	StreamWriter^ writer;
	file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
	writer = gcnew StreamWriter(file);
	if (persistObject->GetType() == List<Plant^>::typeid) {
		List<Plant^>^ plants = (List<Plant^>^)persistObject;
		for (int i = 0; i < plants->Count; i++) {
			Plant^ p = plants[i];
			writer->WriteLine(p->Id + "," + p->Name + "," + p->Type);
		}
	}
	if (writer != nullptr) writer->Close();
	if (file != nullptr) file->Close();
}

//plant persistance
void SmartpotPersistance::Persistance::PersistXMLFile(String^ fileName, Object^ persistObject) {
	StreamWriter^ writer;
	try {
		writer = gcnew StreamWriter(fileName);
		if (persistObject->GetType() == List<Plant^>::typeid){
			XmlSerializer^xmlSerializer=gcnew XmlSerializer(List<Plant^>::typeid);
			xmlSerializer->Serialize(writer, persistObject);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (writer != nullptr) writer->Close();
	}

	
}

//plant persistance
void SmartpotPersistance::Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject) {
	FileStream^ file;
	BinaryFormatter^ formatter=gcnew BinaryFormatter();
	try {
		file = gcnew FileStream(fileName,FileMode::Create,FileAccess::Write);
		formatter->Serialize(file, persistObject);
		
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (file != nullptr) file->Close();
	}


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

Object^ SmartpotPersistance::Persistance::LoadXMLFile(String^ fileName) {
	//FileStream^ file;
	StreamReader^ reader;
	Object^ result;
	XmlSerializer^ xmlSerializer;

	try{
		if (File::Exists(fileName)) {
			reader = gcnew StreamReader(fileName);
			if (fileName->Equals(PLANT_XML_FILE_NAME)) {
				xmlSerializer = gcnew XmlSerializer(List<Plant^>::typeid);
				result = (List<Plant^>^)xmlSerializer->Deserialize(reader);
			}
			if (reader != nullptr) reader->Close();		
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
	}
	return result;
}

Object^ SmartpotPersistance::Persistance::LoadBinaryFile(String^ fileName) {
	//FileStream^ file;
	//StreamReader^ reader;
	Object^ result;
	FileStream^ file;
	BinaryFormatter^ formatter;
	//XmlSerializer^ xmlSerializer;

	try {
		if (File::Exists(fileName)) {
			//file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
			file = gcnew FileStream(fileName,FileMode::Open,FileAccess::Read);
			formatter = gcnew BinaryFormatter();
            if (fileName->Equals(PLANT_BIN_FILE_NAME)) {
				//result = gcnew List< Plant^>();
				result = formatter->Deserialize(file);
			}
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (file != nullptr) file->Close();
	}
	return result;
}

void SmartpotPersistance::Persistance::AddPlant(Plant^ plant) {
	plantsList->Add(plant);
	//PersistTextFile(PLANT_FILE_NAME, plantsList);
	//PersistXMLFile(PLANT_XML_FILE_NAME, plantsList);
	//PersistBinaryFile(PLANT_BIN_FILE_NAME, plantsList);

	SqlConnection^ conn = GetConnectionp();

	String^ sqlStr = "INSERT INTO PLANTS(PLANT_NAME, PLANT_TYPE, USERID) " +
		"VALUES('" + plant->Name + "', '" + plant->Type + "', '" + plant->UserId + "')";

	SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
	cmd->ExecuteNonQuery();
	if (conn != nullptr) conn->Close();

}

List<Plant^>^ SmartpotPersistance::Persistance::LoadPlant() {
	List<Plant^>^ plantsList = gcnew List<Plant^>();

	SqlConnection^ conn = GetConnectionp();
	SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM PLANTS", conn);
	SqlDataReader^ reader = cmd->ExecuteReader();

	while (reader->Read()) {
		Plant^ plant = gcnew Plant();
		plant->Id = Convert::ToInt32(reader["Id"]->ToString());
		plant->Name = reader["Plant_name"]->ToString();
		plant->Type = reader["Plant_type"]->ToString();
		plant->UserId = Convert::ToInt32(reader["Userid"]->ToString());
		plantsList->Add(plant);
	}
	if (conn != nullptr) conn->Close();

	return plantsList;
}

void SmartpotPersistance::Persistance::UpdatePlant(Plant^ plant) {
	for (int i = 0; i < plantsList->Count; i++) {
		if (plantsList[i]->Id == plant->Id)
			plantsList[i] = plant;
	}
	
	//PersistTextFile(PLANT_FILE_NAME, plantsList);
	//PersistXMLFile(PLANT_XML_FILE_NAME, plantsList);
	//PersistBinaryFile(PLANT_BIN_FILE_NAME, plantsList);
	SqlConnection^ conn = GetConnectionp();

	String^ sqlStr = "UPDATE PLANTS SET PLANT_NAME='" + plant->Name + "', PLANT_TYPE='" + plant->Type+ "', USERID='" + plant->UserId + "' WHERE id=" + plant->Id;

	SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
	cmd->ExecuteNonQuery();
	if (conn != nullptr) conn->Close();
}

void SmartpotPersistance::Persistance::DeletePlant(int plantId) {
	for (int i = 0; i < plantsList->Count; i++) {
		if (plantsList[i]->Id == plantId)
			plantsList->RemoveAt(i);
	}

	//PersistTextFile(PLANT_FILE_NAME, plantsList);
	//PersistXMLFile(PLANT_XML_FILE_NAME, plantsList);
	//PersistBinaryFile(PLANT_BIN_FILE_NAME, plantsList);

	SqlConnection^ conn = GetConnectionp();

	String^ sqlStr = "DELETE FROM PLANTS " + " WHERE id=" + plantId;

	SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
	cmd->ExecuteNonQuery();
	if (conn != nullptr) conn->Close();
}

List<Plant^>^ SmartpotPersistance::Persistance::QueryAllPlants() {
	//plantsList= (List<Plant^>^)LoadTextFile(PLANT_FILE_NAME);
	//plantsList= (List<Plant^>^)LoadXMLFile(PLANT_XML_FILE_NAME);
	plantsList = LoadPlant();
	return plantsList;
	
}
Plant^ SmartpotPersistance::Persistance::QueryPlantById(int plantId) {
	//plantsList = (List<Plant^>^)LoadXMLFile(PLANT_XML_FILE_NAME);
	plantsList = LoadPlant();

	for (int i = 0; i < plantsList->Count; i++) {
		if (plantsList[i]->Id == plantId)
			return plantsList[i];
	}
	return nullptr;
}
/**************************************************************************************************************************
*************************************************************User persistance**********************************************
***************************************************************************************************************************/

void UserPersistance::Persistance::PersistTextFile(String^ fileName, Object^ persistObject) {
	FileStream^ file;
	StreamWriter^ writer;


	file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
	writer = gcnew StreamWriter(file);
	if (persistObject->GetType() == List<User^>::typeid) {
		List<User^>^ users = (List<User^>^)persistObject;
		for (int i = 0; i < users->Count; i++) {
			User^ p = users[i];
			writer->WriteLine(p->Username + "," + p->Password + "," + p->
			Email);
		}
	}
	if (writer != nullptr) writer->Close();
	if (file != nullptr) file->Close();
}


void UserPersistance::Persistance::PersistXMLFile(String^ fileName, Object^ persistObject) {
	StreamWriter^ writer;
	try {
		writer = gcnew  StreamWriter(fileName);
		if (persistObject->GetType() == List<User^>::typeid) {
			XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<User^>::typeid);
			xmlSerializer->Serialize(writer, persistObject);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally { //Es el más importante
		if (writer != nullptr) writer->Close();
	}
}

void UserPersistance::Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject) {
	FileStream^ file;
	BinaryFormatter^ formatter = gcnew BinaryFormatter();
	try {
		file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
		formatter->Serialize(file, persistObject);
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally { //Es el más importante
		if (file != nullptr) file->Close();
	}
}


Object^ UserPersistance::Persistance::LoadTextFile(String^ fileName) {
	FileStream^ file;
	StreamReader^ reader;
	Object^ result;

	if (File::Exists(fileName)) {
		file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
		reader = gcnew StreamReader(file);
		if (fileName->Equals(USER_FILE_NAME)) {
			result = gcnew List< User^>();
			while (true) {
				String^ line = reader->ReadLine();
				if (line == nullptr) break;
				array<String^>^ record = line->Split(',');
				User^ user = gcnew User();
				//user->Id = 1;//Convert::ToInt32(record[0]);
				user->Username = record[0];
				user->Password = record[1];
				user->Email = record[2];
				((List< User^>^)result)->Add(user);
			}
		}
		if (reader != nullptr) reader->Close();
		if (file != nullptr) file->Close();
	}


	return result;
}

Object^ UserPersistance::Persistance::LoadXMLFile(String^ fileName) {
	StreamReader^ reader;
	Object^ result;
	XmlSerializer^ xmlSerializer;
	try {
		if (File::Exists(fileName)) {
			reader = gcnew StreamReader(fileName);
			if (fileName->Equals(USER_XML_FILE_NAME)) {
				xmlSerializer = gcnew XmlSerializer(List<User^>::typeid);
				result = (List<User^>^)xmlSerializer->Deserialize(reader);
			}
			if (reader != nullptr) reader->Close();
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
	}
	return result;
}

Object^ UserPersistance::Persistance::LoadBinaryFile(String^ fileName) {
	Object^ result;
	FileStream^ file;
	BinaryFormatter^ formatter;
	try {
		if (File::Exists(fileName)) {
			file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
			formatter = gcnew BinaryFormatter();

			if (fileName->Equals(USER_BIN_FILE_NAME)) {
				result = formatter->Deserialize(file);
			}
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (file != nullptr) file->Close();
	}
	return result;
}

void UserPersistance::Persistance::AddUser(User^ user) {
	usersList->Add(user);
	//PersistTextFile(USER_FILE_NAME, usersList);
	//wPersistXMLFile(USER_XML_FILE_NAME, usersList);
	//PersistBinaryFile(USER_BIN_FILE_NAME, usersList);

	SqlConnection^ conn = GetConnection();

	String^ sqlStr = "INSERT INTO USERS(USERNAME, PASSWORD, EMAIL) " +
		"VALUES('" + user->Username + "', '" + user->Password + "', '" + user->Email + "')";

	SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
	cmd->ExecuteNonQuery();
	if (conn != nullptr) conn->Close();
}

List<User^>^ UserPersistance::Persistance::LoadUser() {
	List<User^>^ userList = gcnew List<User^>();

	SqlConnection^ conn = GetConnection();
	SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM USERS", conn);
	SqlDataReader^ reader = cmd->ExecuteReader();

	while (reader->Read()) {
		User^ user = gcnew User();
		user->Id = Convert::ToInt32(reader["Id"]->ToString());
		user->Username = reader["Username"]->ToString();
		user->Password = reader["Password"]->ToString();
		user->Email = reader["Email"]->ToString();
		userList->Add(user);
	}
	if (conn != nullptr) conn->Close();

	return userList;
}

void UserPersistance::Persistance::UpdateUser(User^ user) {
	//Corregir por ID
	for (int i = 0; i < usersList->Count; i++) {
		if (usersList[i]->Id == user->Id)
			usersList[i] = user;
	}

	//PersistTextFile(USER_FILE_NAME, usersList);
	//PersistXMLFile(USER_XML_FILE_NAME, usersList);
	//PersistBinaryFile(USER_BIN_FILE_NAME, usersList);

	SqlConnection^ conn = GetConnection();

	String^ sqlStr = "UPDATE USERS SET USERNAME='" + user->Username + "', PASSWORD='" + user->Password + "', EMAIL='" + user->Email + "' WHERE id=" + user->Id;

	SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
	cmd->ExecuteNonQuery();
	if (conn != nullptr) conn->Close();
}

void UserPersistance::Persistance::DeleteUser(int id) {
	for (int i = 0; i < usersList->Count; i++) {
		if (usersList[i]->Id == id)
			usersList->RemoveAt(i);
	}

	//PersistTextFile(USER_FILE_NAME, usersList);
	//PersistXMLFile(USER_XML_FILE_NAME, usersList);
	//PersistBinaryFile(USER_BIN_FILE_NAME, usersList);

	SqlConnection^ conn = GetConnection();

	String^ sqlStr = "DELETE FROM USERS " + " WHERE id=" + id;

	SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
	cmd->ExecuteNonQuery();
	if (conn != nullptr) conn->Close();
}

List<User^>^ UserPersistance::Persistance::QueryAllUsers() {
	//usersList = (List<User^>^)LoadTextFile(USER_FILE_NAME);
	//usersList = (List<User^>^)LoadXMLFile(USER_XML_FILE_NAME);
	//usersList = (List<User^>^)LoadTextFile(USER_BIN_FILE_NAME);
	usersList = LoadUser();
	return usersList;
}



User^ UserPersistance::Persistance::QueryUserById(int id) {
	//usersList = (List<User^>^)LoadTextFile(USER_FILE_NAME);
	//usersList = (List<User^>^)LoadXMLFile(USER_XML_FILE_NAME);
	//usersList = (List<User^>^)LoadTextFile(USER_BIN_FILE_NAME);
	usersList = LoadUser();

	for (int i = 0; i < usersList->Count; i++) {
		if (usersList[i]->Id == id)
			return usersList[i];
	}
	return nullptr;
}


User^ UserPersistance::Persistance::ValidateUser(String^ username, String^ password) {
	//LoginList = (List<User^>^)LoadXMLFile(USER_XML_FILE_NAME);
	LoginList = LoadUser();
	for (int i = 0; i < LoginList->Count; i++) {
		if (LoginList[i]->Username->Equals(username) && LoginList[i]->Password->Equals(password))
			return LoginList[i];
	}
	return nullptr;
}

/**************************************************************************************************************************
*************************************************************Alarm persistance**********************************************
***************************************************************************************************************************/


// PersistTextFile
void AlarmPersistance::Persistance::PersistTextFile(String^ fileName, Object^ persistObject) {
	FileStream^ file;
	StreamWriter^ writer;
	file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
	writer = gcnew StreamWriter(file);
	if (persistObject->GetType() == List<Alarm^>::typeid) {
		List<Alarm^>^ alarms = (List<Alarm^>^)persistObject;
		for (int i = 0; i < alarms->Count; i++) {
			Alarm^ r = alarms[i];
			writer->WriteLine(r->Id + "," + r->Hour + "," + r->Date);
		}
	}
	if (writer != nullptr) writer->Close();
	if (file != nullptr) file->Close();
}

void AlarmPersistance::Persistance::PersistXMLFile(String^ fileName, Object^ persistObject) {
	StreamWriter^ writer;
	try {
		writer = gcnew  StreamWriter(fileName);
		if (persistObject->GetType() == List<Alarm^>::typeid) {
			XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Alarm^>::typeid);
			xmlSerializer->Serialize(writer, persistObject);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally { //Es el más importante
		if (writer != nullptr) writer->Close();
	}
}

//Object TXT
Object^ AlarmPersistance::Persistance::LoadTextFile(String^ fileName)
{
	FileStream^ file;
	StreamReader^ reader;
	Object^ result;
	if (File::Exists(fileName))
	{
		file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
		reader = gcnew StreamReader(file);
		if (fileName->Equals(ALARM_FILE_NAME))
		{
			result = gcnew List<Alarm^>();
			while (true)
			{
				String^ line = reader->ReadLine();
				if (line == nullptr) break;
				array<String^>^ record = line->Split(',');
				Alarm^ alarm = gcnew Alarm();
				alarm->Id = Convert::ToInt32(record[0]);
				alarm->Hour = record[1];
				alarm->Date = record[2];
				((List<Alarm^>^)result)->Add(alarm);
			}
		}
		if (reader != nullptr) reader->Close();
		if (file != nullptr) file->Close();

	}
	return result;
}
//Object XML y Binario pendiente 
Object^ AlarmPersistance::Persistance::LoadXMLFile(String^ fileName) {
	StreamReader^ reader;
	Object^ result;
	XmlSerializer^ xmlSerializer;
	try {
		if (File::Exists(fileName)) {
			reader = gcnew StreamReader(fileName);
			if (fileName->Equals(ALARM_XML_FILE_NAME)) {
				xmlSerializer = gcnew XmlSerializer(List<Alarm^>::typeid);
				result = (List<Alarm^>^)xmlSerializer->Deserialize(reader);
			}
			if (reader != nullptr) reader->Close();
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
	}
	return result;
}

void AlarmPersistance::Persistance::AddAlarm(Alarm^ alarm) {
	alarmList->Add(alarm);
	//PersistTextFile(USER_FILE_NAME, usersList);
	//wPersistXMLFile(USER_XML_FILE_NAME, usersList);
	//PersistBinaryFile(USER_BIN_FILE_NAME, usersList);

	SqlConnection^ conn = GetConnectiona();

	String^ sqlStr = "INSERT INTO ALARMS(HOUR, DATE, ID_PLANT) " +
		"VALUES('" + alarm->Hour + "', '" + alarm->Date + "', '" + alarm->Id_plant + "')";

	SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
	cmd->ExecuteNonQuery();
	if (conn != nullptr) conn->Close();
}

//							ADD ALARM
//void AlarmPersistance::Persistance::AddAlarm(Alarm^ alarm)
//{
	//alarmList->Add(alarm);
	//PersistTextFile(ALARM_FILE_NAME, alarmList);
	//PersistXMLFile(ALARM_XML_FILE_NAME, alarmList);
//}

List<Alarm^>^ AlarmPersistance::Persistance::LoadAlarm() {
	List<Alarm^>^ alarmList = gcnew List<Alarm^>();

	SqlConnection^ conn = GetConnectiona();
	SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM ALARMS", conn);
	SqlDataReader^ reader = cmd->ExecuteReader();

	while (reader->Read()) {
		Alarm^ alarm = gcnew Alarm();
		alarm->Id = Convert::ToInt32(reader["Id"]->ToString());
		alarm->Hour = reader["Hour"]->ToString();
		alarm->Date = reader["Date"]->ToString();
		alarm->Id_plant = Convert::ToInt32(reader["Id_plant"]->ToString());
		alarmList->Add(alarm);
	}
	if (conn != nullptr) conn->Close();

	return alarmList;
}



//							UPDATE ALARM
void AlarmPersistance::Persistance::UpdateAlarm(Alarm^ alarm)
{
	for (int i = 0; i < alarmList->Count; i++) {
		if (alarmList[i]->Id == alarm->Id)
			alarmList[i] = alarm;
	}
	//PersistTextFile(ALARM_FILE_NAME, alarmList);
	//PersistXMLFile(ALARM_XML_FILE_NAME, alarmList);
	SqlConnection^ conn = GetConnectiona();

	String^ sqlStr = "UPDATE ALARMS SET HOUR='" + alarm->Hour + "', DATE='" + alarm->Date + "', ID_PLANT='" + alarm->Id_plant + "' WHERE id=" + alarm->Id;

	SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
	cmd->ExecuteNonQuery();
	if (conn != nullptr) conn->Close();
}
//							DELETE
void AlarmPersistance::Persistance::DeleteAlarm(int  alarmId)
{
	for (int i = 0; i < alarmList->Count; i++) {
		if (alarmList[i]->Id == alarmId)
			alarmList->RemoveAt(i);
	}
	//PersistTextFile(ALARM_FILE_NAME, alarmList);
	//PersistXMLFile(ALARM_XML_FILE_NAME, alarmList);

	SqlConnection^ conn = GetConnectiona();

	String^ sqlStr = "DELETE FROM ALARMS " + " WHERE id=" + alarmId;

	SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
	cmd->ExecuteNonQuery();
	if (conn != nullptr) conn->Close();
}
//							QUERYALL
List<Alarm^>^ AlarmPersistance::Persistance::QueryAllAlarm() 
{
	//alarmList = (List<Alarm^>^)LoadXMLFile(ALARM_XML_FILE_NAME);
	alarmList = LoadAlarm();
	return alarmList;
}
//							QueryAlarmById
Alarm^ AlarmPersistance::Persistance::QueryAlarmById(int alarmId)
{
	//alarmList = (List<Alarm^>^)LoadXMLFile(ALARM_XML_FILE_NAME);
	alarmList = LoadAlarm();

	for (int i = 0; i < alarmList->Count; i++) {
		if (alarmList[i]->Id == alarmId)
			return alarmList[i];
	}

	return nullptr;
}


/**************************************************************************************************************************
*************************************************************Sensor persistance**********************************************
***************************************************************************************************************************/


void SensorPersistance::Persistance::PersistXMLFile(String^ fileName, Object^ persistObject) {
	StreamWriter^ writer;
	try {
		writer = gcnew  StreamWriter(fileName);
		if (persistObject->GetType() == List<User^>::typeid) {
			XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<User^>::typeid);
			xmlSerializer->Serialize(writer, persistObject);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally { //Es el más importante
		if (writer != nullptr) writer->Close();
	}
}

Object^ SensorPersistance::Persistance::LoadXMLFile(String^ fileName) {
	StreamReader^ reader;
	Object^ result;
	XmlSerializer^ xmlSerializer;
	try {
		if (File::Exists(fileName)) {
			reader = gcnew StreamReader(fileName);
			if (fileName->Equals(SENSOR_XML_FILE_NAME)) {
				xmlSerializer = gcnew XmlSerializer(List<User^>::typeid);
				result = (List<User^>^)xmlSerializer->Deserialize(reader);
			}
			if (reader != nullptr) reader->Close();
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
	}
	return result;
}

void SensorPersistance::Persistance::AddSensor(Sensor^ sensor) {
	sensorList->Add(sensor);
	//PersistTextFile(USER_FILE_NAME, usersList);
	PersistXMLFile(SENSOR_XML_FILE_NAME, sensorList);
	//PersistBinaryFile(USER_BIN_FILE_NAME, usersList);
}

void SensorPersistance::Persistance::UpdateSensor(Sensor^ sensor) {
	//Corregir por ID
	for (int i = 0; i < sensorList->Count; i++) {
		if (sensorList[i]->Id == sensor->Id)
			sensorList[i] = sensor;
	}

	//PersistTextFile(USER_FILE_NAME, usersList);
	PersistXMLFile(SENSOR_XML_FILE_NAME, sensorList);
	//PersistBinaryFile(USER_BIN_FILE_NAME, usersList);
}

void SensorPersistance::Persistance::DeleteSensor(int id) {
	for (int i = 0; i <  sensorList->Count; i++) {
		if (sensorList[i]->Id == id)
			sensorList->RemoveAt(i);
	}

	//PersistTextFile(USER_FILE_NAME, usersList);
	PersistXMLFile(SENSOR_XML_FILE_NAME, sensorList);
	//PersistBinaryFile(USER_BIN_FILE_NAME, usersList);
}

List<Sensor^>^ SensorPersistance::Persistance::QueryAllSensors() {
	//usersList = (List<User^>^)LoadTextFile(USER_FILE_NAME);
	sensorList = (List<Sensor^>^)LoadXMLFile(SENSOR_XML_FILE_NAME);
	//usersList = (List<User^>^)LoadTextFile(USER_BIN_FILE_NAME);
	return sensorList;
}



Sensor^ SensorPersistance::Persistance::QuerySensorById(int id) {
	//usersList = (List<User^>^)LoadTextFile(USER_FILE_NAME);
	sensorList = (List<Sensor^>^)LoadXMLFile(SENSOR_XML_FILE_NAME);
	//usersList = (List<User^>^)LoadTextFile(USER_BIN_FILE_NAME);
	for (int i = 0; i < sensorList->Count; i++) {
		if (sensorList[i]->Id == id)
			return sensorList[i];
	}
	return nullptr;
}

/**************************************************************************************************************************
*************************************************************Id persistance**********************************************
***************************************************************************************************************************/

void IdPersistance::Persistance::PersistXMLFile(String^ fileName, Object^ persistObject) {
	StreamWriter^ writer;
	try {
		writer = gcnew  StreamWriter(fileName);
		if (persistObject->GetType() == List<Id^>::typeid) {
			XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Id^>::typeid);
			xmlSerializer->Serialize(writer, persistObject);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally { //Es el más importante
		if (writer != nullptr) writer->Close();
	}
}

Object^ IdPersistance::Persistance::LoadXMLFile(String^ fileName) {
	StreamReader^ reader;
	Object^ result;
	XmlSerializer^ xmlSerializer;
	try {
		if (File::Exists(fileName)) {
			reader = gcnew StreamReader(fileName);
			if (fileName->Equals(ID_XML_FILE_NAME)) {
				xmlSerializer = gcnew XmlSerializer(List<Id^>::typeid);
				result = (List<Id^>^)xmlSerializer->Deserialize(reader);
			}
			if (reader != nullptr) reader->Close();
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
	}
	return result;
}

void IdPersistance::Persistance::AddUser() {
	for (int i = 0; i < idList->Count; i++) {
		if (i == 0) {
			idList[i]->Idn = idList[i]->Idn + 1;
		}
	}
	PersistXMLFile(ID_XML_FILE_NAME, idList);
}

void IdPersistance::Persistance::AddSmartpot() {
	for (int i = 0; i < idList->Count; i++) {
		if (i == 1) {
			idList[i]->Idn = idList[i]->Idn + 1;
		}
	}
	PersistXMLFile(ID_XML_FILE_NAME, idList);
}

void IdPersistance::Persistance::AddAlarm() {
	for (int i = 0; i < idList->Count; i++) {
		if (i == 2) {
			idList[i]->Idn = idList[i]->Idn + 1;
		}
	}
	PersistXMLFile(ID_XML_FILE_NAME, idList);
}

void IdPersistance::Persistance::AddStreak() {
	for (int i = 0; i < idList->Count; i++) {
		if (i == 3) {
			idList[i]->Idn = idList[i]->Idn + 1;
		}
	}
	PersistXMLFile(ID_XML_FILE_NAME, idList);
}



List<Id^>^ IdPersistance::Persistance::QueryAllIds() {
	//usersList = (List<User^>^)LoadTextFile(USER_FILE_NAME);
	idList = (List<Id^>^)LoadXMLFile(ID_XML_FILE_NAME);
	//usersList = (List<User^>^)LoadTextFile(USER_BIN_FILE_NAME);
	return idList;
}



//User^ UserPersistance::Persistance::QueryUserById(int id) {
	//usersList = (List<User^>^)LoadTextFile(USER_FILE_NAME);
//	usersList = (List<User^>^)LoadXMLFile(USER_XML_FILE_NAME);
	//usersList = (List<User^>^)LoadTextFile(USER_BIN_FILE_NAME);
	//for (int i = 0; i < usersList->Count; i++) {
	//	if (usersList[i]->Id == id)
	//		return usersList[i];
//	}
	//return nullptr;
//}

/*********************************************************************************************************
**********************************************SENSOR HUMEDAD**********************************************
**********************************************************************************************************/
int SensorHum::Persistance::AddHumedad(Sensor_humidity^ Sensor_humidity){
	int sensorId;
	SqlConnection^ conn;
	try {
		conn = GetConnectionHum();
		String^ sqlStr = "dbo.usp_AddHumedad";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Parameters->Add("@valor", System::Data::SqlDbType::Int);
		SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
		outputIdParam->Direction = System::Data::ParameterDirection::Output;
		cmd->Parameters->Add(outputIdParam);
		cmd->Prepare();
		cmd->Parameters["@valor"]->Value = Sensor_humidity->Value;
		cmd->ExecuteNonQuery();
		sensorId = Convert::ToInt32(cmd->Parameters["@id"]->Value);
	}
	catch (Exception^ ex) {
		//Guardar en el log o mandar un correo electrónico al Administrador
		throw ex;
	}
	finally {
		/* Paso 5: Se cierran los objetos de conexión */
		if (conn != nullptr) conn->Close();
	}
	return sensorId;
}

/*********************************************************************************************************
**********************************************SENSOR TEMPERA**********************************************
**********************************************************************************************************/
int SensorTemp::Persistance::AddTemperatura(Sensor_Temperature^ sensor_temperatura) {
	int sensorId;
	SqlConnection^ conn;
	try {
		conn = GetConnectionTemp();
		String^ sqlStr = "dbo.usp_AddTemperatura";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Parameters->Add("@valor", System::Data::SqlDbType::Int);
		SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
		outputIdParam->Direction = System::Data::ParameterDirection::Output;
		cmd->Parameters->Add(outputIdParam);
		cmd->Prepare();
		cmd->Parameters["@valor"]->Value = sensor_temperatura->Value;
		cmd->ExecuteNonQuery();
		sensorId = Convert::ToInt32(cmd->Parameters["@id"]->Value);
	}
	catch (Exception^ ex) {
		//Guardar en el log o mandar un correo electrónico al Administrador
		throw ex;
	}
	finally {
		/* Paso 5: Se cierran los objetos de conexión */
		if (conn != nullptr) conn->Close();
	}
	return sensorId;
}

/*********************************************************************************************************
**********************************************  SENSOR LUX  **********************************************
**********************************************************************************************************/
int SensorLux::Persistance::AddLux(Sensor_Uv^ sensor_Uv) {
	int sensorId;
	SqlConnection^ conn;
	try {
		conn = GetConnectionLux();
		String^ sqlStr = "dbo.usp_AddLux";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Parameters->Add("@valor", System::Data::SqlDbType::Int);
		SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
		outputIdParam->Direction = System::Data::ParameterDirection::Output;
		cmd->Parameters->Add(outputIdParam);
		cmd->Prepare();
		cmd->Parameters["@valor"]->Value = sensor_Uv->Value;
		cmd->ExecuteNonQuery();
		sensorId = Convert::ToInt32(cmd->Parameters["@id"]->Value);
	}
	catch (Exception^ ex) {
		//Guardar en el log o mandar un correo electrónico al Administrador
		throw ex;
	}
	finally {
		/* Paso 5: Se cierran los objetos de conexión */
		if (conn != nullptr) conn->Close();
	}
	return sensorId;
}