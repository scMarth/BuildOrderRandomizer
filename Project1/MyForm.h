#pragma once
#using <system.dll>
#include <string>
#include <random>
#include <iostream>

namespace Project1 {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  Output;



	protected:

	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Output = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"RvZ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(93, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"RvT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(174, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"RvP";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Zerg", L"Terran", L"Protoss", L"Random" });
			this->comboBox1->Location = System::Drawing::Point(337, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(256, 11);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"RvR";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// Output
			// 
			this->Output->AutoEllipsis = true;
			this->Output->AutoSize = true;
			this->Output->Location = System::Drawing::Point(12, 45);
			this->Output->Name = L"Output";
			this->Output->Size = System::Drawing::Size(0, 13);
			this->Output->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 584);
			this->Controls->Add(this->Output);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (comboBox1->Text == "Terran") {
			button1->Text = "TvZ";
			button2->Text = "TvT";
			button3->Text = "TvP";
			button4->Text = "TvR";
		}
		else if (comboBox1->Text == "Zerg") {
			button1->Text = "ZvZ";
			button2->Text = "ZvT";
			button3->Text = "ZvP";
			button4->Text = "ZvR";
		}
		else if (comboBox1->Text == "Protoss") {
			button1->Text = "PvZ";
			button2->Text = "PvT";
			button3->Text = "PvP";
			button4->Text = "PvR";
		}
		else if (comboBox1->Text == "Random") {
			button1->Text = "RvZ";
			button2->Text = "RvT";
			button3->Text = "RvP";
			button4->Text = "RvR";
		}

	}

private: System::Void printFile(String^ path, String^ fileName) {
	//Output->Text += "Filename: " + fileName + "\n\n";
	Output->Text += fileName->Substring(path->Length) + "\n\n";


	std::random_device rd;   // non-deterministic generator
	std::mt19937 gen(rd());  // to seed mersenne twister.
	std::uniform_int_distribution<> dist(1, 3); // distribute results between 1 and 6 inclusive.


	Output->Text += "Random number: " + dist(gen) + "\n\n";



	try
	{
		Console::WriteLine("trying to open file {0}...", fileName);
		StreamReader^ din = File::OpenText(fileName);

		String^ str;
		int count = 0;
		while ((str = din->ReadLine()) != nullptr)
		{
			count++;
			Console::WriteLine("line {0}: {1}", count, str);
			Output->Text += str + "\n";
		}
	}
	catch (Exception^ e)
	{
		if (dynamic_cast<FileNotFoundException^>(e))
			Console::WriteLine("file '{0}' not found", fileName);
		else
			Console::WriteLine("problem reading file '{0}'", fileName);
	}

}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Output->Text = "";
	String^ path = Directory::GetCurrentDirectory();
	path = path + "\\" + button1->Text + "\\";

	array<String^>^ file = Directory::GetFiles(path);
	for (int i = 0; i < file->Length; i++) {
		printFile(path, file[i]);
	}



}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button2->Text == "ZvT") {
		Output->Text = "Zerg versus Terran Build Order:";
	}
	else if (button2->Text == "TvT") {
		Output->Text = "Terran versus Terran Build Order:";

	}
	else if (button2->Text == "PvT") {
		Output->Text = "Protoss versus Terran Build Order:";
	}
	else if (button2->Text == "RvT") {
		Output->Text = "Random versus Terran Build Order:";
	}
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button3->Text == "ZvP") {
		Output->Text = "Zerg versus Protoss Build Order:";
	}
	else if (button3->Text == "TvP") {
		Output->Text = "Terran versus Protoss Build Order:";

	}
	else if (button3->Text == "PvP") {
		Output->Text = "Protoss versus Protoss Build Order:";
	}
	else if (button3->Text == "RvP") {
		Output->Text = "Random versus Protoss Build Order:";
	}
}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button4->Text == "ZvR") {
		Output->Text = "Zerg versus Random Build Order:";
	}
	else if (button4->Text == "TvR") {
		Output->Text = "Terran versus Random Build Order:";

	}
	else if (button4->Text == "PvR") {
		Output->Text = "Protoss versus Random Build Order:";
	}
	else if (button4->Text == "RvR") {
		Output->Text = "Random versus Random Build Order:";
	}
}





};
}
