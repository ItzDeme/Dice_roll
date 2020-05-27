#pragma once
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <time.h>
#include<ctime>
//state global ints
int dieToRoll;

namespace DiceRoll {

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
	private: System::Windows::Forms::Button^ deeFour;
	private: System::Windows::Forms::Button^ deeSix;
	private: System::Windows::Forms::Button^ deeEight;
	private: System::Windows::Forms::Button^ deeTen;
	private: System::Windows::Forms::Button^ deeTwenty;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ resetButton;
	private: System::Windows::Forms::Label^ labelForNumbers;
	private: System::Windows::Forms::Label^ labelForDees;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ generateButton;
	private: System::Windows::Forms::Label^ labelAnswer;
	private: System::Windows::Forms::TextBox^ textBox1;


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
			this->deeFour = (gcnew System::Windows::Forms::Button());
			this->deeSix = (gcnew System::Windows::Forms::Button());
			this->deeEight = (gcnew System::Windows::Forms::Button());
			this->deeTen = (gcnew System::Windows::Forms::Button());
			this->deeTwenty = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->resetButton = (gcnew System::Windows::Forms::Button());
			this->labelForNumbers = (gcnew System::Windows::Forms::Label());
			this->labelForDees = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->generateButton = (gcnew System::Windows::Forms::Button());
			this->labelAnswer = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// deeFour
			// 
			this->deeFour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deeFour->Location = System::Drawing::Point(8, 28);
			this->deeFour->Name = L"deeFour";
			this->deeFour->Size = System::Drawing::Size(88, 74);
			this->deeFour->TabIndex = 0;
			this->deeFour->Text = L"D4";
			this->deeFour->UseVisualStyleBackColor = true;
			this->deeFour->Click += gcnew System::EventHandler(this, &MyForm::deeFour_Click);
			// 
			// deeSix
			// 
			this->deeSix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deeSix->Location = System::Drawing::Point(115, 28);
			this->deeSix->Name = L"deeSix";
			this->deeSix->Size = System::Drawing::Size(88, 74);
			this->deeSix->TabIndex = 1;
			this->deeSix->Text = L"D6";
			this->deeSix->UseVisualStyleBackColor = true;
			this->deeSix->Click += gcnew System::EventHandler(this, &MyForm::deeSix_Click);
			// 
			// deeEight
			// 
			this->deeEight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deeEight->Location = System::Drawing::Point(221, 28);
			this->deeEight->Name = L"deeEight";
			this->deeEight->Size = System::Drawing::Size(88, 74);
			this->deeEight->TabIndex = 2;
			this->deeEight->Text = L"D8";
			this->deeEight->UseVisualStyleBackColor = true;
			this->deeEight->Click += gcnew System::EventHandler(this, &MyForm::deeEight_Click);
			// 
			// deeTen
			// 
			this->deeTen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deeTen->Location = System::Drawing::Point(330, 28);
			this->deeTen->Name = L"deeTen";
			this->deeTen->Size = System::Drawing::Size(88, 74);
			this->deeTen->TabIndex = 3;
			this->deeTen->Text = L"D10";
			this->deeTen->UseVisualStyleBackColor = true;
			this->deeTen->Click += gcnew System::EventHandler(this, &MyForm::deeTen_Click);
			// 
			// deeTwenty
			// 
			this->deeTwenty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deeTwenty->Location = System::Drawing::Point(443, 28);
			this->deeTwenty->Name = L"deeTwenty";
			this->deeTwenty->Size = System::Drawing::Size(88, 74);
			this->deeTwenty->TabIndex = 4;
			this->deeTwenty->Text = L"D20";
			this->deeTwenty->UseVisualStyleBackColor = true;
			this->deeTwenty->Click += gcnew System::EventHandler(this, &MyForm::deeTwenty_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(21, 162);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(115, 162);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(206, 162);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(206, 205);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 10;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(115, 205);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 9;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(21, 205);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(206, 251);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 13;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(115, 251);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 12;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(21, 251);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 11;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// resetButton
			// 
			this->resetButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resetButton->Location = System::Drawing::Point(75, 308);
			this->resetButton->Name = L"resetButton";
			this->resetButton->Size = System::Drawing::Size(128, 43);
			this->resetButton->TabIndex = 14;
			this->resetButton->Text = L"Reset";
			this->resetButton->UseVisualStyleBackColor = true;
			this->resetButton->Click += gcnew System::EventHandler(this, &MyForm::resetButton_Click);
			// 
			// labelForNumbers
			// 
			this->labelForNumbers->AutoSize = true;
			this->labelForNumbers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelForNumbers->Location = System::Drawing::Point(337, 172);
			this->labelForNumbers->Name = L"labelForNumbers";
			this->labelForNumbers->Size = System::Drawing::Size(23, 25);
			this->labelForNumbers->TabIndex = 15;
			this->labelForNumbers->Text = L"0";
			// 
			// labelForDees
			// 
			this->labelForDees->AutoSize = true;
			this->labelForDees->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelForDees->Location = System::Drawing::Point(448, 172);
			this->labelForDees->Name = L"labelForDees";
			this->labelForDees->Size = System::Drawing::Size(23, 25);
			this->labelForDees->TabIndex = 16;
			this->labelForDees->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(394, 172);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 25);
			this->label1->TabIndex = 17;
			this->label1->Text = L"+";
			// 
			// generateButton
			// 
			this->generateButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->generateButton->Location = System::Drawing::Point(342, 205);
			this->generateButton->Name = L"generateButton";
			this->generateButton->Size = System::Drawing::Size(119, 32);
			this->generateButton->TabIndex = 18;
			this->generateButton->Text = L"Generate";
			this->generateButton->UseVisualStyleBackColor = true;
			this->generateButton->Click += gcnew System::EventHandler(this, &MyForm::generateButton_Click);
			// 
			// labelAnswer
			// 
			this->labelAnswer->AutoSize = true;
			this->labelAnswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAnswer->Location = System::Drawing::Point(393, 311);
			this->labelAnswer->Name = L"labelAnswer";
			this->labelAnswer->Size = System::Drawing::Size(0, 31);
			this->labelAnswer->TabIndex = 19;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(315, 267);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 25);
			this->textBox1->TabIndex = 20;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(547, 385);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->labelAnswer);
			this->Controls->Add(this->generateButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelForDees);
			this->Controls->Add(this->labelForNumbers);
			this->Controls->Add(this->resetButton);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->deeTwenty);
			this->Controls->Add(this->deeTen);
			this->Controls->Add(this->deeEight);
			this->Controls->Add(this->deeSix);
			this->Controls->Add(this->deeFour);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void deeFour_Click(System::Object^ sender, System::EventArgs^ e) {
		//changes text in labelForDees
		this->labelForDees->Text = "D4";

		//states global int dieToRoll
		dieToRoll = 4;

		//disables all Dee buttons
		this->deeFour->Enabled = false;
		this->deeSix->Enabled = false;
		this->deeEight->Enabled = false;
		this->deeTen->Enabled = false;
		this->deeTwenty->Enabled = false;

		//makes reset button available
		this->resetButton->Enabled = true;

		//makes generate button available
		this->generateButton->Enabled = true;
	}
