#pragma once

namespace SmartpotView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace Controller;


	/// <summary>
	/// Resumen de Temp
	/// </summary>
	public ref class Temp : public System::Windows::Forms::Form
	{
	public:
		Temp(void)
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
		~Temp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ datosChart;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->datosChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datosChart))->BeginInit();
			this->SuspendLayout();
			// 
			// datosChart
			// 
			chartArea1->Name = L"ChartArea1";
			this->datosChart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->datosChart->Legends->Add(legend1);
			this->datosChart->Location = System::Drawing::Point(41, 36);
			this->datosChart->Name = L"datosChart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Temperatura";
			this->datosChart->Series->Add(series1);
			this->datosChart->Size = System::Drawing::Size(558, 404);
			this->datosChart->TabIndex = 0;
			this->datosChart->Text = L"chart1";
			// 
			// Temp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 472);
			this->Controls->Add(this->datosChart);
			this->Name = L"Temp";
			this->Text = L"Temp";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Temp::Temp_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datosChart))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Temp_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Sensor_Temperature^>^ TempList = Controller::Controller::QueryAllTemp();
		for (int i = 0; i < TempList->Count; i++) {
			datosChart->Series["Temperatura"]->Points->AddXY("", TempList[i]->Value);
		}

	}
	};
}
