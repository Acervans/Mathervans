#pragma once
#include <stdlib.h>
#include <string>
#include <tuple>

namespace Mathervans {

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
		bool ValueError;
		String^ PrevOp1 = gcnew String(""), ^ PrevOp2 = gcnew String(""), ^ PrevSym = gcnew String("");

		MyForm(void)
		{
			InitializeComponent();
			this->ValueError = false;
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
	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(170, 66);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 70);
			this->button1->TabIndex = 0;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(47, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Value 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(188, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 29);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Operation";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(356, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 29);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Value 2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(552, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 29);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Result";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(246, 66);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 70);
			this->button2->TabIndex = 8;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(170, 142);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 70);
			this->button3->TabIndex = 9;
			this->button3->Text = L"*";
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(246, 142);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 70);
			this->button4->TabIndex = 10;
			this->button4->Text = L"÷";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(24, 66);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(127, 70);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(335, 66);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(127, 70);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox3->Location = System::Drawing::Point(498, 66);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(182, 70);
			this->textBox3->TabIndex = 13;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(498, 160);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(182, 50);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Reset";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(703, 228);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Mathervans";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double op1, op2, res;
		std::tie(op1, op2) = parse_Operands(this->PrevSym == this->button1->Text);
		if (!this->ValueError) {
			res = op1 + op2;
			this->textBox3->Text = System::Convert::ToString(res);
			this->PrevSym = this->button1->Text;
		}
		else
			this->ValueError = false;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		double op1, op2, res;
		std::tie(op1, op2) = parse_Operands(this->PrevSym == this->button2->Text);
		if (!this->ValueError) {
			res = op1 - op2;
			this->textBox3->Text = System::Convert::ToString(res);
			this->PrevSym = this->button2->Text;
		}
		else
			this->ValueError = false;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		double op1, op2, res;
		std::tie(op1, op2) = parse_Operands(this->PrevSym == this->button3->Text);
		if (!this->ValueError) {
			res = op1 * op2;
			this->textBox3->Text = System::Convert::ToString(res);
			this->PrevSym = this->button3->Text;
		}
		else
			this->ValueError = false;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		double op1, op2, res;
		std::tie(op1, op2) = parse_Operands(this->PrevSym == this->button4->Text);
		if (!this->ValueError) {
			res = op1 / op2;
			this->textBox3->Text = System::Convert::ToString(res);
			this->PrevSym = this->button4->Text;
		}
		else
			this->ValueError = false;
	}

	private: std::pair<double, double> parse_Operands(bool sameOp) {
		double parse1, parse2;
		bool parsed1 = false;
		try
		{
			if (this->textBox3->BackColor != System::Drawing::Color::MistyRose && this->textBox3->Text &&
				this->PrevOp1 == this->textBox1->Text && this->PrevOp2 == this->textBox2->Text && sameOp)
				this->textBox1->Text = this->textBox3->Text;

			parse1 = System::Convert::ToDouble(this->textBox1->Text);
			parsed1 = true;
			parse2 = System::Convert::ToDouble(this->textBox2->Text);

			this->textBox3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->PrevOp1 = this->textBox1->Text;
			this->PrevOp2 = this->textBox2->Text;
		}
		catch (System::FormatException^ e)
		{
			this->textBox3->BackColor = System::Drawing::Color::MistyRose;
			this->textBox3->Text = "Invalid value for operand ";
			this->textBox3->Text = String::Concat(this->textBox3->Text, (parsed1 ? "2" : "1"));
			this->ValueError = true;
			parse1 = parse2 = 0;
		}

		return std::make_pair(parse1, parse2);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = "";
		this->textBox2->Text = "";
		this->textBox3->Text = "";
		this->textBox3->BackColor = System::Drawing::Color::WhiteSmoke;
		this->PrevOp1 = this->PrevOp2 = this->PrevSym = "";
	}
	};
}
