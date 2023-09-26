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
	};
}
