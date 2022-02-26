#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtSoA;
	private: System::Windows::Forms::TextBox^  txtSoB;
	private: System::Windows::Forms::TextBox^  txtKQ;
	private: System::Windows::Forms::Button^  btCong;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtSoA = (gcnew System::Windows::Forms::TextBox());
			this->txtSoB = (gcnew System::Windows::Forms::TextBox());
			this->txtKQ = (gcnew System::Windows::Forms::TextBox());
			this->btCong = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Số a:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Số b:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 191);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 17);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Kết quả:";
			// 
			// txtSoA
			// 
			this->txtSoA->Location = System::Drawing::Point(69, 51);
			this->txtSoA->Name = L"txtSoA";
			this->txtSoA->Size = System::Drawing::Size(165, 22);
			this->txtSoA->TabIndex = 1;
			// 
			// txtSoB
			// 
			this->txtSoB->Location = System::Drawing::Point(69, 114);
			this->txtSoB->Name = L"txtSoB";
			this->txtSoB->Size = System::Drawing::Size(165, 22);
			this->txtSoB->TabIndex = 1;
			// 
			// txtKQ
			// 
			this->txtKQ->Location = System::Drawing::Point(89, 186);
			this->txtKQ->Name = L"txtKQ";
			this->txtKQ->Size = System::Drawing::Size(145, 22);
			this->txtKQ->TabIndex = 1;
			// 
			// btCong
			// 
			this->btCong->Location = System::Drawing::Point(159, 244);
			this->btCong->Name = L"btCong";
			this->btCong->Size = System::Drawing::Size(75, 23);
			this->btCong->TabIndex = 2;
			this->btCong->Text = L"Cộng";
			this->btCong->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(246, 295);
			this->Controls->Add(this->btCong);
			this->Controls->Add(this->txtKQ);
			this->Controls->Add(this->txtSoB);
			this->Controls->Add(this->txtSoA);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

