#pragma once
//#include "SmartpotMainForm.cpp"

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
		static User^ currentpuser;
		PotForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
			//MessageBox::Show("Mntenimiento iniciado");
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
			this->label1->Location = System::Drawing::Point(180, 50);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(180, 82);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre";
			// 
			// txtType
			// 
			this->txtType->AutoSize = true;
			this->txtType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtType->Location = System::Drawing::Point(180, 110);
			this->txtType->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->txtType->Name = L"txtType";
			this->txtType->Size = System::Drawing::Size(39, 20);
			this->txtType->TabIndex = 3;
			this->txtType->Text = L"Tipo";
			// 
			// txtId
			// 
			this->txtId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtId->Location = System::Drawing::Point(306, 48);
			this->txtId->Margin = System::Windows::Forms::Padding(2);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(93, 26);
			this->txtId->TabIndex = 6;
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtName->Location = System::Drawing::Point(306, 80);
			this->txtName->Margin = System::Windows::Forms::Padding(2);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(93, 26);
			this->txtName->TabIndex = 7;
			// 
			// txtMarca
			// 
			this->txtMarca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtMarca->Location = System::Drawing::Point(306, 108);
			this->txtMarca->Margin = System::Windows::Forms::Padding(2);
			this->txtMarca->Name = L"txtMarca";
			this->txtMarca->Size = System::Drawing::Size(93, 26);
			this->txtMarca->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Green;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(137, 174);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 39);
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
			this->button2->Location = System::Drawing::Point(247, 174);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 39);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Modificar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &PotForm::button2_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Crimson;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(353, 174);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 39);
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
			this->dgvPot->Location = System::Drawing::Point(80, 233);
			this->dgvPot->Margin = System::Windows::Forms::Padding(2);
			this->dgvPot->Name = L"dgvPot";
			this->dgvPot->RowHeadersWidth = 51;
			this->dgvPot->RowTemplate->Height = 24;
			this->dgvPot->Size = System::Drawing::Size(432, 165);
			this->dgvPot->TabIndex = 14;
			this->dgvPot->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PotForm::dgvPot_CellClick);
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
			this->label3->Location = System::Drawing::Point(280, 13);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 29);
			this->label3->TabIndex = 15;
			this->label3->Text = L"POTs";
			// 
			// PotForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(591, 464);
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
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"PotForm";
			this->Text = L"PotForm";
			this->Load += gcnew System::EventHandler(this, &PotForm::PotForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPot))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		int potId=0;

		//List<Id^>^ ids = IdPersistance::Persistance::QueryAllIds();
		//for (int i = 0; i < ids->Count; i++) {
		//	if (i == 1) {
		//		potId = ids[1]->Idn;
		//	}
		//}

		//int potId = Int32::Parse(txtId->Text);
		String^ potName = txtName->Text;
		String^ potType = txtMarca->Text;

		Plant^ plant1 = gcnew Plant(potId,potName,potType, currentpuser->Id);
	


		Controller::Controller::AddSmartpot(plant1);
		//IdPersistance::Persistance::AddSmartpot();
		ShowPlants();
	
	}
		   void ShowPlants() {
			   List<Plant^>^ plants = Controller::Controller::QueryAllPlants();
			   dgvPot->Rows->Clear();
			   for (int i = 0; i < plants->Count; i++) {
				   Plant^ plant0 = plants[i];
			   
				   if (currentpuser->Id == plant0->UserId) {
					   dgvPot->Rows->Add(gcnew array<String^>{
						   "" + plant0->Id,
							   plant0->Name,
							   plant0->Type
					   });
				   }
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

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int potId = Int32::Parse(txtId->Text);
	String^ potName = txtName->Text;
	String^ potType = txtMarca->Text;

	Plant^ plant1 = gcnew Plant(potId, potName, potType, currentpuser->Id);

	Controller::Controller::UpdatePlant(plant1);
	ShowPlants();
}
private: System::Void dgvPot_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int plantId = Int32::Parse(dgvPot->Rows[dgvPot->SelectedCells[0]->RowIndex]
		->Cells[0]->Value->ToString());
	Plant^ plant = Controller::Controller::QueryPlantById(plantId);
	txtId->Text = "" + plant->Id;
	txtName->Text = plant->Name;
	txtMarca->Text = "" + plant->Type;
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int potId = Int32::Parse(txtId->Text);
	String^ potName = txtName->Text;
	String^ potType = txtMarca->Text;

	Plant^ plant1 = gcnew Plant(potId, potName, potType, currentpuser->Id);

	Controller::Controller::UpdatePlant(plant1);
	ShowPlants();
}
};
}
