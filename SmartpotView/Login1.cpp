#include "Login.h"
#include "SmartpotMainForm.h"

System::Void SmartpotView::Login::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username = txtUsername->Text;
	String^ password = txtPassword->Text;

	User^ user = Controller::Controller::Login(username, password);

	if (user != nullptr) {
		MessageBox::Show("Bienvenido, " + user->Username);
		SmartpotMainForm::currentuser = user;
		if (user->GetType() == Admin::typeid) {
			((SmartpotMainForm^)refMainForm)->EnableAdminPermissions();
		}
		else {
			((SmartpotMainForm^)refMainForm)->UserPermissions();
		}
		this->Close();
	}
	else {
		MessageBox::Show("Usuario y/o contraseña incorrectos.");
	}
}
