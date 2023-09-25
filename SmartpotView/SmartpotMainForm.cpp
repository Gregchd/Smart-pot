#include "SmartpotMainForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//LPOOInduction is your project name
	SmartpotView::SmartpotMainForm form;
	Application::Run(% form);
}