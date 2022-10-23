#pragma once
#include<iostream>
#include<string>
#include  <string.h>
#include<ctime>
#include <msclr\marshal_cppstd.h>
using std::cout;
using std::cin;
using std::endl;
using std::ofstream;
using std::string;
using std::ifstream;
using std::fstream;

namespace Encrypt {

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::LinkLabel^ Encrypt_label;
	private: System::Windows::Forms::TextBox^ input;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->Encrypt_label = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(1, 436);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1122, 153);
			this->panel1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(621, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(411, 135);
			this->button2->TabIndex = 1;
			this->button2->Text = L"       Encrypt";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(103, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(411, 135);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Decrypt";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->radioButton5);
			this->panel3->Controls->Add(this->radioButton4);
			this->panel3->Controls->Add(this->radioButton3);
			this->panel3->Controls->Add(this->radioButton2);
			this->panel3->Controls->Add(this->radioButton1);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->input);
			this->panel3->Controls->Add(this->Encrypt_label);
			this->panel3->Location = System::Drawing::Point(-1, -1);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1121, 437);
			this->panel3->TabIndex = 2;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton5->Location = System::Drawing::Point(845, 89);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(177, 20);
			this->radioButton5->TabIndex = 10;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"5 (unstable so be careful)";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton4->Location = System::Drawing::Point(695, 89);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(35, 20);
			this->radioButton4->TabIndex = 9;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton3->Location = System::Drawing::Point(538, 89);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(35, 20);
			this->radioButton3->TabIndex = 8;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"3";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton2->Location = System::Drawing::Point(374, 89);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(35, 20);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton1->Location = System::Drawing::Point(208, 89);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(35, 20);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(2, 171);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(178, 154);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(943, 171);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(178, 154);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Snap ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 27);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Input :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(427, 142);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(287, 76);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Double click to copy !!\r\n          ↓↓↓↓↓↓↓\r\n";
			// 
			// input
			// 
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->input->Location = System::Drawing::Point(105, 23);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(986, 38);
			this->input->TabIndex = 1;
			// 
			// Encrypt_label
			// 
			this->Encrypt_label->AutoSize = true;
			this->Encrypt_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Encrypt_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Encrypt_label->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->Encrypt_label->LinkColor = System::Drawing::Color::MidnightBlue;
			this->Encrypt_label->Location = System::Drawing::Point(368, 237);
			this->Encrypt_label->Name = L"Encrypt_label";
			this->Encrypt_label->Size = System::Drawing::Size(23, 36);
			this->Encrypt_label->TabIndex = 0;
			this->Encrypt_label->TabStop = true;
			this->Encrypt_label->Text = L" ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1126, 587);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Shhhhh 🤫🤫";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		msclr::interop::marshal_context context;
		if (input->Text == "")
		{
			MessageBox::Show(" Please enter a value into  ");
		}
		else
		{
			string Encrypt_input = context.marshal_as<std::string>(input->Text);
			string Encrypt_output;
			bool hi = true;
			
			int x = 0;
			if (radioButton1->Checked)
				x = 4;
			else if (radioButton2->Checked)
				x = 1;
			else if (radioButton3->Checked)
				x = 2;
			else if (radioButton4->Checked)
				x = 3;
			else if (radioButton5->Checked)
			{
				hi = false;
			}

			if (hi) {
				for (int i = 0; i < Encrypt_input.size(); i++)
				{
					char e = Encrypt_input[i] + x;
					Encrypt_output += e;
				}
			}
			else
			{
				for (int i = 0; i < Encrypt_input.size(); i++)
				{
					char e = Encrypt_input[i] - i;
					Encrypt_output += e;
				}
			}

			String^ output = gcnew String(Encrypt_output.c_str());
			
			Encrypt_label->Text = output;
		}

		
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context;
	if (input->Text == "")
	{
		MessageBox::Show(" Please enter a value into  ");
	}
	else
	{
		bool hi = true;
		string decrypt_input = context.marshal_as<std::string>(input->Text);
		string decrypt_output;
		int x = 0; 
		if (radioButton1->Checked)
			x = 4;
		else if (radioButton2->Checked)
			x = 1;
		else if (radioButton3->Checked)
			x = 2;
		else if (radioButton4->Checked)
			x = 3;
		else if (radioButton5->Checked)
		{
			hi = false; 
		}
			
		if (hi) {
			for (int i = 0; i < decrypt_input.size(); i++)
			{
				char e = decrypt_input[i] - x;
				decrypt_output += e;
			}
		}
		else
		{
			for (int i = 0; i < decrypt_input.size(); i++)
			{
				char e = decrypt_input[i] + i;
				decrypt_output += e;
			}
		}

		String^ output = gcnew String(decrypt_output.c_str());
		
		Encrypt_label->Text = output;
	}

}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
