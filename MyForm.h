#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ drawchart;
	private: System::Windows::Forms::Button^ drawButton;
	private: System::Windows::Forms::Label^ aLabel;
	private: System::Windows::Forms::TextBox^ aTextBox;
	private: System::Windows::Forms::TextBox^ bTextBox;
	private: System::Windows::Forms::Label^ bLabel;
	private: System::Windows::Forms::Label^ functionLabel;
	private: System::Windows::Forms::TextBox^ funTextBox;

	private: System::Windows::Forms::Label^ xLabel;
	private: System::Windows::Forms::TextBox^ epsTextBox;
	private: System::Windows::Forms::Label^ epsLabel;
	private: System::Windows::Forms::Label^ converLabel;
	private: System::Windows::Forms::Label^ solLabel;

	private: System::Windows::Forms::Button^ solButton;










	private: System::Windows::Forms::Label^ comp2Label;



	private: System::Windows::Forms::Label^ chordLabel;
	private: System::Windows::Forms::Label^ dichLabel;
	private: System::Windows::Forms::Label^ iterLabel2;

	private: System::Windows::Forms::Label^ speedLabel4;
	private: System::Windows::Forms::Label^ iterLabel1;

	private: System::Windows::Forms::Label^ speedLabel3;

	private: System::Windows::Forms::Label^ solLabel1;

	private: System::Windows::Forms::Label^ label2;
















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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->drawchart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->drawButton = (gcnew System::Windows::Forms::Button());
			this->aLabel = (gcnew System::Windows::Forms::Label());
			this->aTextBox = (gcnew System::Windows::Forms::TextBox());
			this->bTextBox = (gcnew System::Windows::Forms::TextBox());
			this->bLabel = (gcnew System::Windows::Forms::Label());
			this->functionLabel = (gcnew System::Windows::Forms::Label());
			this->funTextBox = (gcnew System::Windows::Forms::TextBox());
			this->xLabel = (gcnew System::Windows::Forms::Label());
			this->epsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->epsLabel = (gcnew System::Windows::Forms::Label());
			this->converLabel = (gcnew System::Windows::Forms::Label());
			this->solLabel = (gcnew System::Windows::Forms::Label());
			this->solButton = (gcnew System::Windows::Forms::Button());
			this->comp2Label = (gcnew System::Windows::Forms::Label());
			this->chordLabel = (gcnew System::Windows::Forms::Label());
			this->dichLabel = (gcnew System::Windows::Forms::Label());
			this->iterLabel2 = (gcnew System::Windows::Forms::Label());
			this->speedLabel4 = (gcnew System::Windows::Forms::Label());
			this->iterLabel1 = (gcnew System::Windows::Forms::Label());
			this->speedLabel3 = (gcnew System::Windows::Forms::Label());
			this->solLabel1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->drawchart))->BeginInit();
			this->SuspendLayout();
			// 
			// drawchart
			// 
			chartArea2->Name = L"ChartArea1";
			this->drawchart->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->drawchart->Legends->Add(legend2);
			this->drawchart->Location = System::Drawing::Point(593, 32);
			this->drawchart->Name = L"drawchart";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"log10(1+2xs)-2+x";
			this->drawchart->Series->Add(series2);
			this->drawchart->Size = System::Drawing::Size(539, 411);
			this->drawchart->TabIndex = 0;
			// 
			// drawButton
			// 
			this->drawButton->Location = System::Drawing::Point(1155, 32);
			this->drawButton->Name = L"drawButton";
			this->drawButton->Size = System::Drawing::Size(75, 23);
			this->drawButton->TabIndex = 1;
			this->drawButton->Text = L"draw";
			this->drawButton->UseVisualStyleBackColor = true;
			this->drawButton->Click += gcnew System::EventHandler(this, &MyForm::drawButton_Click);
			// 
			// aLabel
			// 
			this->aLabel->AutoSize = true;
			this->aLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aLabel->Location = System::Drawing::Point(26, 20);
			this->aLabel->Name = L"aLabel";
			this->aLabel->Size = System::Drawing::Size(41, 24);
			this->aLabel->TabIndex = 2;
			this->aLabel->Text = L"a = ";
			// 
			// aTextBox
			// 
			this->aTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aTextBox->Location = System::Drawing::Point(73, 18);
			this->aTextBox->Name = L"aTextBox";
			this->aTextBox->Size = System::Drawing::Size(100, 29);
			this->aTextBox->TabIndex = 3;
			// 
			// bTextBox
			// 
			this->bTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bTextBox->Location = System::Drawing::Point(246, 20);
			this->bTextBox->Name = L"bTextBox";
			this->bTextBox->Size = System::Drawing::Size(100, 29);
			this->bTextBox->TabIndex = 5;
			// 
			// bLabel
			// 
			this->bLabel->AutoSize = true;
			this->bLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bLabel->Location = System::Drawing::Point(198, 18);
			this->bLabel->Name = L"bLabel";
			this->bLabel->Size = System::Drawing::Size(42, 24);
			this->bLabel->TabIndex = 4;
			this->bLabel->Text = L"b = ";
			// 
			// functionLabel
			// 
			this->functionLabel->AutoSize = true;
			this->functionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->functionLabel->Location = System::Drawing::Point(26, 68);
			this->functionLabel->Name = L"functionLabel";
			this->functionLabel->Size = System::Drawing::Size(84, 24);
			this->functionLabel->TabIndex = 6;
			this->functionLabel->Text = L"Function";
			// 
			// funTextBox
			// 
			this->funTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->funTextBox->Location = System::Drawing::Point(116, 63);
			this->funTextBox->Name = L"funTextBox";
			this->funTextBox->Size = System::Drawing::Size(182, 29);
			this->funTextBox->TabIndex = 7;
			this->funTextBox->Text = L"log10(1 + 2x) - 2 + x";
			// 
			// xLabel
			// 
			this->xLabel->AutoSize = true;
			this->xLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xLabel->Location = System::Drawing::Point(19, 318);
			this->xLabel->Name = L"xLabel";
			this->xLabel->Size = System::Drawing::Size(41, 24);
			this->xLabel->TabIndex = 8;
			this->xLabel->Text = L"x = ";
			// 
			// epsTextBox
			// 
			this->epsTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->epsTextBox->Location = System::Drawing::Point(435, 20);
			this->epsTextBox->Name = L"epsTextBox";
			this->epsTextBox->Size = System::Drawing::Size(100, 29);
			this->epsTextBox->TabIndex = 11;
			// 
			// epsLabel
			// 
			this->epsLabel->AutoSize = true;
			this->epsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->epsLabel->Location = System::Drawing::Point(379, 20);
			this->epsLabel->Name = L"epsLabel";
			this->epsLabel->Size = System::Drawing::Size(62, 24);
			this->epsLabel->TabIndex = 10;
			this->epsLabel->Text = L"eps = ";
			// 
			// converLabel
			// 
			this->converLabel->AutoSize = true;
			this->converLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->converLabel->Location = System::Drawing::Point(340, 68);
			this->converLabel->Name = L"converLabel";
			this->converLabel->Size = System::Drawing::Size(0, 24);
			this->converLabel->TabIndex = 12;
			// 
			// solLabel
			// 
			this->solLabel->AutoSize = true;
			this->solLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->solLabel->Location = System::Drawing::Point(66, 318);
			this->solLabel->Name = L"solLabel";
			this->solLabel->Size = System::Drawing::Size(0, 24);
			this->solLabel->TabIndex = 13;
			// 
			// solButton
			// 
			this->solButton->Location = System::Drawing::Point(460, 420);
			this->solButton->Name = L"solButton";
			this->solButton->Size = System::Drawing::Size(75, 23);
			this->solButton->TabIndex = 15;
			this->solButton->Text = L"Solution";
			this->solButton->UseVisualStyleBackColor = true;
			this->solButton->Click += gcnew System::EventHandler(this, &MyForm::solButton_Click);
			// 
			// comp2Label
			// 
			this->comp2Label->AutoSize = true;
			this->comp2Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comp2Label->Location = System::Drawing::Point(16, 130);
			this->comp2Label->Name = L"comp2Label";
			this->comp2Label->Size = System::Drawing::Size(342, 24);
			this->comp2Label->TabIndex = 24;
			this->comp2Label->Text = L"Comparison with the dichotomy method";
			// 
			// chordLabel
			// 
			this->chordLabel->AutoSize = true;
			this->chordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chordLabel->Location = System::Drawing::Point(15, 208);
			this->chordLabel->Name = L"chordLabel";
			this->chordLabel->Size = System::Drawing::Size(167, 24);
			this->chordLabel->TabIndex = 27;
			this->chordLabel->Text = L"The chord method";
			// 
			// dichLabel
			// 
			this->dichLabel->AutoSize = true;
			this->dichLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dichLabel->Location = System::Drawing::Point(340, 208);
			this->dichLabel->Name = L"dichLabel";
			this->dichLabel->Size = System::Drawing::Size(205, 24);
			this->dichLabel->TabIndex = 28;
			this->dichLabel->Text = L"The dichotomy method";
			// 
			// iterLabel2
			// 
			this->iterLabel2->AutoSize = true;
			this->iterLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->iterLabel2->Location = System::Drawing::Point(445, 258);
			this->iterLabel2->Name = L"iterLabel2";
			this->iterLabel2->Size = System::Drawing::Size(0, 24);
			this->iterLabel2->TabIndex = 32;
			// 
			// speedLabel4
			// 
			this->speedLabel4->AutoSize = true;
			this->speedLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->speedLabel4->Location = System::Drawing::Point(353, 261);
			this->speedLabel4->Name = L"speedLabel4";
			this->speedLabel4->Size = System::Drawing::Size(84, 24);
			this->speedLabel4->TabIndex = 31;
			this->speedLabel4->Text = L"speed = ";
			// 
			// iterLabel1
			// 
			this->iterLabel1->AutoSize = true;
			this->iterLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->iterLabel1->Location = System::Drawing::Point(108, 255);
			this->iterLabel1->Name = L"iterLabel1";
			this->iterLabel1->Size = System::Drawing::Size(0, 24);
			this->iterLabel1->TabIndex = 30;
			// 
			// speedLabel3
			// 
			this->speedLabel3->AutoSize = true;
			this->speedLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->speedLabel3->Location = System::Drawing::Point(16, 258);
			this->speedLabel3->Name = L"speedLabel3";
			this->speedLabel3->Size = System::Drawing::Size(84, 24);
			this->speedLabel3->TabIndex = 29;
			this->speedLabel3->Text = L"speed = ";
			// 
			// solLabel1
			// 
			this->solLabel1->AutoSize = true;
			this->solLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->solLabel1->Location = System::Drawing::Point(387, 321);
			this->solLabel1->Name = L"solLabel1";
			this->solLabel1->Size = System::Drawing::Size(0, 24);
			this->solLabel1->TabIndex = 35;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(340, 321);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 24);
			this->label2->TabIndex = 34;
			this->label2->Text = L"x = ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1242, 599);
			this->Controls->Add(this->solLabel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->iterLabel2);
			this->Controls->Add(this->speedLabel4);
			this->Controls->Add(this->iterLabel1);
			this->Controls->Add(this->speedLabel3);
			this->Controls->Add(this->dichLabel);
			this->Controls->Add(this->chordLabel);
			this->Controls->Add(this->comp2Label);
			this->Controls->Add(this->solButton);
			this->Controls->Add(this->solLabel);
			this->Controls->Add(this->converLabel);
			this->Controls->Add(this->epsTextBox);
			this->Controls->Add(this->epsLabel);
			this->Controls->Add(this->xLabel);
			this->Controls->Add(this->funTextBox);
			this->Controls->Add(this->functionLabel);
			this->Controls->Add(this->bTextBox);
			this->Controls->Add(this->bLabel);
			this->Controls->Add(this->aTextBox);
			this->Controls->Add(this->aLabel);
			this->Controls->Add(this->drawButton);
			this->Controls->Add(this->drawchart);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->drawchart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		double m1, M1, a, b, eps, x;
		int iterChord, iterDich;
private: System::Void drawButton_Click(System::Object^ sender, System::EventArgs^ e);



private: System::Void solButton_Click(System::Object^ sender, System::EventArgs^ e);
private: double f(double x);
private: double chord_method(double a, double b/*, double eps*/);
private: double F(double x/*, double eps*/);
private: double F2(double x/*, double eps*/);
private: double fixed_point(double a, double b/*, double eps*/);
private: bool only_root(double a, double b/*, double eps*/);
private: bool check_the_sign_F(double a, double b/*, double eps*/);
private: bool check_the_sign_F2(double a, double b/*, double eps*/);
private: bool check_conver(double a, double b/*, double eps*/);
private: void accuracy_assess(double a, double b/*, double eps*/);
private: double dichotomy_method(double a, double b/*, double eps*/);
private: void sol();


private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
