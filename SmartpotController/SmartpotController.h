#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Controller {
	public ref class Controller
	{
		// TODO: Agregue aquí los métodos de esta clase
		public:
			static void AddSmartpot(Plant^);
			static List<Plant^>^ QueryAllPlants();

			static void AddUser(User^);
			static List<User^>^ QueryAllUsers();

			static void DeletePlant(int plantId );
			static void UpdatePlant(Plant^);
			static Plant^ QueryPlantById(int plantId);
			//Alarma
			static void AddAlarm(Alarm^ alarm);
			static List<Alarm^>^ QueryAllAlarm();
			static void UpdateAlarm(Alarm^ alarm);
			static void DeleteAlarm(int alarmId);
			static Alarm^ QueryAlarmById(int alarmId);

			static void DeleteUser(String^ useremail);
			static void UpdateUser(User^);
			static User^ QueryUserById(int id);

			//Transaccion de autenticacion de usuario
			static User^ Login(String^ username, String^ password);
	};
}
