#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;


namespace SmartpotPersistance {
	public ref class Persistance
	{
		private:
			static List<Plant^>^ plantsList = gcnew List<Plant^>();
		// TODO: Agregue aquí los métodos de esta clase.
		public:
			static String^ PLANT_FILE_NAME = "plants.txt";
			static String^ PLANT_XML_FILE_NAME = "plants.xml";
			static String^ PLANT_BIN_FILE_NAME = "plants.bin";

			static void PersistTextFile(String^, Object^);
			static Object^ LoadTextFile(String^);
			static void PersistXMLFile(String^ fileName, Object^ persistObject);
			static Object^ LoadXMLFile(String^ fileName);
			static void PersistBinaryFile(String^ fileName, Object^ persistObject);
			static Object^ LoadBinaryFile(String^ fileName);
			//Metodos para el manejo de la persistencia de los robots

			static void AddPlant(Plant^ plant);
			static List<Plant^>^ QueryAllPlants();
			static void UpdatePlant(Plant^ plant);
			static void DeletePlant(int plantId);
			static Plant^ QueryPlantById(int plantId);
	};      
}

namespace UserPersistance {
	public ref class Persistance
	{
		private: 
			static List<User^>^ usersList = gcnew List<User^>();
			static List<User^>^ LoginList = gcnew List<User^>();

		public:
			static String^ USER_FILE_NAME = "users.txt";
			static String^ USER_XML_FILE_NAME = "users.xml";
			static String^ USER_BIN_FILE_NAME = "robots.bin";

			static SqlConnection^ GetConnection();

			static void PersistTextFile(String^, Object^);
			static Object^ LoadTextFile(String^);
			static void PersistXMLFile(String^ fileName, Object^ persistObject);
			static Object^ LoadXMLFile(String^ fileName);
			static void PersistBinaryFile(String^ fileName, Object^ persistObject);
			static Object^ LoadBinaryFile(String^ fileName);

			//Metodos para el manejo de la persistencia de users
			static void AddUser(User^ user);
			static List<User^>^ LoadUser();
			static List<User^>^ QueryAllUsers();
			static void UpdateUser(User^ user);
			static void DeleteUser(int id);
			static User^ QueryUserById(int id);
			static User^ ValidateUser(String^ username, String^ password);
	};
}

namespace AlarmPersistance {
	public ref class Persistance
	{
		private:
			static List<Alarm^>^ alarmList = gcnew List<Alarm^>();
		public:
			static String^ ALARM_FILE_NAME = "alarm.txt";
			static String^ ALARM_XML_FILE_NAME = "alarm.xml";
			//static String^ ALARM_BIN_FILE_NAME = "alarm.bin";

			static void PersistTextFile(String^, Object^);
			static Object^ LoadTextFile(String^);
			static void PersistXMLFile(String^ fileName, Object^ persistObject);
			static Object^ LoadXMLFile(String^ fileName);
			//static void PersistBinaryFile(String^ fileName, Object^ persistObject);
			//static Object^ LoadBinaryFile(String^ fileName);

			// Métodos para el manejo de la persistencia de las alarmas

			static void AddAlarm(Alarm^ alarm);
			static List<Alarm^>^ QueryAllAlarm();
			static void UpdateAlarm(Alarm^ alarm);
			static void DeleteAlarm(int alarmId);
			static Alarm^ QueryAlarmById(int alarmId);
	};
}

namespace SensorPersistance {
	public ref class Persistance {
		private:
			static List<Sensor^>^ sensorList = gcnew List<Sensor^>;
		public:
			//static String^ SENSOR_FILE_NAME = "sensors.txt";
			static String^ SENSOR_XML_FILE_NAME = "sensors.xml";
			//static String^ SENSOR_BIN_FILE_NAME = "sensors.bin";

			//static void PersistTextFile(String^, Object^);
			//static Object^ LoadTextFile(String^);
			static void PersistXMLFile(String^ fileName, Object^ persistObject);
			static Object^ LoadXMLFile(String^ fileName);
			//static void PersistBinaryFile(String^ fileName, Object^ persistObject);
			//static Object^ LoadBinaryFile(String^ fileName);

			//Metodos para el manejo de la persistencia de los robots
			static void AddSensor(Sensor^ sensor);
			static List<Sensor^>^ QueryAllSensors();
			static void UpdateSensor(Sensor^ sensor);
			static void DeleteSensor(int id);
			static Sensor^ QuerySensorById(int id);


	};

}

namespace IdPersistance {
	public ref class Persistance {
		private:
			static List<Id^>^ idList = gcnew List<Id^>;
	public:
		static String^ ID_XML_FILE_NAME = "ids.xml";

		static void PersistXMLFile(String^ filename, Object^ persistObject);
		static Object^ LoadXMLFile(String^ filename);

		static List<Id^>^ QueryAllIds();

		static void AddUser();
		static void AddSmartpot();
		static void AddAlarm();
		static void AddStreak();

	};
}