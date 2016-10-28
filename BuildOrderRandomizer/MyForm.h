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
	private: System::Windows::Forms::RichTextBox^  Output;





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
			this->Output = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
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
			this->button2->Location = System::Drawing::Point(93, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
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
			this->button3->Location = System::Drawing::Point(174, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
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
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Zerg", L"Terran", L"Protoss", L"Random" });
			this->comboBox1->Location = System::Drawing::Point(336, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 23);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(255, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
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
			this->Output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Output->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Output->Location = System::Drawing::Point(12, 57);
			this->Output->Name = L"Output";
			this->Output->ReadOnly = true;
			this->Output->Size = System::Drawing::Size(661, 518);
			this->Output->TabIndex = 7;
			this->Output->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(681, 584);
			this->Controls->Add(this->Output);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Resize += gcnew System::EventHandler(this, &MyForm::refreshOutput);
			this->ResumeLayout(false);

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

private: System::Void refreshOutput(System::Object^  sender, System::EventArgs^  e) {
	Output->Refresh();
}


/*
private: System::Void highlightLine(int index, Color color) {
	Output->SelectAll();
	Output->SelectionBackColor = Output->BackColor;
	array<String^>^ lines = Output->Lines;
	int start = Output->GetFirstCharIndexOfCurrentLine();
	int length = lines[index]->Length;
	Output->Select(start, length);
	Output->SelectionBackColor = color;
}
*/
};
}
