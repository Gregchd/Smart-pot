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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPot))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(7, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(634, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->editarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(88, 29);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(166, 34);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(166, 34);
			this->editarToolStripMenuItem->Text = L"Editar";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(166, 34);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(86, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(86, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre";
			// 
			// txtType
			// 
			this->txtType->AutoSize = true;
			this->txtType->Location = System::Drawing::Point(86, 179);
			this->txtType->Name = L"txtType";
			this->txtType->Size = System::Drawing::Size(39, 20);
			this->txtType->TabIndex = 3;
			this->txtType->Text = L"Tipo";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(298, 62);
			this->txtId->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(112, 26);
			this->txtId->TabIndex = 6;
			this->txtId->TextChanged += gcnew System::EventHandler(this, &PotForm::txtId_TextChanged);
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(298, 125);
			this->txtName->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(112, 26);
			this->txtName->TabIndex = 7;
			this->txtName->TextChanged += gcnew System::EventHandler(this, &PotForm::txtName_TextChanged);
			// 
			// txtMarca
			// 
			this->txtMarca->Location = System::Drawing::Point(298, 179);
			this->txtMarca->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtMarca->Name = L"txtMarca";
			this->txtMarca->Size = System::Drawing::Size(112, 26);
			this->txtMarca->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(108, 240);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 29);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PotForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(264, 240);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 29);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Modificar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PotForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(459, 239);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 29);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &PotForm::button3_Click);
			// 
			// dgvPot
			// 
			this->dgvPot->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPot->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->PotId, this->PotName,
					this->PotType
			});
			this->dgvPot->Location = System::Drawing::Point(76, 312);
			this->dgvPot->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dgvPot->Name = L"dgvPot";
			this->dgvPot->RowHeadersWidth = 51;
			this->dgvPot->RowTemplate->Height = 24;
			this->dgvPot->Size = System::Drawing::Size(482, 254);
			this->dgvPot->TabIndex = 14;
			this->dgvPot->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PotForm::dgvPot_CellClick);
			this->dgvPot->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PotForm::dgvPot_CellContentClick);
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
			// PotForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 648);
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
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"PotForm";
			this->Text = L"PotForm";
			this->Load += gcnew System::EventHandler(this, &PotForm::PotForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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
private: System::Void txtId_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgvPot_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int potId = Int32::Parse(txtId->Text);
	String^ potName = txtName->Text;
	String^ potType = txtMarca->Text;

	Plant^ plant1 = gcnew Plant(potId, potName, potType);



	Controller::Controller::UpdatePlant(plant1);
	ShowPlants();
}
private: System::Void dgvPot_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int plantId = Int32::Parse(dgvPot->Rows[dgvPot->SelectedCells[0]->RowIndex]
		->Cells[0]->Value->ToString());
	Plant^ plant = Controller::Controller::QueryPlantById(plantId);
	txtId->Text = "" + plant->Id;
	txtName->Text = plant->Type;
	txtMarca->Text = "" + plant->Name;
}
};
}
