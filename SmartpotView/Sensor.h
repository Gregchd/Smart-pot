#pragma once

namespace SmartpotView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Sensor
	/// </summary>
	public ref class Sensor : public System::Windows::Forms::Form
	{
	public:
		const int R = 100;
		Sensor(void)
		{
			InitializeComponent();
			for (int i = 0; i < 360; i++) {
				arrPoints[i] = PointF(pictureBox1->Width / 2 - 360 + i,
					pictureBox1->Height / 2 + R * Math::Sin(3 * Math::PI / 180 * (i - 3 * R)));
			}
			timer1->Start();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Sensor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		//System::ComponentModel::Container ^components;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
		   System::Windows::Forms::PictureBox^ pb;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(41, 35);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(457, 369);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Sensor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(544, 452);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Sensor";
			this->Text = L"Sensor";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		array<PointF>^ arrPoints = gcnew array<PointF>(360);
		int counter = 2;

	private: System::Void pictureBox1_Paint(System::Object^ sender,
		System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		Color color = Color::Blue;
		Pen^ pen = gcnew Pen(color);
		g->DrawLine(pen, 0, pictureBox1->Height / 2, pictureBox1->Width, pictureBox1->Height / 2);
		g->DrawLine(pen, pictureBox1->Width / 2, 0, pictureBox1->Width / 2, pictureBox1->Height);
		g->DrawString("X",
			gcnew System::Drawing::Font("Arial", 10),
			System::Drawing::Brushes::Black,
			0.0,
			pictureBox1->Bottom / 2
		);
		g->DrawString("Y",
			gcnew System::Drawing::Font("Arial", 10),
			System::Drawing::Brushes::Black,
			pictureBox1->Right / 2,
			pictureBox1->Top
		);
		g->DrawCurve(pen, arrPoints, 0, counter - 1);
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (counter < 720) {
			counter++;
			pictureBox1->Invalidate();
		}
		else {
			timer1->Stop();
			timer1->Enabled = false;
		}
	}

	};
}

