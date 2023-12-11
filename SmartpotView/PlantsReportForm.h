#pragma once

namespace SmartpotView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SmartpotModel;

	/// <summary>
	/// Summary for PlantsReportForm
	/// </summary>
	public ref class PlantsReportForm : public System::Windows::Forms::Form
	{
	public:
		PlantsReportForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PlantsReportForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(44, 50);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Id";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(412, 375);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// PlantsReportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(606, 437);
			this->Controls->Add(this->chart1);
			this->Name = L"PlantsReportForm";
			this->Text = L"PlantsReportForm";
			this->Load += gcnew System::EventHandler(this, &PlantsReportForm::PlantsReportForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PlantsReportForm_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Plant^>^ plantList = Controller::Controller::QueryAllPlants();
		for (int i = 0; i < plantList->Count; i++) {
			chart1->Series["Id"]->Points->Add(plantList[i]->Id);
			chart1->Series["Id"]->Points[i]->AxisLabel = (plantList[i]->Type);
			chart1->Series["Id"]->Points[i]->Label =
				Convert::ToString((plantList[i]->Id));
		}
	}
	};
}
