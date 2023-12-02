#pragma once
#include "figure.h"
#include <iostream>
namespace CppWinForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Ellips w1(400,70,100,125), w2(110, 85, 250, 70), w3(45, 45, 180, 138), w4(45, 45, 245, 138), w5(45, 45, 310, 138), w7(20, 20, 470, 90), w6(45, 45, 375, 138);
	rectangle r1(190, 25, 295, 90), r2(10, 41, 478, 85); rectangle fon(3000, 1300, 0, 193);
	int conv;






	//Graphics^ gr = CreateGraphics();
	//gr = CreateGraphics();


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		figure** mas;// = new figure * [10];
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			mas = new figure * [10];
			mas[0] = new Ellips(400, 70, 100, 125);
			mas[1] = new Ellips(110, 85, 250, 70);
			mas[2] = new Ellips(45, 45, 180, 138);
			mas[3] = new Ellips(45, 45, 245, 138);
			mas[4] = new Ellips(45, 45, 375, 138);
			mas[5] = new Ellips(45, 45, 375, 138);
			mas[6] = new Ellips(20, 20, 470, 90);
			mas[7] = new rectangle(190, 25, 295, 90);
			mas[8] = new rectangle(10, 41, 478, 85);
			mas[9] = new  rectangle(3000, 1300, 0, 193);
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

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ —Ã≈Ÿ≈Õ»≈;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->—Ã≈Ÿ≈Õ»≈ = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->Location = System::Drawing::Point(309, 23);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"≈’¿“‹";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(360, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"“¿Õ ";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(309, 78);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 57);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Õ¿–»—Œ¬¿“‹";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(1, 143);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1300, 500);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::IndianRed;
			this->button3->Location = System::Drawing::Point(509, 28);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 44);
			this->button3->TabIndex = 5;
			this->button3->Text = L"—“–≈Àﬂ“‹";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox1->Location = System::Drawing::Point(509, 95);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// —Ã≈Ÿ≈Õ»≈
			// 
			this->—Ã≈Ÿ≈Õ»≈->AutoSize = true;
			this->—Ã≈Ÿ≈Õ»≈->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->—Ã≈Ÿ≈Õ»≈->Location = System::Drawing::Point(560, 71);
			this->—Ã≈Ÿ≈Õ»≈->Name = L"—Ã≈Ÿ≈Õ»≈";
			this->—Ã≈Ÿ≈Õ»≈->Size = System::Drawing::Size(31, 16);
			this->—Ã≈Ÿ≈Õ»≈->TabIndex = 7;
			this->—Ã≈Ÿ≈Õ»≈->Text = L"DX :";
			this->—Ã≈Ÿ≈Õ»≈->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(152, -4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(150, 160);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(668, 5);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(180, 140);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 150;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1737, 764);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->—Ã≈Ÿ≈Õ»≈);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*int k = 0;
		void start(Graphics^ gr, figure&) {};*/
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{

		if (timer1->Enabled == false)
			timer1->Enabled = true;
		else
			timer1->Enabled = false;
		
	}
		   
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		w2.Show2(pictureBox1->CreateGraphics());
		w1.Show1( pictureBox1->CreateGraphics());
		w3.Show3(pictureBox1->CreateGraphics());
		w4.Show3(pictureBox1->CreateGraphics());
		w5.Show3(pictureBox1->CreateGraphics());
		w6.Show3(pictureBox1->CreateGraphics());
        r1.Show2(pictureBox1->CreateGraphics());
        r2.Show2(pictureBox1->CreateGraphics());
		fon.Show3(pictureBox1->CreateGraphics());
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	w7.Show1(pictureBox1->CreateGraphics());

	int size2 = pictureBox1->Width;
	int lx1 = w7.get_leftx();

	for (int lx1 = w7.get_leftx(); lx1 < size2; lx1+=10)
	{
		w2.Show2(pictureBox1->CreateGraphics());
		w1.Show1(pictureBox1->CreateGraphics());
		w3.Show3(pictureBox1->CreateGraphics());
		w4.Show3(pictureBox1->CreateGraphics());
		w5.Show3(pictureBox1->CreateGraphics());
		w6.Show3(pictureBox1->CreateGraphics());
		r1.Show2(pictureBox1->CreateGraphics());
		r2.Show2(pictureBox1->CreateGraphics());
		fon.Show3(pictureBox1->CreateGraphics());
		w7.Move1(pictureBox1->CreateGraphics(), 80, 0);

	}
	w2.Show2(pictureBox1->CreateGraphics());
	w1.Show1(pictureBox1->CreateGraphics());
	w3.Show3(pictureBox1->CreateGraphics());
	w4.Show3(pictureBox1->CreateGraphics());
	w5.Show3(pictureBox1->CreateGraphics());
	w6.Show3(pictureBox1->CreateGraphics());
	r1.Show2(pictureBox1->CreateGraphics());
	r2.Show2(pictureBox1->CreateGraphics());
	fon.Show3(pictureBox1->CreateGraphics());
	//w7.Show1(pictureBox1->CreateGraphics());

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	// conv = Convert::ToInt16(textBox1->Text);
}
	   
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	conv = Convert::ToInt16(textBox1->Text);
	int size = pictureBox1->Width;
	int lx = w1.get_leftx();
	for (int lx = w1.get_leftx(); lx < size; lx++)
	{

		w2.Move2(pictureBox1->CreateGraphics(), conv, 0);
		w1.Move1(pictureBox1->CreateGraphics(), conv, 0);
		w3.Move3(pictureBox1->CreateGraphics(), conv, 0);
		w4.Move3(pictureBox1->CreateGraphics(), conv, 0);
		w5.Move3(pictureBox1->CreateGraphics(), conv, 0);
		w6.Move3(pictureBox1->CreateGraphics(), conv, 0);
		r1.Move2(pictureBox1->CreateGraphics(), conv, 0);
		fon.Move3(pictureBox1->CreateGraphics(), 0, 0);
		r2.Move2(pictureBox1->CreateGraphics(), conv, 0);
	}
	fon.Move3(pictureBox1->CreateGraphics(), 0, 0);

}
};
}
