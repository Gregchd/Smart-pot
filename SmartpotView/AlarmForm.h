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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hour;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Day;
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
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Hour = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Day = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->label1->Location = System::Drawing::Point(367, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 48);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Alarmas";
			this->label1->Click += gcnew System::EventHandler(this, &AlarmForm::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Id, this->Hour,
					this->Day
			});
			this->dataGridView1->Location = System::Drawing::Point(413, 121);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(428, 441);
			this->dataGridView1->TabIndex = 1;
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->MinimumWidth = 8;
			this->Id->Name = L"Id";
			this->Id->Width = 150;
			// 
			// Hour
			// 
			this->Hour->HeaderText = L"Hora";
			this->Hour->MinimumWidth = 6;
			this->Hour->Name = L"Hour";
			this->Hour->Width = 125;
			// 
			// Day
			// 
			this->Day->HeaderText = L"Dia";
			this->Day->MinimumWidth = 6;
			this->Day->Name = L"Day";
			this->Day->Width = 125;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DodgerBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(413, 585);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 74);
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
			this->button2->Location = System::Drawing::Point(133, 349);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 84);
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
			this->button3->Location = System::Drawing::Point(640, 585);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 74);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Eliminar alarma";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(79, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 29);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Hora";
			this->label2->Click += gcnew System::EventHandler(this, &AlarmForm::label2_Click);
			// 
			// textHour
			// 
			this->textHour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textHour->Location = System::Drawing::Point(84, 211);
			this->textHour->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textHour->Name = L"textHour";
			this->textHour->Size = System::Drawing::Size(112, 35);
			this->textHour->TabIndex = 6;
			this->textHour->TextChanged += gcnew System::EventHandler(this, &AlarmForm::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(79, 250);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 29);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Dia";
			// 
			// textDate
			// 
			this->textDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textDate->Location = System::Drawing::Point(84, 293);
			this->textDate->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textDate->Name = L"textDate";
			this->textDate->Size = System::Drawing::Size(112, 35);
			this->textDate->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(79, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 29);
			this->label4->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(85, 92);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 29);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Id";
			this->label5->Click += gcnew System::EventHandler(this, &AlarmForm::label5_Click);
			// 
			// textId
			// 
			this->textId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textId->Location = System::Drawing::Point(84, 121);
			this->textId->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textId->Name = L"textId";
			this->textId->Size = System::Drawing::Size(112, 35);
			this->textId->TabIndex = 11;
			// 
			// AlarmForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(899, 700);
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
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"AlarmForm";
			this->Text = L"AlarmForm";
			this->Load += gcnew System::EventHandler(this, &AlarmForm::AlarmForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int alarmId = Int32::Parse(textId->Text);
	String^ hour = textHour->Text;
	String^ date = textDate->Text;
	
	Alarm^ alarm1 = gcnew Alarm(alarmId, hour, date);

	Controller::Controller::AddAlarm(alarm1);
	ShowAlarm();
}
	


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}

	   void ShowAlarm() {
		   List<Alarm^>^ alarms = Controller::Controller::QueryAllAlarm();
		   for (int i = 0; i < alarms->Count; i++) {
			   Alarm^ alarm = alarms[i];
			   dataGridView1->Rows->Add(gcnew array<String^>{
				   "" + alarm->Id,
					   alarm->Hour,
					   alarm->Date,
			   });
		   }
	   }
private: System::Void AlarmForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowAlarm();

}
};
}
