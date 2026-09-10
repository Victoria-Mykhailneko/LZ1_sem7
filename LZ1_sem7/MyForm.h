#pragma once

namespace LZ1_sem7 {

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(794, 109);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 5;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::DeepSkyBlue;
			series1->Legend = L"Legend1";
			series1->LegendText = L"варіант 9";
			series1->MarkerColor = System::Drawing::Color::RoyalBlue;
			series1->MarkerSize = 10;
			series1->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Diamond;
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(397, 389);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"Графік функції";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(421, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Виконала студентка групи 4СОМ Михайленко Вікторія";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(36, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введіть k";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(215, 131);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(297, 26);
			this->textBox1->TabIndex = 4;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(36, 197);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(283, 264);
			this->listBox1->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(436, 197);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 50);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Табулювати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button2->Location = System::Drawing::Point(436, 280);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(196, 51);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Побудувати";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button3->Location = System::Drawing::Point(436, 364);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(196, 50);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Очистити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1250, 540);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();

		double a = -2.0;
		double b = 5.2;
		int k = 0;

		if (!System::Int32::TryParse(textBox1->Text, k) || k <= 0) {
			MessageBox::Show("Будь ласка, введіть ціле число k, яке більше за 0!");
			return;
		}

		double h = (b - a) / k;

		listBox1->Items->Add("    X\t\t    Y");
		listBox1->Items->Add("------------------------------");

		for (int i = 0; i <= k; i++) {
			double x = a + i * h;
			double y = System::Math::Pow(3.0, System::Math::Abs(System::Math::Sin(x * x - 1.0)));

			listBox1->Items->Add(x.ToString("F2") + "\t\t" + y.ToString("F2"));
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		chart1->Series[0]->Points->Clear();
		chart1->Series[0]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;

		double a = -2.0;
		double b = 5.2;
		int k = 0;

		if (!System::Int32::TryParse(textBox1->Text, k) || k <= 0) {
			MessageBox::Show("Будь ласка, введіть ціле число k, яке більше за 0!");
			return;
		}

		double h = (b - a) / k;

		for (int i = 0; i <= k; i++) {
			double x = a + i * h;
			double y = System::Math::Pow(3.0, System::Math::Abs(System::Math::Sin(x * x - 1.0)));

			chart1->Series[0]->Points->AddXY(x, y);
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		chart1->Series[0]->Points->Clear();
		textBox1->Clear();
	}
	};
}