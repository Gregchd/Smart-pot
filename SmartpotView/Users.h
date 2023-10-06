#pragma once

namespace SmartpotView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de Users
	/// </summary>
	public ref class Users : public System::Windows::Forms::Form
	{
	public:
		Users(void)
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
		~Users()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textName;
	private: System::Windows::Forms::TextBox^ textMail;
	private: System::Windows::Forms::TextBox^ textPassword;
	private: System::Windows::Forms::DataGridView^ dgvUser;




	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnModify;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textLName;
	private: System::Windows::Forms::TextBox^ textUsername;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userMail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userPassword;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userLastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UserUsername;

	protected:

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
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->textMail = (gcnew System::Windows::Forms::TextBox());
			this->textPassword = (gcnew System::Windows::Forms::TextBox());
			this->dgvUser = (gcnew System::Windows::Forms::DataGridView());
			this->userName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userMail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userPassword = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userLastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UserUsername = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnModify = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textLName = (gcnew System::Windows::Forms::TextBox());
			this->textUsername = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUser))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(72, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(72, 214);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Correo";
			// 
			// textName
			// 
			this->textName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textName->Location = System::Drawing::Point(183, 92);
			this->textName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(184, 35);
			this->textName->TabIndex = 3;
			// 
			// textMail
			// 
			this->textMail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textMail->Location = System::Drawing::Point(183, 210);
			this->textMail->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textMail->Name = L"textMail";
			this->textMail->Size = System::Drawing::Size(184, 35);
			this->textMail->TabIndex = 4;
			// 
			// textPassword
			// 
			this->textPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textPassword->Location = System::Drawing::Point(621, 150);
			this->textPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textPassword->Name = L"textPassword";
			this->textPassword->Size = System::Drawing::Size(184, 35);
			this->textPassword->TabIndex = 5;
			// 
			// dgvUser
			// 
			this->dgvUser->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUser->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->userName, this->userMail,
					this->userPassword, this->userLastName, this->UserUsername
			});
			this->dgvUser->Location = System::Drawing::Point(43, 372);
			this->dgvUser->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvUser->Name = L"dgvUser";
			this->dgvUser->RowHeadersWidth = 51;
			this->dgvUser->RowTemplate->Height = 24;
			this->dgvUser->Size = System::Drawing::Size(763, 342);
			this->dgvUser->TabIndex = 6;
			this->dgvUser->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Users::dgvUser_CellClick);
			// 
			// userName
			// 
			this->userName->HeaderText = L"Nombre";
			this->userName->MinimumWidth = 6;
			this->userName->Name = L"userName";
			this->userName->Width = 125;
			// 
			// userMail
			// 
			this->userMail->HeaderText = L"Correo";
			this->userMail->MinimumWidth = 6;
			this->userMail->Name = L"userMail";
			this->userMail->Width = 125;
			// 
			// userPassword
			// 
			this->userPassword->HeaderText = L"Contraseña";
			this->userPassword->MinimumWidth = 6;
			this->userPassword->Name = L"userPassword";
			this->userPassword->Width = 125;
			// 
			// userLastName
			// 
			this->userLastName->HeaderText = L"Apellido";
			this->userLastName->MinimumWidth = 6;
			this->userLastName->Name = L"userLastName";
			this->userLastName->Width = 125;
			// 
			// UserUsername
			// 
			this->UserUsername->HeaderText = L"Usuario";
			this->UserUsername->MinimumWidth = 6;
			this->UserUsername->Name = L"UserUsername";
			this->UserUsername->Width = 125;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::Green;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btnAdd->ForeColor = System::Drawing::Color::White;
			this->btnAdd->Location = System::Drawing::Point(356, 280);
			this->btnAdd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(135, 50);
			this->btnAdd->TabIndex = 7;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Users::btnAdd_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::Crimson;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btnDelete->ForeColor = System::Drawing::Color::White;
			this->btnDelete->Location = System::Drawing::Point(245, 732);
			this->btnDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(132, 58);
			this->btnDelete->TabIndex = 8;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &Users::btnDelete_Click);
			// 
			// btnModify
			// 
			this->btnModify->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnModify->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnModify->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btnModify->ForeColor = System::Drawing::Color::White;
			this->btnModify->Location = System::Drawing::Point(483, 732);
			this->btnModify->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnModify->Name = L"btnModify";
			this->btnModify->Size = System::Drawing::Size(134, 58);
			this->btnModify->TabIndex = 9;
			this->btnModify->Text = L"Modificar";
			this->btnModify->UseVisualStyleBackColor = false;
			this->btnModify->Click += gcnew System::EventHandler(this, &Users::btnModify_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Green;
			this->label4->Location = System::Drawing::Point(392, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 38);
			this->label4->TabIndex = 10;
			this->label4->Text = L"USERS ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(475, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 29);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Apellido";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(72, 154);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 29);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Usuario";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->Location = System::Drawing::Point(475, 151);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 29);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Contraseña";
			// 
			// textLName
			// 
			this->textLName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textLName->Location = System::Drawing::Point(621, 92);
			this->textLName->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textLName->Name = L"textLName";
			this->textLName->Size = System::Drawing::Size(184, 35);
			this->textLName->TabIndex = 14;
			// 
			// textUsername
			// 
			this->textUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textUsername->Location = System::Drawing::Point(183, 154);
			this->textUsername->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textUsername->Name = L"textUsername";
			this->textUsername->Size = System::Drawing::Size(184, 35);
			this->textUsername->TabIndex = 15;
			// 
			// Users
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(858, 819);
			this->Controls->Add(this->textUsername);
			this->Controls->Add(this->textLName);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnModify);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dgvUser);
			this->Controls->Add(this->textPassword);
			this->Controls->Add(this->textMail);
			this->Controls->Add(this->textName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Users";
			this->Text = L"Users";
			this->Load += gcnew System::EventHandler(this, &Users::Users_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUser))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ userName = textName->Text;
		String^ userMail = textMail->Text;
		String^ userPassword = textPassword->Text;

		User^ user1 = gcnew User(1, userName, userPassword, userMail);

		Controller::Controller::AddUser(user1);
		ShowUsers();
		
	}
		   void ShowUsers() {
			   List<User^>^ users = Controller::Controller::QueryAllUsers();
			   dgvUser->Rows->Clear();
			   for (int i = 0; i < users->Count; i++) {
				   User^ user1 = users[i];
	
			   dgvUser->Rows->Add(gcnew array<String^>{
				   user1->Username,
					   user1->Email,
					   user1->Password,

			   });
		   }
		   }
private: System::Void Users_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowUsers();
}

private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ userEmail = (textMail->Text);
	Controller::Controller::DeleteUser(userEmail);
	ShowUsers();
}
private: System::Void dgvUser_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ userEmail = dgvUser->Rows[dgvUser->SelectedCells[0]->RowIndex]
		->Cells[0]->Value->ToString();
	User^ user = Controller::Controller::QueryUserByEmail(userEmail);
	textName->Text = "" + user->Username;
	textPassword->Text = user->Password;
	textMail->Text = "" + user->Email;
}
private: System::Void btnModify_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ userName = textName->Text;
	String^ userMail = textMail->Text;
	String^ userPassword = textPassword->Text;

	User^ user1 = gcnew User(1, userName, userPassword, userMail);

	Controller::Controller::UpdateUser(user1);
	ShowUsers();
}
};
}