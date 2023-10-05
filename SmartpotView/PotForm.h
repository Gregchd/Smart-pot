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
	/// Resumen de PotForm
	/// </summary>
	public ref class PotForm : public System::Windows::Forms::Form
	{
	public:
		PotForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			//MessageBox::Show("Mntenimiento iniciado");
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PotForm()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ txtType;


	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtMarca;







	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dgvPot;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PotId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PotName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PotType;
	private: System::Windows::Forms::Label^ label3;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PotForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtType = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtMarca = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dgvPot = (gcnew System::Windows::Forms::DataGridView());
			this->PotId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PotName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PotType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPot))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(101, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(101, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre";
			// 
			// txtType
			// 
			this->txtType->AutoSize = true;
			this->txtType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtType->Location = System::Drawing::Point(101, 168);
			this->txtType->Name = L"txtType";
			this->txtType->Size = System::Drawing::Size(51, 25);
			this->txtType->TabIndex = 3;
			this->txtType->Text = L"Tipo";
			// 
			// txtId
			// 
			this->txtId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtId->Location = System::Drawing::Point(290, 72);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(137, 30);
			this->txtId->TabIndex = 6;
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtName->Location = System::Drawing::Point(290, 122);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(137, 30);
			this->txtName->TabIndex = 7;
			// 
			// txtMarca
			// 
			this->txtMarca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtMarca->Location = System::Drawing::Point(290, 165);
			this->txtMarca->Name = L"txtMarca";
			this->txtMarca->Size = System::Drawing::Size(137, 30);
			this->txtMarca->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Green;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(64, 249);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 42);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PotForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DodgerBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(230, 249);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 42);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Modificar";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Crimson;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(388, 249);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 42);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &PotForm::button3_Click);
			// 
			// dgvPot
			// 
			this->dgvPot->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPot->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->PotId, this->PotName,
					this->PotType
			});
			this->dgvPot->Location = System::Drawing::Point(64, 318);
			this->dgvPot->Name = L"dgvPot";
			this->dgvPot->RowHeadersWidth = 51;
			this->dgvPot->RowTemplate->Height = 24;
			this->dgvPot->Size = System::Drawing::Size(428, 203);
			this->dgvPot->TabIndex = 14;
			// 
			// PotId
			// 
			this->PotId->HeaderText = L"Id";
			this->PotId->MinimumWidth = 6;
			this->PotId->Name = L"PotId";
			this->PotId->Width = 125;
			// 
			// PotName
			// 
			this->PotName->HeaderText = L"Nombre";
			this->PotName->MinimumWidth = 6;
			this->PotName->Name = L"PotName";
			this->PotName->Width = 125;
			// 
			// PotType
			// 
			this->PotType->HeaderText = L"Tipo";
			this->PotType->MinimumWidth = 6;
			this->PotType->Name = L"PotType";
			this->PotType->Width = 125;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Green;
			this->label3->Location = System::Drawing::Point(250, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 33);
			this->label3->TabIndex = 15;
			this->label3->Text = L"POTs";
			// 
			// PotForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(564, 561);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dgvPot);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtMarca);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->txtType);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PotForm";
			this->Text = L"PotForm";
			this->Load += gcnew System::EventHandler(this, &PotForm::PotForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPot))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int potId = Int32::Parse(txtId->Text);
		String^ potName = txtName->Text;
		String^ potType = txtMarca->Text;

		Plant^ plant1 = gcnew Plant(potId,potName,potType);
	


		Controller::Controller::AddSmartpot(plant1);
		ShowPlants();
	
	}
		   void ShowPlants() {
			   List<Plant^>^ plants = Controller::Controller::QueryAllPlants();
			   dgvPot->Rows->Clear();
			   for (int i = 0; i < plants->Count; i++) {
				   Plant^ plant1 = plants[i];
			   
			   dgvPot->Rows->Add(gcnew array<String^>{
				   "" + plant1->Id,
					   plant1->Type,
					   plant1->Name
			   });
}
		   }
private: System::Void PotForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowPlants();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int potId = Int32::Parse(txtId->Text);
	Controller::Controller::DeletePlant(potId);
		ShowPlants();
}
};
}
