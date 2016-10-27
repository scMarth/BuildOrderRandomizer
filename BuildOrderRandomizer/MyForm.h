#pragma once
#using <system.dll>
#include <string>
#include <random>
#include <iostream>

namespace BuildOrderRandomizer {

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
	private: System::Windows::Forms::TextBox^  Output;

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
			this->Output = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(14, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"RvZ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(108, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"RvT";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(203, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"RvP";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Zerg", L"Terran", L"Protoss", L"Random" });
			this->comboBox1->Location = System::Drawing::Point(392, 14);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(140, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(297, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"RvR";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// Output
			// 
			this->Output->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Output->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->Output->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Output->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Output->Location = System::Drawing::Point(14, 57);
			this->Output->Multiline = true;
			this->Output->Name = L"Output";
			this->Output->ReadOnly = true;
			this->Output->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Output->Size = System::Drawing::Size(766, 515);
			this->Output->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(794, 584);
			this->Controls->Add(this->Output);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
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

private: System::String^ randomRace() {
	std::random_device rd;   // non-deterministic generator
	std::mt19937 gen(rd());  // to seed mersenne twister.
	std::uniform_int_distribution<> dist(1, 3); // distribute results between 1 and 3 inclusive.

	int number = dist(gen);

	if (number == 1)
		return "T";
	else if (number == 2)
		return "P";
	else
		return "Z";
}

private: System::Void printFile(String^ path, String^ fileName) {

	Output->Text += fileName->Substring(path->Length) +
		Environment::NewLine + Environment::NewLine;

	String^ randRace = randomRace();

	//attempt to print the file
	try
	{
		StreamReader^ din = File::OpenText(fileName);

		String^ str;
		int count = 0;
		while ((str = din->ReadLine()) != nullptr)
		{
			count++;
			Output->Text += str + Environment::NewLine;
		}
	}
	catch (Exception^ e)
	{
		if (dynamic_cast<FileNotFoundException^>(e))
			Output->Text += "file not found: " + fileName;
		else
			Output->Text += "problem reading file: " + fileName;
	}
}


private: System::String^ getButtonText(int buttonNum) {
	if (buttonNum == 1)
		return button1->Text;
	else if (buttonNum == 2)
		return button2->Text;
	else if (buttonNum == 3)
		return button3->Text;
	else
		return button4->Text;
}


private: System::String^ getMatchup(String^ matchup) {

	if (matchup == "RvZ" || matchup == "RvT" || matchup == "RvP"){
		return randomRace() + matchup->Substring(1);
	}
	else if (matchup == "PvR" || matchup == "TvR" || matchup == "ZvR") {
		return matchup->Substring(0, 2) + randomRace();
	}
	else{ // RvR
		return randomRace() + "v" + randomRace();
	}
}

private: System::Void buttonClickHandler(int buttonNum) {
	Output->Text = "";
	String^ path = Directory::GetCurrentDirectory();

	// handle special cases that involve random race
	String^ matchup = getButtonText(buttonNum);
	if (matchup == "RvZ" || matchup == "RvT" || matchup == "RvP" ||
		matchup == "PvR" || matchup == "TvR" || matchup == "ZvR" ||
		matchup == "RvR")
	{
		matchup = getMatchup(matchup);
	}


	path = path + "\\" + matchup + "\\";

	Output->Text += "Path: " + path + Environment::NewLine + Environment::NewLine;
	Output->Text += "Matchup: " + matchup + Environment::NewLine + Environment::NewLine;


	try {
		array<String^>^ file = Directory::GetFiles(path);
		std::random_device rd;   // non-deterministic generator
		std::mt19937 gen(rd());  // to seed mersenne twister.
		std::uniform_int_distribution<> dist(0, file->Length - 1); // choose a file number at random
		printFile(path, file[dist(gen)]);
	}
	catch (Exception^ e)
	{
		if (dynamic_cast<DirectoryNotFoundException^>(e))
			Output->Text += "No such directory: " + path;
		else
			Output->Text += "Problem getting files from directory: " + path;
	}
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	buttonClickHandler(1);
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	buttonClickHandler(2);
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	buttonClickHandler(3);
}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	buttonClickHandler(4);
}

};
}
