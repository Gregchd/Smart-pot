#include "SmartpotMainForm.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//Se abre primero el login.
	//SmartpotView::Login^ login = gcnew SmartpotView::Login();
	//Application::Run(login);
	//LPOOInduction is your project name
	SmartpotView::SmartpotMainForm form;
	Application::Run(% form);
}
