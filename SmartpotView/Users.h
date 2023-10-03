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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textName;
	private: System::Windows::Forms::TextBox^ textMail;
	private: System::Windows::Forms::TextBox^ textPassword;
	private: System::Windows::Forms::DataGridView^ dgvUser;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userMail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userPassword;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnModify;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->textMail = (gcnew System::Windows::Forms::TextBox());
			this->textPassword = (gcnew System::Windows::Forms::TextBox());
			this->dgvUser = (gcnew System::Windows::Forms::DataGridView());
			this->userName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userMail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userPassword = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnModify = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUser))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(90, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(90, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Correo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(90, 191);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contrase�a";
			// 
			// textName
			// 
			this->textName->Location = System::Drawing::Point(363, 75);
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(112, 26);
			this->textName->TabIndex = 3;
			// 
			// textMail
			// 
			this->textMail->Location = System::Drawing::Point(363, 129);
			this->textMail->Name = L"textMail";
			this->textMail->Size = System::Drawing::Size(112, 26);
			this->textMail->TabIndex = 4;
			// 
			// textPassword
			// 
			this->textPassword->Location = System::Drawing::Point(363, 183);
			this->textPassword->Name = L"textPassword";
			this->textPassword->Size = System::Drawing::Size(112, 26);
			this->textPassword->TabIndex = 5;
			// 
			// dgvUser
			// 
			this->dgvUser->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUser->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->userName, this->userMail,
					this->userPassword
			});
			this->dgvUser->Location = System::Drawing::Point(45, 303);
			this->dgvUser->Name = L"dgvUser";
			this->dgvUser->RowHeadersWidth = 51;
			this->dgvUser->RowTemplate->Height = 24;
			this->dgvUser->Size = System::Drawing::Size(574, 342);
			this->dgvUser->TabIndex = 6;
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
			this->userPassword->HeaderText = L"Contrase�a";
			this->userPassword->MinimumWidth = 6;
			this->userPassword->Name = L"userPassword";
			this->userPassword->Width = 125;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(90, 249);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(84, 29);
			this->btnAdd->TabIndex = 7;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Users::btnAdd_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(309, 249);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(84, 29);
			this->btnDelete->TabIndex = 8;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnModify
			// 
			this->btnModify->Location = System::Drawing::Point(512, 248);
			this->btnModify->Name = L"btnModify";
			this->btnModify->Size = System::Drawing::Size(84, 29);
			this->btnModify->TabIndex = 9;
			this->btnModify->Text = L"Modficar";
			this->btnModify->UseVisualStyleBackColor = true;
			// 
			// Users
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(668, 680);
			this->Controls->Add(this->btnModify);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dgvUser);
			this->Controls->Add(this->textPassword);
			this->Controls->Add(this->textMail);
			this->Controls->Add(this->textName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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
};
}