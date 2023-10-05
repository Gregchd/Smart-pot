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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ operacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ potToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ programarAlarmaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ historialDeRiegoToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ loginToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->potToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->programarAlarmaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historialDeRiegoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->archivoToolStripMenuItem,
					this->mantenimientosToolStripMenuItem, this->operacionesToolStripMenuItem, this->reportesToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1452, 30);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->loginToolStripMenuItem,
					this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->archivoToolStripMenuItem->Text = L"Inicio";
			// 
			// loginToolStripMenuItem
			// 
			this->loginToolStripMenuItem->Name = L"loginToolStripMenuItem";
			this->loginToolStripMenuItem->Size = System::Drawing::Size(129, 26);
			this->loginToolStripMenuItem->Text = L"Login";
			this->loginToolStripMenuItem->Click += gcnew System::EventHandler(this, &SmartpotMainForm::loginToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(129, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &SmartpotMainForm::MetodoOnassis);
			// 
			// mantenimientosToolStripMenuItem
			// 
			this->mantenimientosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->potToolStripMenuItem,
					this->usersToolStripMenuItem
			});
			this->mantenimientosToolStripMenuItem->Name = L"mantenimientosToolStripMenuItem";
			this->mantenimientosToolStripMenuItem->Size = System::Drawing::Size(130, 24);
			this->mantenimientosToolStripMenuItem->Text = L"Mantenimientos";
			// 
			// potToolStripMenuItem
			// 
			this->potToolStripMenuItem->Name = L"potToolStripMenuItem";
			this->potToolStripMenuItem->Size = System::Drawing::Size(127, 26);
			this->potToolStripMenuItem->Text = L"Pot";
			this->potToolStripMenuItem->Click += gcnew System::EventHandler(this, &SmartpotMainForm::potToolStripMenuItem_Click);
			// 
			// usersToolStripMenuItem
			// 
			this->usersToolStripMenuItem->Name = L"usersToolStripMenuItem";
			this->usersToolStripMenuItem->Size = System::Drawing::Size(127, 26);
			this->usersToolStripMenuItem->Text = L"Users";
			this->usersToolStripMenuItem->Click += gcnew System::EventHandler(this, &SmartpotMainForm::usersToolStripMenuItem_Click);
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->programarAlarmaToolStripMenuItem });
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(106, 24);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// programarAlarmaToolStripMenuItem
			// 
			this->programarAlarmaToolStripMenuItem->Name = L"programarAlarmaToolStripMenuItem";
			this->programarAlarmaToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->programarAlarmaToolStripMenuItem->Text = L"Programar alarma";
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->historialDeRiegoToolStripMenuItem });
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// historialDeRiegoToolStripMenuItem
			// 
			this->historialDeRiegoToolStripMenuItem->Name = L"historialDeRiegoToolStripMenuItem";
			this->historialDeRiegoToolStripMenuItem->Size = System::Drawing::Size(208, 26);
			this->historialDeRiegoToolStripMenuItem->Text = L"Historial de riego";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1204, 582);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 53);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Alarmas";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SmartpotMainForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"¡Bienvenid@, ";
			this->label1->Click += gcnew System::EventHandler(this, &SmartpotMainForm::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(99, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"USER";
			// 
			// SmartpotMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1452, 742);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"SmartpotMainForm";
			this->Text = L"Smartpot";
			this->Load += gcnew System::EventHandler(this, &SmartpotMainForm::SmartpotMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

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
	alarm->MdiParent = this;
	alarm->Show();
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void SmartpotMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
