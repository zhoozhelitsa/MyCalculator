#pragma once

namespace MyFramework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		double firstNumber = 0;
		double secondNumber = 0;
		char operation = '+';
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::Label^ labelDisplay;
	private: System::Windows::Forms::Button^ buttonAC;
	private: System::Windows::Forms::Button^ button_equals;
	private: System::Windows::Forms::Button^ button7;




	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;



	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;




	private: System::Windows::Forms::Button^ button_multiply;
	private: System::Windows::Forms::Button^ button_point;


	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ button_plusminus;


	private: System::Windows::Forms::Button^ button_divide;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->labelDisplay = (gcnew System::Windows::Forms::Label());
			this->buttonAC = (gcnew System::Windows::Forms::Button());
			this->button_equals = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button_multiply = (gcnew System::Windows::Forms::Button());
			this->button_point = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button_plusminus = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_close
			// 
			this->button_close->BackColor = System::Drawing::Color::Brown;
			this->button_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_close->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_close->Location = System::Drawing::Point(264, 12);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(25, 25);
			this->button_close->TabIndex = 0;
			this->button_close->Text = L"X";
			this->button_close->UseVisualStyleBackColor = false;
			this->button_close->Click += gcnew System::EventHandler(this, &MyForm::button_close_Click);
			// 
			// labelDisplay
			// 
			this->labelDisplay->BackColor = System::Drawing::Color::Silver;
			this->labelDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelDisplay->Location = System::Drawing::Point(24, 57);
			this->labelDisplay->Name = L"labelDisplay";
			this->labelDisplay->Size = System::Drawing::Size(265, 60);
			this->labelDisplay->TabIndex = 1;
			this->labelDisplay->Text = L"0";
			this->labelDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// buttonAC
			// 
			this->buttonAC->BackColor = System::Drawing::Color::IndianRed;
			this->buttonAC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAC->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAC->Location = System::Drawing::Point(24, 140);
			this->buttonAC->Name = L"buttonAC";
			this->buttonAC->Size = System::Drawing::Size(125, 55);
			this->buttonAC->TabIndex = 0;
			this->buttonAC->Text = L"ј—";
			this->buttonAC->UseVisualStyleBackColor = false;
			this->buttonAC->Click += gcnew System::EventHandler(this, &MyForm::button_delete_Click);
			// 
			// button_equals
			// 
			this->button_equals->BackColor = System::Drawing::Color::PaleGreen;
			this->button_equals->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_equals->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_equals->Location = System::Drawing::Point(164, 140);
			this->button_equals->Name = L"button_equals";
			this->button_equals->Size = System::Drawing::Size(125, 55);
			this->button_equals->TabIndex = 0;
			this->button_equals->Text = L"=";
			this->button_equals->UseVisualStyleBackColor = false;
			this->button_equals->Click += gcnew System::EventHandler(this, &MyForm::button_result_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gainsboro;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(24, 211);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 55);
			this->button7->TabIndex = 0;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_numb_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Gainsboro;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(94, 211);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 55);
			this->button8->TabIndex = 0;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_numb_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Gainsboro;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(164, 211);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 55);
			this->button9->TabIndex = 0;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_numb_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::Color::Khaki;
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->Location = System::Drawing::Point(234, 211);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(55, 55);
			this->button_plus->TabIndex = 0;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_action_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gainsboro;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(24, 281);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 55);
			this->button4->TabIndex = 0;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_numb_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gainsboro;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(94, 281);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 55);
			this->button5->TabIndex = 0;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_numb_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gainsboro;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(164, 281);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 55);
			this->button6->TabIndex = 0;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_numb_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::Color::Khaki;
			this->button_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus->Location = System::Drawing::Point(234, 281);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(55, 55);
			this->button_minus->TabIndex = 0;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_action_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(24, 352);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 55);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_numb_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gainsboro;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(94, 352);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 55);
			this->button2->TabIndex = 0;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_numb_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gainsboro;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(164, 352);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 55);
			this->button3->TabIndex = 0;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_numb_Click);
			// 
			// button_multiply
			// 
			this->button_multiply->BackColor = System::Drawing::Color::Khaki;
			this->button_multiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_multiply->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_multiply->Location = System::Drawing::Point(234, 352);
			this->button_multiply->Name = L"button_multiply";
			this->button_multiply->Size = System::Drawing::Size(55, 55);
			this->button_multiply->TabIndex = 0;
			this->button_multiply->Text = L"*";
			this->button_multiply->UseVisualStyleBackColor = false;
			this->button_multiply->Click += gcnew System::EventHandler(this, &MyForm::button_action_Click);
			// 
			// button_point
			// 
			this->button_point->BackColor = System::Drawing::Color::Silver;
			this->button_point->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_point->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_point->Location = System::Drawing::Point(24, 422);
			this->button_point->Name = L"button_point";
			this->button_point->Size = System::Drawing::Size(55, 55);
			this->button_point->TabIndex = 0;
			this->button_point->Text = L".";
			this->button_point->UseVisualStyleBackColor = false;
			this->button_point->Click += gcnew System::EventHandler(this, &MyForm::button_point_Click);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::Color::Gainsboro;
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button0->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->Location = System::Drawing::Point(94, 422);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(55, 55);
			this->button0->TabIndex = 0;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button_numb_Click);
			// 
			// button_plusminus
			// 
			this->button_plusminus->BackColor = System::Drawing::Color::Silver;
			this->button_plusminus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_plusminus->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plusminus->Location = System::Drawing::Point(164, 422);
			this->button_plusminus->Name = L"button_plusminus";
			this->button_plusminus->Size = System::Drawing::Size(55, 55);
			this->button_plusminus->TabIndex = 0;
			this->button_plusminus->Text = L"+-";
			this->button_plusminus->UseVisualStyleBackColor = false;
			this->button_plusminus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_minus_Click);
			// 
			// button_divide
			// 
			this->button_divide->BackColor = System::Drawing::Color::Khaki;
			this->button_divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_divide->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_divide->Location = System::Drawing::Point(234, 422);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(55, 55);
			this->button_divide->TabIndex = 0;
			this->button_divide->Text = L"/";
			this->button_divide->UseVisualStyleBackColor = false;
			this->button_divide->Click += gcnew System::EventHandler(this, &MyForm::button_action_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RosyBrown;
			this->ClientSize = System::Drawing::Size(313, 518);
			this->Controls->Add(this->labelDisplay);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->button_multiply);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button_equals);
			this->Controls->Add(this->button_plusminus);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button_point);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->buttonAC);
			this->Controls->Add(this->button_close);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button_numb_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->labelDisplay->Text == "0") {
			this->labelDisplay->Text = safe_cast<Button^>(sender)->Text;
		}
		else 
			this->labelDisplay->Text += safe_cast<Button^>(sender)->Text;
	}
	private: System::Void button_action_Click(System::Object^ sender, System::EventArgs^ e) {
		firstNumber = System::Convert::ToDouble(labelDisplay->Text);
		labelDisplay->Text = "0";
		operation = System::Convert::ToChar(safe_cast<Button^>(sender)->Text);
	}
	private: System::Void button_result_Click(System::Object ^ sender, System::EventArgs ^ e) {
		secondNumber = System::Convert::ToDouble(labelDisplay->Text);
		switch (operation) {
		case '+': labelDisplay->Text = System::Convert::ToString(firstNumber + secondNumber); break;
		case '-': labelDisplay->Text = System::Convert::ToString(firstNumber - secondNumber); break;
		case '*': labelDisplay->Text = System::Convert::ToString(firstNumber * secondNumber); break;
		case '/': 
			if (!secondNumber)
				MessageBox::Show("Divide by 0!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			else 
				labelDisplay->Text = System::Convert::ToString(firstNumber / secondNumber); break;
		default: break;
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		this->labelDisplay->Text = "0";
	}
	private: System::Void button_point_Click(System::Object^ sender, System::EventArgs^ e) {
		this->labelDisplay->Text = labelDisplay->Text + ",";
	}
	private: System::Void button_plus_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->labelDisplay->Text->Contains("-")) {
			labelDisplay->Text = labelDisplay->Text->Remove(0, 1);
		}
		else labelDisplay->Text = "-" + labelDisplay->Text;
	}
};
}
