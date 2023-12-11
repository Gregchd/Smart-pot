#pragma once
#include "PotForm.h"
#include "Users.h"
#include "AlarmForm.h"
#include "Streak.h"
#include "Login.h"
#include "Sensor.h"
#include "PlantsReportForm.h"
#include "Temp.h"

namespace SmartpotView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SmartpotMainForm
	/// </summary>
	public ref class SmartpotMainForm : public System::Windows::Forms::Form
	{
	private: System::IO::Ports::SerialPort serialPort1;
	private: System::Windows::Forms::Label^ label1;
	private: System::IO::Ports::SerialPort^ serialPort2;
	private: System::IO::Ports::SerialPort^ serialPort3;
	private: System::Windows::Forms::Timer^ timer1;

	public:
		static User^ currentuser;
		SmartpotMainForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
				  //TODO: agregar código de constructor aquí
			serialPort2->PortName = "COM3"; // Establece el nombre del puerto COM, asegúrate de que coincida con el puerto que estás utilizando.
			serialPort2->BaudRate = 9600; // Establece la velocidad de baudios (puede variar según el dispositivo).
			serialPort2->DataBits = 8; // Establece la longitud de datos (generalmente 8 bits).
			serialPort2->Parity = System::IO::Ports::Parity::None; // Establece la paridad (puede variar según el dispositivo).
			serialPort2->StopBits = System::IO::Ports::StopBits::One; // Establece el número de bits de parada.
			serialPort2->Open();
			serialPort2->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &SmartpotMainForm::serialPort1_DataReceived);
			// 
			//
			this->IsMdiContainer = true; //contenedor para soportar ventanas multiples
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~SmartpotMainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:















	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ Val_Temp;


	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;

	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ Value_Lux;

	private: System::Windows::Forms::Label^ Value_Humd;

	private: System::Windows::Forms::Label^ Value_Temp;

	private: System::Windows::Forms::ProgressBar^ progressBar4;
	private: System::Windows::Forms::Label^ label12;
	private: System::ComponentModel::IContainer^ components;





	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SmartpotMainForm::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Value_Lux = (gcnew System::Windows::Forms::Label());
			this->Value_Humd = (gcnew System::Windows::Forms::Label());
			this->Value_Temp = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Val_Temp = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->serialPort2 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->serialPort3 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Green;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(1256, 432);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(213, 138);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Reproducir musica";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SmartpotMainForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(51, 74);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(501, 579);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Green;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1634, 125);
			this->panel1->TabIndex = 6;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SmartpotMainForm::panel1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(1335, 52);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 29);
			this->label1->TabIndex = 11;
			this->label1->Text = L"current";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(511, 52);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(229, 29);
			this->label12->TabIndex = 10;
			this->label12->Text = L"REPORTE PLANTA";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(1155, 54);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 29);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Alarmas";
			this->label9->Click += gcnew System::EventHandler(this, &SmartpotMainForm::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(1004, 54);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 29);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Pots";
			this->label8->Click += gcnew System::EventHandler(this, &SmartpotMainForm::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(804, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 29);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Usuarios";
			this->label7->Click += gcnew System::EventHandler(this, &SmartpotMainForm::label7_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline))));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(1497, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 29);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Logout";
			this->label3->Click += gcnew System::EventHandler(this, &SmartpotMainForm::label3_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(0, 122);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1634, 762);
			this->panel2->TabIndex = 6;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1248, 542);
			this->panel3->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(114, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(246, 58);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Smart-pot";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(14, 18);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(104, 89);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->Value_Lux);
			this->panel4->Controls->Add(this->Value_Humd);
			this->panel4->Controls->Add(this->Value_Temp);
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->progressBar4);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->Val_Temp);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Controls->Add(this->button2);
			this->panel4->Location = System::Drawing::Point(0, 122);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1634, 802);
			this->panel4->TabIndex = 7;
			// 
			// Value_Lux
			// 
			this->Value_Lux->AutoSize = true;
			this->Value_Lux->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->Value_Lux->Location = System::Drawing::Point(868, 544);
			this->Value_Lux->Name = L"Value_Lux";
			this->Value_Lux->Size = System::Drawing::Size(162, 58);
			this->Value_Lux->TabIndex = 16;
			this->Value_Lux->Text = L"#valor";
			this->Value_Lux->Click += gcnew System::EventHandler(this, &SmartpotMainForm::label11_Click);
			// 
			// Value_Humd
			// 
			this->Value_Humd->AutoSize = true;
			this->Value_Humd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->Value_Humd->Location = System::Drawing::Point(1290, 258);
			this->Value_Humd->Name = L"Value_Humd";
			this->Value_Humd->Size = System::Drawing::Size(162, 58);
			this->Value_Humd->TabIndex = 15;
			this->Value_Humd->Text = L"#valor";
			this->Value_Humd->Click += gcnew System::EventHandler(this, &SmartpotMainForm::label10_Click);
			// 
			// Value_Temp
			// 
			this->Value_Temp->AutoSize = true;
			this->Value_Temp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->Value_Temp->Location = System::Drawing::Point(868, 258);
			this->Value_Temp->Name = L"Value_Temp";
			this->Value_Temp->Size = System::Drawing::Size(162, 58);
			this->Value_Temp->TabIndex = 14;
			this->Value_Temp->Text = L"#valor";
			this->Value_Temp->Click += gcnew System::EventHandler(this, &SmartpotMainForm::Value_Temp_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Green;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(228, 588);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 58);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Happiness";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SmartpotMainForm::button1_Click_1);
			// 
			// progressBar4
			// 
			this->progressBar4->Location = System::Drawing::Point(165, 660);
			this->progressBar4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(288, 66);
			this->progressBar4->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar4->TabIndex = 12;
			this->progressBar4->Value = 10;
			this->progressBar4->Resize += gcnew System::EventHandler(this, &SmartpotMainForm::progressBar4_Resize);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->label6->Location = System::Drawing::Point(1258, 111);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(243, 58);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Humedad";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->label5->Location = System::Drawing::Point(853, 422);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(210, 58);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Nivel Uv";
			// 
			// Val_Temp
			// 
			this->Val_Temp->AutoSize = true;
			this->Val_Temp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->Val_Temp->Location = System::Drawing::Point(798, 111);
			this->Val_Temp->Name = L"Val_Temp";
			this->Val_Temp->Size = System::Drawing::Size(314, 58);
			this->Val_Temp->TabIndex = 7;
			this->Val_Temp->Text = L"Temperatura";
			this->Val_Temp->Click += gcnew System::EventHandler(this, &SmartpotMainForm::Val_Temp_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(80, 49);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(557, 521);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			// 
			// SmartpotMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1634, 928);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"SmartpotMainForm";
			this->Text = L"Smartpot";
			this->Load += gcnew System::EventHandler(this, &SmartpotMainForm::SmartpotMainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
		   void MetodoOnassis(System::Object^ sender, System::EventArgs^ e) {
			   MessageBox::Show("Cerraste la app");
			   Application::Exit();
		   }
	private: System::Void potToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		PotForm^ potForm = gcnew PotForm();
		potForm->MdiParent = this;
		potForm->Show();
	}

	private: System::Void usersToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Users^ userForm = gcnew Users();
		userForm->MdiParent = this;
		userForm->Show();

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void loginToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Login^ login = gcnew Login();
		//login->MdiParent = this;
		//login->Show();
		this->Visible = false;
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	AlarmForm^ alarm = gcnew AlarmForm();
	//alarm->MdiParent = this;
	alarm->Show();
}
private: System::Void SmartpotMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	Login^ login = gcnew Login(this);
	login->ShowDialog();
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	AlarmForm^ alarm = gcnew AlarmForm();
	alarm->Show();
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	PotForm^ potForm = gcnew PotForm();
	potForm->Show();
}

