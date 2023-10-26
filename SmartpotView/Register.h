#pragma once

namespace SmartpotView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtUsername;



	private: System::Windows::Forms::TextBox^ txtMail;
	private: System::Windows::Forms::TextBox^ txtPassword;




	private: System::Windows::Forms::Label^ label6;
	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtMail = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Green;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(122, 167);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Registrarse";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(63, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Correo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(63, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Usuario";
			this->label4->Click += gcnew System::EventHandler(this, &Register::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(63, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Password";
			// 
			// txtUsername
			// 
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtUsername->Location = System::Drawing::Point(191, 49);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(119, 26);
			this->txtUsername->TabIndex = 6;
			// 
			// txtMail
			// 
			this->txtMail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtMail->Location = System::Drawing::Point(191, 120);
			this->txtMail->Name = L"txtMail";
			this->txtMail->Size = System::Drawing::Size(119, 26);
			this->txtMail->TabIndex = 9;
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtPassword->Location = System::Drawing::Point(191, 83);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(119, 26);
			this->txtPassword->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Green;
			this->label6->Location = System::Drawing::Point(141, 7);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 25);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Registro";
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(355, 226);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtMail);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Register";
			this->Text = L"Register";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Username = txtUsername->Text;
	String^ Mail = txtMail->Text;
	String^ Password = txtPassword->Text;

	User^ user1 = gcnew User(1, Username, Password, Mail);

	Controller::Controller::AddUser(user1);
	MessageBox::Show("Te regsitraste correctamente.", "Registro", MessageBoxButtons::OK, MessageBoxIcon::Information);
	this->Close();
}
};
}
