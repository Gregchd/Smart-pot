#pragma once
#include "PotForm.h"
#include "Users.h"
#include "AlarmForm.h"


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
	public:
		SmartpotMainForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			// 
			//
			this->IsMdiContainer = true; //contenedor para soportar ventanas multiples
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SmartpotMainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:













	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ProgressBar^ progressBar3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ProgressBar^ progressBar4;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SmartpotMainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(1052, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(270, 39);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nombre Apellido";
			this->label1->Click += gcnew System::EventHandler(this, &SmartpotMainForm::label1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Green;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(1062, 339);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 109);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Reproducir musica";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(45, 59);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(445, 463);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &SmartpotMainForm::pictureBox1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Green;
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1452, 100);
			this->panel1->TabIndex = 6;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SmartpotMainForm::panel1_Paint);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(715, 43);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(84, 25);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Alarmas";
			this->label9->Click += gcnew System::EventHandler(this, &SmartpotMainForm::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(612, 43);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 25);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Pots";
			this->label8->Click += gcnew System::EventHandler(this, &SmartpotMainForm::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(466, 43);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 25);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Usuarios";
			this->label7->Click += gcnew System::EventHandler(this, &SmartpotMainForm::label7_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(1355, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Logout";
			this->label3->Click += gcnew System::EventHandler(this, &SmartpotMainForm::label3_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(0, 99);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1452, 611);
			this->panel2->TabIndex = 6;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1110, 435);
			this->panel3->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(101, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 48);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Smart-pot";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(12, 14);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(92, 72);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1347, 14);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(74, 65);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &SmartpotMainForm::pictureBox2_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->progressBar4);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->progressBar3);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->progressBar2);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->progressBar1);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Controls->Add(this->button2);
			this->panel4->Location = System::Drawing::Point(0, 99);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1452, 642);
			this->panel4->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->label6->Location = System::Drawing::Point(1022, 72);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(200, 48);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Humedad";
			this->label6->Click += gcnew System::EventHandler(this, &SmartpotMainForm::label6_Click);
			// 
			// progressBar3
			// 
			this->progressBar3->Location = System::Drawing::Point(995, 164);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(256, 53);
			this->progressBar3->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar3->TabIndex = 10;
			this->progressBar3->Value = 70;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->label5->Location = System::Drawing::Point(688, 308);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(176, 48);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Nivel Uv";
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(639, 404);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(256, 53);
			this->progressBar2->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar2->TabIndex = 8;
			this->progressBar2->Value = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->label4->Location = System::Drawing::Point(631, 72);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(259, 48);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Temperatura";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(634, 164);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(256, 53);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 6;
			this->progressBar1->Value = 28;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(82, 40);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(382, 417);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			// 
			// progressBar4
			// 
			this->progressBar4->Location = System::Drawing::Point(146, 528);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(256, 53);
			this->progressBar4->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar4->TabIndex = 12;
			this->progressBar4->Value = 10;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Green;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(203, 470);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 45);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Racha";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// SmartpotMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1452, 742);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
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
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void SmartpotMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void reportesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
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
};
}
