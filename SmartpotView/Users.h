#pragma once

namespace SmartpotView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			this->label1->Location = System::Drawing::Point(60, 54);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(60, 90);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Correo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(60, 124);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contraseña";
			// 
			// textName
			// 
			this->textName->Location = System::Drawing::Point(242, 49);
			this->textName->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(76, 20);
			this->textName->TabIndex = 3;
			// 
			// textMail
			// 
			this->textMail->Location = System::Drawing::Point(242, 84);
			this->textMail->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textMail->Name = L"textMail";
			this->textMail->Size = System::Drawing::Size(76, 20);
			this->textMail->TabIndex = 4;
			// 
			// textPassword
			// 
			this->textPassword->Location = System::Drawing::Point(242, 119);
			this->textPassword->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textPassword->Name = L"textPassword";
			this->textPassword->Size = System::Drawing::Size(76, 20);
			this->textPassword->TabIndex = 5;
			// 
			// dgvUser
			// 
			this->dgvUser->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUser->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->userName, this->userMail,
					this->userPassword
			});
			this->dgvUser->Location = System::Drawing::Point(30, 197);
			this->dgvUser->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dgvUser->Name = L"dgvUser";
			this->dgvUser->RowHeadersWidth = 51;
			this->dgvUser->RowTemplate->Height = 24;
			this->dgvUser->Size = System::Drawing::Size(383, 222);
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
			this->userPassword->HeaderText = L"Contraseña";
			this->userPassword->MinimumWidth = 6;
			this->userPassword->Name = L"userPassword";
			this->userPassword->Width = 125;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(60, 162);
			this->btnAdd->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(56, 19);
			this->btnAdd->TabIndex = 7;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Users::btnAdd_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(206, 162);
			this->btnDelete->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(56, 19);
			this->btnDelete->TabIndex = 8;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnModify
			// 
			this->btnModify->Location = System::Drawing::Point(341, 161);
			this->btnModify->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnModify->Name = L"btnModify";
			this->btnModify->Size = System::Drawing::Size(56, 19);
			this->btnModify->TabIndex = 9;
			this->btnModify->Text = L"Modficar";
			this->btnModify->UseVisualStyleBackColor = true;
			// 
			// Users
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(445, 442);
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
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Users";
			this->Text = L"Users";
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

		dgvUser->Rows->Add(gcnew array<String^>{
			user1->Username,
			user1->Email,
			user1->Password,

		});
	}
};
}