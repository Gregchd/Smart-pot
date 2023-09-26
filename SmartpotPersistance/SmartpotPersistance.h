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

			static void PersistTextFile(String^, Object^);
			static Object^ LoadTextFile(String^);

			//Metodos para el manejo de la persistencia de los robots
			static void AddPlant(Plant^ plant);
			static List<Plant^>^ QueryAllPlants();
	};
}
