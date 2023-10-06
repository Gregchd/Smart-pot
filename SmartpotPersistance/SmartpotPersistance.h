#pragma once

using namespace System;
using namespace System::Collections::Generic;


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

		public:
			static String^ USER_FILE_NAME = "users.txt";

			static void PersistTextFile(String^, Object^);
			static Object^ LoadTextFile(String^);

			//Metodos para el manejo de la persistencia de los robots
			static void AddUser(User^ user);
			static List<User^>^ QueryAllUsers();

			static void UpdateUser(User^ user);
			static void DeleteUser(String^ useremail);
			static User^ QueryUserByEmail(String^ useremail);
	};
}