private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	Users^ userForm = gcnew Users();
	userForm->Show();
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Streak^ streak = gcnew Streak();
	streak->Show();
}

public:
	void EnableAdminPermissions() {
		this->label7->Visible = true;
		label1->Text = currentuser->Username;
	}
	void UserPermissions() {
		this->label7->Visible = false;
		label1->Text = currentuser->Username;
	}

private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

//click en temperatura


//click en humedad
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	Sensor^ sensor = gcnew Sensor();
	sensor->Show();
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	Sensor^ sensor = gcnew Sensor();
	sensor->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	/*				Encender Buzzer					*/
	serialPort2->Write("H");
	button2->BackColor = System::Drawing::Color::LightGreen;
	button2->Enabled = false;
	System::Windows::Forms::Timer^ timer = gcnew System::Windows::Forms::Timer();
	timer->Interval = 2500;

	// Manejador de eventos para el temporizador
	timer->Tick += gcnew System::EventHandler(this, &SmartpotMainForm::OnTimerTick);

	// Iniciar el temporizador
	timer->Start();
}
private: System::Void OnTimerTick(System::Object^ sender, System::EventArgs^ e) {
	// Restaurar el color original del botón
	button2->BackColor = System::Drawing::Color::Green;

	// Detener y liberar el temporizador
	System::Windows::Forms::Timer^ timer = dynamic_cast<System::Windows::Forms::Timer^>(sender);
	timer->Stop();
	button2->Enabled = true;
}
private: System::Void serialPort1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
	String^ receivedData = serialPort2->ReadLine();
	array<String^>^ values = receivedData->Split(',');


	if (values->Length == 3) {

		this->Invoke(gcnew Action<String^>(this, &SmartpotMainForm::UpdateLabel1), values[0]);
		this->Invoke(gcnew Action<String^>(this, &SmartpotMainForm::UpdateLabel10), values[1]);
		this->Invoke(gcnew Action<String^>(this, &SmartpotMainForm::UpdateLabel11), values[2]);
		this->Invoke(gcnew Action<String^>(this, &SmartpotMainForm::UpdateBarra), values[1]);
	}
}
private: System::Void UpdateLabel1(String^ data) {
	Sensor_Temperature^ temperatura= gcnew Sensor_Temperature();
	temperatura->Id = 0;
	temperatura->Value = Convert::ToInt32(Convert::ToSingle(data));
	Controller::Controller::AddTemperatura(temperatura);
	Value_Temp->Text = data + "%";
}

private: System::Void UpdateLabel10(String^ data) {
	Sensor_humidity^ humedad= gcnew Sensor_humidity();
	humedad->Id = 0;
	humedad->Value = Convert::ToInt32(Convert::ToSingle(data));
	Controller::Controller::AddHumedad(humedad);
	Value_Humd->Text = data+"%";
}

private: System::Void UpdateLabel11(String^ data) {
	Sensor_Uv^ lux = gcnew Sensor_Uv();
	lux->Id = 0;
	lux->Value = Convert::ToInt32(Convert::ToSingle(data));
	Controller::Controller::AddLux(lux);
	Value_Lux->Text = data + "%";
}


private: System::Void Val_Temp_Click(System::Object^ sender, System::EventArgs^ e) {
	Temp^ temp = gcnew Temp();
	temp->MdiParent = this;
	temp->Show();
}
private: System::Void progressBar4_Resize(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void UpdateBarra(String^ data) {
	int VALHUM = Convert::ToInt32(Convert::ToSingle(data))+15;
	progressBar4->Value = VALHUM;
}

private: System::Void Value_Temp_Click(System::Object^ sender, System::EventArgs^ e) {
	Temp^ temp = gcnew Temp();
	//temp->MdiParent = this;
	temp->Show();
}
};
}
