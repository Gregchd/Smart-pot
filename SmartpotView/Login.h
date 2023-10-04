#pragma once
#include "SmartpotMainForm.h"
#include "Register.h"

namespace SmartpotView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnLogin;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->label1->ForeColor = System::Drawing::Color::Green;
			this->label1->Location = System::Drawing::Point(137, 34);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Smat-Pot";
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Usuario:";
			this->label2->Click += gcnew System::EventHandler(this, &Login::label2_Click);
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contraseña:";
			this->txtUsername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUsername->Location = System::Drawing::Point(144, 101);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->txtUsername->Size = System::Drawing::Size(237, 30);
			this->txtUsername->TabIndex = 3;
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPassword->Location = System::Drawing::Point(144, 156);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(237, 30);
			this->txtPassword->TabIndex = 4;
			this->txtPassword->UseSystemPasswordChar = true;
			this->btnLogin->BackColor = System::Drawing::Color::Green;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->ForeColor = System::Drawing::Color::White;
			this->btnLogin->Location = System::Drawing::Point(153, 261);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(117, 56);
			this->btnLogin->TabIndex = 5;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->ForeColor = System::Drawing::Color::Green;
			this->label4->Location = System::Drawing::Point(225, 210);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Registrate";
			this->label4->Click += gcnew System::EventHandler(this, &Login::label4_Click);
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->Location = System::Drawing::Point(124, 210);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"¿Eres nuevo\?";
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(427, 352);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"Login";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	SmartpotMainForm^ smartpotMainForm = gcnew SmartpotMainForm();
	String^ username = txtUsername->Text;
	String^ password = txtPassword->Text;
	if (username == "admin" && password == "12345") {
		smartpotMainForm->Show();
		this->Visible = false;
	}
	else {
		MessageBox::Show("Credenciales incorrectas. Inténtalo nuevamente.", "Error de inicio de sesión", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	Register^ registerForm = gcnew Register();
	registerForm->Show();
}
};
}