private: System::Void deeSix_Click(System::Object^ sender, System::EventArgs^ e) {
	//changes text in labelForDees
	this->labelForDees->Text = "D6";

	//states global int dieToRoll
	dieToRoll = 6;

	//disables all Dee buttons
	this->deeFour->Enabled = false;
	this->deeSix->Enabled = false;
	this->deeEight->Enabled = false;
	this->deeTen->Enabled = false;
	this->deeTwenty->Enabled = false;

	//makes reset button available
	this->resetButton->Enabled = true;

	//makes generate button available
	this->generateButton->Enabled = true;
}
private: System::Void deeEight_Click(System::Object^ sender, System::EventArgs^ e) {
	//changes text in labelForDees
	this->labelForDees->Text = "D8";

	//states global int dieToRoll
	dieToRoll = 8;

	//disables all Dee buttons
	this->deeFour->Enabled = false;
	this->deeSix->Enabled = false;
	this->deeEight->Enabled = false;
	this->deeTen->Enabled = false;
	this->deeTwenty->Enabled = false;

	//makes reset button available
	this->resetButton->Enabled = true;

	//makes generate button available
	this->generateButton->Enabled = true;
}
private: System::Void deeTen_Click(System::Object^ sender, System::EventArgs^ e) {
	//changes text in labelForDees
	this->labelForDees->Text = "D10";

	//states global int dieToRoll
	dieToRoll = 10;

	//disables all Dee buttons
	this->deeFour->Enabled = false;
	this->deeSix->Enabled = false;
	this->deeEight->Enabled = false;
	this->deeTen->Enabled = false;
	this->deeTwenty->Enabled = false;

	//makes reset button available
	this->resetButton->Enabled = true;

	//makes generate button available
	this->generateButton->Enabled = true;
}
private: System::Void deeTwenty_Click(System::Object^ sender, System::EventArgs^ e) {
	//changes text in labelForDees
	this->labelForDees->Text = "D20";

	//states global int dieToRoll
	dieToRoll = 20;

	//disables all Dee buttons
	this->deeFour->Enabled = false;
	this->deeSix->Enabled = false;
	this->deeEight->Enabled = false;
	this->deeTen->Enabled = false;
	this->deeTwenty->Enabled = false;

	//makes reset button available
	this->resetButton->Enabled = true;

	//makes generate button available
	this->generateButton->Enabled = true;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//changes text in labelForNumbers
	this->labelForNumbers->Text = "1";



	//disable all number buttons
	this->button1->Enabled = false;
	this->button2->Enabled = false;
	this->button3->Enabled = false;
	this->button4->Enabled = false;
	this->button5->Enabled = false;
	this->button6->Enabled = false;
	this->button7->Enabled = false;
	this->button8->Enabled = false;
	this->button9->Enabled = false;


	//makes reset button available
	this->resetButton->Enabled = true;

	//makes generate button available
	this->generateButton->Enabled = true;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//changes text in labelForNumbers
	this->labelForNumbers->Text = "2";

	

	//disable all number buttons
	this->button1->Enabled = false;
	this->button2->Enabled = false;
	this->button3->Enabled = false;
	this->button4->Enabled = false;
	this->button5->Enabled = false;
	this->button6->Enabled = false;
	this->button7->Enabled = false;
	this->button8->Enabled = false;
	this->button9->Enabled = false;


	//makes reset button available
	this->resetButton->Enabled = true;

	//makes generate button available
	this->generateButton->Enabled = true;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//changes text in labelForNumbers
	this->labelForNumbers->Text = "3";

	

	//disable all number buttons
	this->button1->Enabled = false;
	this->button2->Enabled = false;
	this->button3->Enabled = false;
	this->button4->Enabled = false;
	this->button5->Enabled = false;
	this->button6->Enabled = false;
	this->button7->Enabled = false;
	this->button8->Enabled = false;
	this->button9->Enabled = false;


	//makes reset button available
	this->resetButton->Enabled = true;

	//makes generate button available
	this->generateButton->Enabled = true;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//changes text in labelForNumbers
	this->labelForNumbers->Text = "4";

	

	//disable all number buttons
	this->button1->Enabled = false;
	this->button2->Enabled = false;
	this->button3->Enabled = false;
	this->button4->Enabled = false;
	this->button5->Enabled = false;
	this->button6->Enabled = false;
	this->button7->Enabled = false;
	this->button8->Enabled = false;
	this->button9->Enabled = false;


	//makes reset button available
	this->resetButton->Enabled = true;

	//makes generate button available
	this->generateButton->Enabled = true;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	//changes text in labelForNumbers
	this->labelForNumbers->Text = "5";

	

	//disable all number buttons
	this->button1->Enabled = false;
	this->button2->Enabled = false;
	this->button3->Enabled = false;
	this->button4->Enabled = false;
	this->button5->Enabled = false;
	this->button6->Enabled = false;
	this->button7->Enabled = false;
	this->button8->Enabled = false;
	this->button9->Enabled = false;


	//makes reset button available
	this->resetButton->Enabled = true;

	//makes generate button available
	this->generateButton->Enabled = true;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	//changes text in labelForNumbers
	this->labelForNumbers->Text = "6";

	

	//disable all number buttons
	this->button1->Enabled = false;
	this->button2->Enabled = false;
	this->button3->Enabled = false;
	this->button4->Enabled = false;
	this->button5->Enabled = false;
	this->button6->Enabled = false;
	this->button7->Enabled = false;
	this->button8->Enabled = false;
	this->button9->Enabled = false;


	//makes reset button available
	this->resetButton->Enabled = true;

	//makes generate button available
	this->generateButton->Enabled = true;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	//changes text in labelForNumbers
	this->labelForNumbers->Text = "7";

	

	//disable all number buttons
	this->button1->Enabled = false;
	this->button2->Enabled = false;
	this->button3->Enabled = false;
	this->button4->Enabled = false;
	this->button5->Enabled = false;
	this->button6->Enabled = false;
	this->button7->Enabled = false;
	this->button8->Enabled = false;
	this->button9->Enabled = false;


	//makes reset button available
	this->resetButton->Enabled = true;

	//makes generate button available
	this->generateButton->Enabled = true;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	//changes text in labelForNumbers
	this->labelForNumbers->Text = "8";

	

	//disable all number buttons
	this->button1->Enabled = false;
	this->button2->Enabled = false;
	this->button3->Enabled = false;
	this->button4->Enabled = false;
	this->button5->Enabled = false;
	this->button6->Enabled = false;
	this->button7->Enabled = false;
	this->button8->Enabled = false;
	this->button9->Enabled = false;


	//makes reset button available
	this->resetButton->Enabled = true;

	//makes generate button available
	this->generateButton->Enabled = true;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	//changes text in labelForNumbers
	this->labelForNumbers->Text = "9";

	

	//disable all number buttons
	this->button1->Enabled = false;
	this->button2->Enabled = false;
	this->button3->Enabled = false;
	this->button4->Enabled = false;
	this->button5->Enabled = false;
	this->button6->Enabled = false;
	this->button7->Enabled = false;
	this->button8->Enabled = false;
	this->button9->Enabled = false;


	//makes reset button available
	this->resetButton->Enabled = true;

	//makes generate button available
	this->generateButton->Enabled = true;
}
private: System::Void resetButton_Click(System::Object^ sender, System::EventArgs^ e) {
	// clear label fields
	this->labelForNumbers->Text = "0";
	this->labelForDees->Text = "0";

	// set button state
	this->button1->Enabled = true;
	this->button2->Enabled = true;
	this->button3->Enabled = true;
	this->button4->Enabled = true;
	this->button5->Enabled = true;
	this->button6->Enabled = true;
	this->button7->Enabled = true;
	this->button8->Enabled = true;
	this->button9->Enabled = true;
	this->deeFour->Enabled = true;
	this->deeSix->Enabled = true;
	this->deeEight->Enabled = true;
	this->deeTen->Enabled = true;
	this->deeTwenty->Enabled = true;
	this->resetButton->Enabled = false;
	this->generateButton->Enabled = true;
}
	private: System::Void generateButton_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ input1 = labelForNumbers->Text;
		int amountOfDie = Convert::ToInt32(input1);


		int possibleNumbers[] = { 0,1,2,3,4,5,6,7,8 };
		int i = 0;
		//seed
		srand((int)time(0));

		//randomize number per each array value
		for (i = 0; i < amountOfDie; i++) {
			possibleNumbers[i] = rand() % dieToRoll + 1;


		}
		//making anohter int for looping the array into a string
		int j = 0;

		//initializing the string that will be used to output the text
		String^ str;
		int totalAmount = 0;
		//loop for array to string
		for (j = 0; j < amountOfDie; j++){
			str += Convert::ToString(possibleNumbers[j]) + "   ";
			totalAmount += possibleNumbers[j];
	}
		   this->textBox1->Text = str;
		   this->labelAnswer->Text = Convert::ToString(totalAmount);
		
		   
		
		//disable generate button
		this->generateButton->Enabled = false;
}

};
}
