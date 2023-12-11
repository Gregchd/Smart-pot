#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO::Ports;

namespace Controller {
	public ref class Controller
	{
	private:
		static SerialPort^ ArduinoPort;
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

			static void DeleteUser(int id);
			static void UpdateUser(User^);
			static User^ QueryUserById(int id);

			//Arduino 
			static void OpenPort();
			static void ClosePort();

			static void SendMusic();
			static float ReceiveDataHumidity();
			static float ReceiveDataTemp();
			static float ReceiveDataLux();
			//Transaccion de autenticacion de usuario
			static User^ Login(String^ username, String^ password);
			//Sensor Humedad
			static void AddHumedad(Sensor_humidity^ Sensor_humidity);
			//Sensor Temperatura
			static void AddTemperatura(Sensor_Temperature^ sensor_temperature);
			//Sensor Lux
			static void AddLux(Sensor_Uv^ sensor_Uv);
	};
}
