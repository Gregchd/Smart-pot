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
	/// Resumen de AlarmForm
	/// </summary>
	public ref class AlarmForm : public System::Windows::Forms::Form
	{
	public:
		AlarmForm(void)
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
		~AlarmForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textHour;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textDate;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AlarmId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AlarmHour;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AlarmDay;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AlarmForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->AlarmId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AlarmHour = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AlarmDay = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textHour = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textDate = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textId = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->label1->ForeColor = System::Drawing::Color::Green;
			this->label1->Location = System::Drawing::Point(245, 23);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Alarmas";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->AlarmId,
					this->AlarmHour, this->AlarmDay
			});
			this->dataGridView1->Location = System::Drawing::Point(275, 57);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(453, 287);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AlarmForm::dataGridView1_CellClick);
			// 
			// AlarmId
			// 
			this->AlarmId->HeaderText = L"Id";
			this->AlarmId->MinimumWidth = 8;
			this->AlarmId->Name = L"AlarmId";
			this->AlarmId->Width = 150;
			// 
			// AlarmHour
			// 
			this->AlarmHour->HeaderText = L"Hora";
			this->AlarmHour->MinimumWidth = 6;
			this->AlarmHour->Name = L"AlarmHour";
			this->AlarmHour->Width = 125;
			// 
			// AlarmDay
			// 
			this->AlarmDay->HeaderText = L"Dia";
			this->AlarmDay->MinimumWidth = 6;
			this->AlarmDay->Name = L"AlarmDay";
			this->AlarmDay->Width = 125;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DodgerBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(314, 380);
			this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 48);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Editar alarma";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AlarmForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Green;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(41, 311);
			this->button2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 55);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Programar alarma";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AlarmForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Crimson;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(559, 380);
			this->button3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 48);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Eliminar alarma";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AlarmForm::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(52, 137);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Hora";
			// 
			// textHour
			// 
			this->textHour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textHour->Location = System::Drawing::Point(56, 160);
			this->textHour->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textHour->Name = L"textHour";
			this->textHour->Size = System::Drawing::Size(76, 26);
			this->textHour->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(52, 201);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Dia";
			// 
			// textDate
			// 
			this->textDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textDate->Location = System::Drawing::Point(56, 224);
			this->textDate->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textDate->Name = L"textDate";
			this->textDate->Size = System::Drawing::Size(76, 26);
			this->textDate->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(53, 79);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 20);
			this->label4->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(52, 56);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Id";
			// 
			// textId
			// 
			this->textId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textId->Location = System::Drawing::Point(56, 79);
			this->textId->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textId->Name = L"textId";
			this->textId->Size = System::Drawing::Size(76, 26);
			this->textId->TabIndex = 11;
			// 
			// AlarmForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(792, 455);
			this->Controls->Add(this->textId);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textDate);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textHour);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"AlarmForm";
			this->Text = L"AlarmForm";
			this->Load += gcnew System::EventHandler(this, &AlarmForm::AlarmForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	   //CREAR
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	int alarmId;

	List<Id^>^ ids = IdPersistance::Persistance::QueryAllIds();
	for (int i = 0; i < ids->Count; i++) {
		if (i == 2) {
			alarmId = ids[2]->Idn;
		}
	}

	//int alarmId = Int32::Parse(textId->Text);
	String^ hour = textHour->Text;
	String^ date = textDate->Text;
	
	Alarm^ alarm1 = gcnew Alarm(alarmId, hour, date);

	Controller::Controller::AddAlarm(alarm1);
	IdPersistance::Persistance::AddAlarm();
	ShowAlarm();
}
	   void ShowAlarm() {
		   List<Alarm^>^ alarms = Controller::Controller::QueryAllAlarm();
		   dataGridView1->Rows->Clear();
		   for (int i = 0; i < alarms->Count; i++) {
			   Alarm^ alarm = alarms[i];
			   dataGridView1->Rows->Add(gcnew array<String^>{
				   "" + alarm->Id,
					   alarm->Hour,
					   alarm->Date,
			   });
		   }
	   }

	   //Editar
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int alarmId = Int32::Parse(textId->Text);
	String^ hour = textHour->Text;
	String^ date = textDate->Text;

	Alarm^ alarm1 = gcnew Alarm(alarmId, hour, date);

	Controller::Controller::UpdateAlarm(alarm1);
	ShowAlarm();
}



	   
private: System::Void AlarmForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowAlarm();
}

	   //ELIMINAR
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int alarmId = Int32::Parse(textId->Text);
	Controller::Controller::DeleteAlarm(alarmId);
	ShowAlarm();
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int alarmId = Int32::Parse(dataGridView1->Rows[dataGridView1->SelectedCells[0]->RowIndex]
		->Cells[0]->Value->ToString());
	Alarm^ alarm = Controller::Controller::QueryAlarmById(alarmId);
	textId->Text = "" + alarm->Id;
	textHour->Text = alarm->Hour;
	textDate->Text = "" + alarm->Date;
}
};
}
