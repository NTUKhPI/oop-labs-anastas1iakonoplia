#pragma once
#include "StudentClasses.h"
#include <msclr/marshal_cppstd.h> 
#include <vector>
namespace kursova {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class MyForm : public System::Windows::Forms::Form
	{
		std::vector<Bachelor>* bachelorsList;
		std::vector<Master>* mastersList;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
		   std::vector<PhD>* phdsList;
	public:
		MyForm(void)
		{
			InitializeComponent();
			bachelorsList = new std::vector<Bachelor>();
			mastersList = new std::vector<Master>();
			phdsList = new std::vector<PhD>();

			this->comboBox1->Items->Add("Студентські наукові дослідження");
			this->comboBox1->Items->Add("Конференції");
			this->comboBox1->Items->Add("Волонтерські");
			this->comboBox1->Items->Add("Конференції");
			this->comboBox1->Items->Add("Професійні заходи");
			this->comboBox1->SelectedIndex = 0;

			this->comboBox2->Items->Add("Комп'ютерні науки");
			this->comboBox2->Items->Add("Математика і статистика");
			this->comboBox2->Items->Add("Фінанси і економіка");
			this->comboBox2->SelectedIndex = 0;

			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		}

		~MyForm()
		{
			if (components) delete components;

			delete bachelorsList;
			delete mastersList;
			delete phdsList;
		}

	protected:



	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;




	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(28, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1132, 636);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Lavender;
			this->tabPage1->Controls->Add(this->button13);
			this->tabPage1->Controls->Add(this->button10);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->comboBox2);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1124, 610);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Бакалаври";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(959, 278);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(123, 39);
			this->button13->TabIndex = 17;
			this->button13->Text = L"Редагувати";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(249, 279);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(157, 38);
			this->button10->TabIndex = 16;
			this->button10->Text = L"Знайти";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(739, 278);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(157, 38);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Зберегти в файл";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(63, 278);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 38);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Додати";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(472, 279);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(217, 38);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Завантажити з файлу";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(782, 216);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(228, 21);
			this->comboBox2->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(553, 214);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(161, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Академічні інтереси";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(782, 166);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(228, 21);
			this->comboBox1->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(553, 164);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Участь у проектах";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(47, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Список оцінок";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(249, 216);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(133, 20);
			this->textBox4->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(249, 166);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(133, 20);
			this->textBox3->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(47, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Група";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(249, 113);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(181, 20);
			this->textBox2->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(47, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"ПІБ студента";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(782, 115);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(228, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(553, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(189, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Тема дипломної роботи";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(512, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Бакалаври";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column6,
					this->Column7, this->Column8, this->Column1, this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(140, 360);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(842, 254);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"ПІБ студента";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Група";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Список оцінок";
			this->Column8->Name = L"Column8";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Тема дипломної роботи";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Участь у проектах";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Академічні інтереси ";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Середній бал";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Відмінник";
			this->Column5->Name = L"Column5";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->tabPage2->Controls->Add(this->button14);
			this->tabPage2->Controls->Add(this->button11);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1124, 610);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Магістри";
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(965, 288);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(123, 39);
			this->button14->TabIndex = 18;
			this->button14->Text = L"Редагувати";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(224, 288);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(157, 38);
			this->button11->TabIndex = 17;
			this->button11->Text = L"Знайти";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(735, 288);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(186, 38);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Зберегти в файл";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(59, 287);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(102, 38);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Додати";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(444, 288);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(234, 38);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Завантажити з файлу";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(782, 166);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(166, 20);
			this->textBox9->TabIndex = 11;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(553, 164);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(149, 20);
			this->label13->TabIndex = 10;
			this->label13->Text = L"Науковий керівник";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(782, 115);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(201, 20);
			this->textBox8->TabIndex = 9;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(553, 113);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(211, 20);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Тема магістерської роботи";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(249, 216);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(132, 20);
			this->textBox7->TabIndex = 7;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(47, 214);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(114, 20);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Список оцінок";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(249, 166);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(132, 20);
			this->textBox6->TabIndex = 5;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(47, 164);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 20);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Група";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(249, 113);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(180, 20);
			this->textBox5->TabIndex = 3;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(47, 111);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(112, 20);
			this->label9->TabIndex = 2;
			this->label9->Text = L"ПІБ студента";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column9,
					this->Column10, this->Column11, this->Column12, this->Column13
			});
			this->dataGridView2->Location = System::Drawing::Point(289, 362);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(543, 242);
			this->dataGridView2->TabIndex = 1;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"ПІБ студента";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Група";
			this->Column10->Name = L"Column10";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Список оцінок";
			this->Column11->Name = L"Column11";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Тема магістерської роботи";
			this->Column12->Name = L"Column12";
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Науковий керівник";
			this->Column13->Name = L"Column13";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(525, 23);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 26);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Магістри";
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::Thistle;
			this->tabPage3->Controls->Add(this->button15);
			this->tabPage3->Controls->Add(this->button12);
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->textBox14);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Controls->Add(this->textBox13);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->textBox12);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->textBox11);
			this->tabPage3->Controls->Add(this->textBox10);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1124, 610);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Аспіранти";
			this->tabPage3->Click += gcnew System::EventHandler(this, &MyForm::tabPage3_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(981, 286);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(123, 39);
			this->button15->TabIndex = 19;
			this->button15->Text = L"Редагувати";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(232, 285);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(157, 38);
			this->button12->TabIndex = 18;
			this->button12->Text = L"Знайти";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(753, 286);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(185, 38);
			this->button9->TabIndex = 14;
			this->button9->Text = L"Зберегти в файл";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(44, 283);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(128, 38);
			this->button8->TabIndex = 13;
			this->button8->Text = L"Додати";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(457, 285);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(238, 38);
			this->button7->TabIndex = 12;
			this->button7->Text = L"Завантажити з файлу";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(753, 142);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(164, 20);
			this->textBox14->TabIndex = 11;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(565, 140);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(149, 20);
			this->label19->TabIndex = 10;
			this->label19->Text = L"Науковий керівник";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(753, 94);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(164, 20);
			this->textBox13->TabIndex = 9;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(565, 96);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(130, 20);
			this->label18->TabIndex = 8;
			this->label18->Text = L"Тема дисертації";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(232, 195);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(189, 20);
			this->textBox12->TabIndex = 7;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(58, 193);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(114, 20);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Список оцінок";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(58, 140);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(52, 20);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Група";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(232, 142);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(144, 20);
			this->textBox11->TabIndex = 4;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(232, 96);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(189, 20);
			this->textBox10->TabIndex = 3;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(58, 94);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(112, 20);
			this->label15->TabIndex = 2;
			this->label15->Text = L"ПІБ студента";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column14,
					this->Column15, this->Column16, this->Column17, this->Column18
			});
			this->dataGridView3->Location = System::Drawing::Point(287, 345);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(542, 259);
			this->dataGridView3->TabIndex = 1;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"ПІБ студента";
			this->Column14->Name = L"Column14";
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Група";
			this->Column15->Name = L"Column15";
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"Список оцінок";
			this->Column16->Name = L"Column16";
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Тема дисертації";
			this->Column17->Name = L"Column17";
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"Науковий керівник";
			this->Column18->Name = L"Column18";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(517, 28);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(113, 26);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Аспіранти";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1186, 660);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ sName = textBox2->Text;
		String^ sGroup = textBox3->Text;
		String^ sGrades = textBox4->Text;
		String^ sThesis = textBox1->Text;
		String^ sProject = comboBox1->Text;
		String^ sInterest = comboBox2->Text;

		if (String::IsNullOrWhiteSpace(sName) || String::IsNullOrWhiteSpace(sGroup)) {
			MessageBox::Show("Будь ласка, введіть ПІБ та групу!", "Помилка");
			return;
		}

		std::string name = msclr::interop::marshal_as<std::string>(sName);
		std::string group = msclr::interop::marshal_as<std::string>(sGroup);

		Bachelor bach(name, group);
		bach.setThesis(msclr::interop::marshal_as<std::string>(sThesis));
		bach.setInterests(msclr::interop::marshal_as<std::string>(sInterest));
		bach.setProjectParticipation(msclr::interop::marshal_as<std::string>(sProject));

		std::string gradesStr = msclr::interop::marshal_as<std::string>(sGrades);
		std::stringstream ss(gradesStr);
		int tempGrade;
		while (ss >> tempGrade) {
			try {
				bach.addGrade(tempGrade);
			}
			catch (const std::exception&) {

			}
		}

		bachelorsList->push_back(bach);

		dataGridView1->Rows->Add(
			sName,
			sGroup,
			sGrades,
			sThesis,
			sProject,
			sInterest,
			bach.getAverageGrade().ToString("F2"),
			(bach.isExcellent() ? "Так" : "Ні")
		);

		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox1->Clear();
		comboBox1->SelectedIndex = -1;
		comboBox2->SelectedIndex = -1;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openDialog = gcnew OpenFileDialog();
		openDialog->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";

		if (openDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			std::string filename = msclr::interop::marshal_as<std::string>(openDialog->FileName);
			ifstream ifs(filename);

			if (!ifs.is_open()) {
				MessageBox::Show("Не вдалося відкрити файл!", "Помилка");
				return;
			}

			int count;
			if (!(ifs >> count)) return;

			for (int i = 0; i < count; ++i) {
				int typeInt;
				ifs >> typeInt;

				Bachelor tempBach("", "");
				tempBach.loadFromFile(ifs);
				bachelorsList->push_back(tempBach);

				String^ sName = msclr::interop::marshal_as<String^>(tempBach.pib);
				String^ sGroup = msclr::interop::marshal_as<String^>(tempBach.group);
				String^ sGrades = msclr::interop::marshal_as<String^>(tempBach.getGradesString());
				String^ sThesis = msclr::interop::marshal_as<String^>(tempBach.thesisTopic);
				String^ sInterest = msclr::interop::marshal_as<String^>(tempBach.interests);
				String^ sProject = msclr::interop::marshal_as<String^>(tempBach.participatedInProjects);
				String^ sAvg = tempBach.getAverageGrade().ToString("F2");
				String^ sExc = tempBach.isExcellent() ? "Так" : "Ні";

				dataGridView1->Rows->Add(sName, sGroup, sGrades, sThesis, sProject, sInterest, sAvg, sExc);
			}
			ifs.close();
			MessageBox::Show("Бакалаври завантажені!", "Успіх");
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bachelorsList->empty()) {
			MessageBox::Show("Список порожній!", "Увага");
			return;
		}

		SaveFileDialog^ saveDialog = gcnew SaveFileDialog();
		saveDialog->Filter = "Text Files (*.txt)|*.txt";
		if (saveDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			std::string filename = msclr::interop::marshal_as<std::string>(saveDialog->FileName);
			ofstream ofs(filename);
			if (ofs.is_open()) {
				ofs << bachelorsList->size() << endl;
				for (auto& b : *bachelorsList) {
					b.saveToFile(ofs);
				}
				ofs.close();
				MessageBox::Show("Успішно збережено!", "Інфо");
			}
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openDialog = gcnew OpenFileDialog();
		openDialog->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";

		if (openDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			std::string filename = msclr::interop::marshal_as<std::string>(openDialog->FileName);
			ifstream ifs(filename);

			if (!ifs.is_open()) {
				MessageBox::Show("Не вдалося відкрити файл!", "Помилка");
				return;
			}

			int count;
			if (!(ifs >> count)) return;

			for (int i = 0; i < count; ++i) {
				int typeInt;
				ifs >> typeInt;
				ifs.ignore(1000, '\n');

				Master tempMast("", "");
				tempMast.loadFromFile(ifs);

				mastersList->push_back(tempMast);

				String^ sName = msclr::interop::marshal_as<String^>(tempMast.pib);
				String^ sGroup = msclr::interop::marshal_as<String^>(tempMast.group);
				String^ sGrades = msclr::interop::marshal_as<String^>(tempMast.getGradesString());
				String^ sTopic = msclr::interop::marshal_as<String^>(tempMast.researchTopic);
				String^ sSuper = msclr::interop::marshal_as<String^>(tempMast.supervisor);

				dataGridView2->Rows->Add(sName, sGroup, sGrades, sTopic, sSuper);
			}
			ifs.close();
			MessageBox::Show("Дані магістрів успішно завантажено!", "Успіх");
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ sName = textBox5->Text;
		String^ sGroup = textBox6->Text;
		String^ sGrades = textBox7->Text;
		String^ sTopic = textBox8->Text;
		String^ sSuper = textBox9->Text;

		if (String::IsNullOrWhiteSpace(sName) || String::IsNullOrWhiteSpace(sGroup)) {
			MessageBox::Show("Введіть ПІБ та Групу!", "Помилка");
			return;
		}


		Master mast(
			msclr::interop::marshal_as<std::string>(sName),
			msclr::interop::marshal_as<std::string>(sGroup)
		);
		mast.setTopic(msclr::interop::marshal_as<std::string>(sTopic));
		mast.setSupervisor(msclr::interop::marshal_as<std::string>(sSuper));

		// Оцінки
		std::stringstream ss(msclr::interop::marshal_as<std::string>(sGrades));
		int tempGrade;
		while (ss >> tempGrade) {
			try { mast.addGrade(tempGrade); }
			catch (...) {}
		}

		mastersList->push_back(mast);


		dataGridView2->Rows->Add(sName, sGroup, sGrades, sTopic, sSuper);


		textBox5->Clear(); textBox6->Clear(); textBox7->Clear();
		textBox8->Clear(); textBox9->Clear();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (mastersList->empty()) {
			MessageBox::Show("Немає магістрів для збереження!", "Увага");
			return;
		}

		SaveFileDialog^ saveDialog = gcnew SaveFileDialog();
		saveDialog->Filter = "Text Files (*.txt)|*.txt";
		if (saveDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			std::string filename = msclr::interop::marshal_as<std::string>(saveDialog->FileName);
			ofstream ofs(filename);
			if (ofs.is_open()) {
				ofs << mastersList->size() << endl;
				for (auto& m : *mastersList) {
					m.saveToFile(ofs);
				}
				ofs.close();
				MessageBox::Show("Магістрів збережено!", "Успіх");
			}
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openDialog = gcnew OpenFileDialog();

		openDialog->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";

		if (openDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			std::string filename = msclr::interop::marshal_as<std::string>(openDialog->FileName);
			ifstream ifs(filename);

			if (!ifs.is_open()) {
				MessageBox::Show("Не вдалося відкрити файл!", "Помилка");
				return;
			}

			int count;
			if (!(ifs >> count)) return;

			for (int i = 0; i < count; ++i) {
				int typeInt;
				ifs >> typeInt;
				ifs.ignore(1000, '\n');

				PhD tempPhD("", "");
				tempPhD.loadFromFile(ifs);

				phdsList->push_back(tempPhD);

				String^ sName = msclr::interop::marshal_as<String^>(tempPhD.pib);
				String^ sGroup = msclr::interop::marshal_as<String^>(tempPhD.group);

				String^ sGrades = msclr::interop::marshal_as<String^>(tempPhD.getGradesString());
				String^ sTopic = msclr::interop::marshal_as<String^>(tempPhD.researchTopic);
				String^ sSuper = msclr::interop::marshal_as<String^>(tempPhD.supervisor);


				dataGridView3->Rows->Add(sName, sGroup, sGrades, sTopic, sSuper);
			}
			ifs.close();
			MessageBox::Show("Дані аспірантів успішно завантажено!", "Успіх");
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ sName = textBox10->Text;
		String^ sGroup = textBox11->Text;
		String^ sGrades = textBox12->Text;
		String^ sTopic = textBox13->Text;
		String^ sSuper = textBox14->Text;

		if (String::IsNullOrWhiteSpace(sName)) return;


		PhD phd(
			msclr::interop::marshal_as<std::string>(sName),
			msclr::interop::marshal_as<std::string>(sGroup)
		);
		phd.setTopic(msclr::interop::marshal_as<std::string>(sTopic));
		phd.setSupervisor(msclr::interop::marshal_as<std::string>(sSuper));


		std::stringstream ss(msclr::interop::marshal_as<std::string>(sGrades));
		int tempGrade;
		while (ss >> tempGrade) {
			try { phd.addGrade(tempGrade); }
			catch (...) {}
		}

		phdsList->push_back(phd);


		dataGridView3->Rows->Add(sName, sGroup, sGrades, sTopic, sSuper);


		textBox10->Clear(); textBox11->Clear(); textBox12->Clear();
		textBox13->Clear(); textBox14->Clear();
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (phdsList->empty()) {
			MessageBox::Show("Список аспірантів порожній!", "Увага");
			return;
		}

		SaveFileDialog^ saveDialog = gcnew SaveFileDialog();
		saveDialog->Filter = "Text Files (*.txt)|*.txt";
		if (saveDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			std::string filename = msclr::interop::marshal_as<std::string>(saveDialog->FileName);
			ofstream ofs(filename);
			if (ofs.is_open()) {
				ofs << phdsList->size() << endl;
				for (auto& p : *phdsList) {
					p.saveToFile(ofs);
				}
				ofs.close();
				MessageBox::Show("Аспірантів збережено!", "Успіх");
			}
		}
	}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

		dataGridView1->Rows->Clear();


		std::string searchName = msclr::interop::marshal_as<std::string>(textBox2->Text);
		std::string searchGroup = msclr::interop::marshal_as<std::string>(textBox3->Text);
		std::string searchThesis = msclr::interop::marshal_as<std::string>(textBox1->Text);

		bool found = false;


		for (const auto& b : *bachelorsList) {
			bool matchName = true;
			bool matchGroup = true;
			bool matchThesis = true;


			if (!searchName.empty()) {
				if (b.pib.find(searchName) == std::string::npos) matchName = false;
			}


			if (!searchGroup.empty()) {
				if (b.group.find(searchGroup) == std::string::npos) matchGroup = false;
			}


			if (!searchThesis.empty()) {

				if (b.thesisTopic.find(searchThesis) == std::string::npos) matchThesis = false;
			}


			if (matchName && matchGroup && matchThesis) {


				String^ sName = msclr::interop::marshal_as<String^>(b.pib);
				String^ sGroup = msclr::interop::marshal_as<String^>(b.group);
				String^ sGrades = msclr::interop::marshal_as<String^>(b.getGradesString());
				String^ sThesis = msclr::interop::marshal_as<String^>(b.thesisTopic);
				String^ sInterest = msclr::interop::marshal_as<String^>(b.interests);
				String^ sProject = msclr::interop::marshal_as<String^>(b.participatedInProjects);
				String^ sAvg = b.getAverageGrade().ToString("F2");
				String^ sExc = b.isExcellent() ? "Так" : "Ні";

				dataGridView1->Rows->Add(sName, sGroup, sGrades, sThesis, sProject, sInterest, sAvg, sExc);
				found = true;
			}
			textBox2->Text = "";
			textBox3->Text = "";
			textBox1->Text = "";
		}

		if (!found) {
			MessageBox::Show("За вашим запитом нічого не знайдено.", "Результат пошуку");
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {

		dataGridView2->Rows->Clear();


		std::string searchName = msclr::interop::marshal_as<std::string>(textBox5->Text);
		std::string searchGroup = msclr::interop::marshal_as<std::string>(textBox6->Text);
		std::string searchTopic = msclr::interop::marshal_as<std::string>(textBox8->Text);
		std::string searchSuper = msclr::interop::marshal_as<std::string>(textBox9->Text);

		bool found = false;


		for (const auto& m : *mastersList) {
			bool matchName = true, matchGroup = true, matchTopic = true, matchSuper = true;


			if (!searchName.empty() && m.pib.find(searchName) == std::string::npos) matchName = false;


			if (!searchGroup.empty() && m.group.find(searchGroup) == std::string::npos) matchGroup = false;


			if (!searchTopic.empty() && m.researchTopic.find(searchTopic) == std::string::npos) matchTopic = false;


			if (!searchSuper.empty() && m.supervisor.find(searchSuper) == std::string::npos) matchSuper = false;


			if (matchName && matchGroup && matchTopic && matchSuper) {
				String^ sName = msclr::interop::marshal_as<String^>(m.pib);
				String^ sGroup = msclr::interop::marshal_as<String^>(m.group);
				String^ sGrades = msclr::interop::marshal_as<String^>(m.getGradesString());
				String^ sTopic = msclr::interop::marshal_as<String^>(m.researchTopic);
				String^ sSuper = msclr::interop::marshal_as<String^>(m.supervisor);

				dataGridView2->Rows->Add(sName, sGroup, sGrades, sTopic, sSuper);
				found = true;
			}
			textBox5->Text = "";
			textBox6->Text = "";
			textBox8->Text = "";
			textBox9->Text = "";
		}

		if (!found) MessageBox::Show("Магістрів за вашим запитом не знайдено.", "Пошук");
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {

		dataGridView3->Rows->Clear();


		std::string searchName = msclr::interop::marshal_as<std::string>(textBox10->Text);
		std::string searchGroup = msclr::interop::marshal_as<std::string>(textBox11->Text);
		std::string searchTopic = msclr::interop::marshal_as<std::string>(textBox13->Text);
		std::string searchSuper = msclr::interop::marshal_as<std::string>(textBox14->Text);

		bool found = false;


		for (const auto& p : *phdsList) {
			bool matchName = true, matchGroup = true, matchTopic = true, matchSuper = true;


			if (!searchName.empty() && p.pib.find(searchName) == std::string::npos) matchName = false;


			if (!searchGroup.empty() && p.group.find(searchGroup) == std::string::npos) matchGroup = false;

			if (!searchTopic.empty() && p.researchTopic.find(searchTopic) == std::string::npos) matchTopic = false;

			if (!searchSuper.empty() && p.supervisor.find(searchSuper) == std::string::npos) matchSuper = false;

			if (matchName && matchGroup && matchTopic && matchSuper) {
				String^ sName = msclr::interop::marshal_as<String^>(p.pib);
				String^ sGroup = msclr::interop::marshal_as<String^>(p.group);
				String^ sGrades = msclr::interop::marshal_as<String^>(p.getGradesString());
				String^ sTopic = msclr::interop::marshal_as<String^>(p.researchTopic);
				String^ sSuper = msclr::interop::marshal_as<String^>(p.supervisor);

				dataGridView3->Rows->Add(sName, sGroup, sGrades, sTopic, sSuper);
				found = true;
			}
		}
		textBox10->Text = "";
		textBox11->Text = "";
		textBox13->Text = "";
		textBox14->Text = "";
		if (!found) MessageBox::Show("Аспірантів за вашим запитом не знайдено.", "Пошук");
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dataGridView1->SelectedRows->Count == 0) {
			MessageBox::Show("Будь ласка, виберіть рядок для редагування.", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}


		int index = dataGridView1->SelectedRows[0]->Index;


		if (index >= bachelorsList->size()) {
			MessageBox::Show("Помилка синхронізації списку!", "Помилка");
			return;
		}


		if (textBox2->Text == "" || textBox3->Text == "") {
			MessageBox::Show("Будь ласка, заповніть ПІБ та Групу!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}


		dataGridView1->Rows[index]->Cells[0]->Value = textBox2->Text;
		dataGridView1->Rows[index]->Cells[1]->Value = textBox3->Text;
		dataGridView1->Rows[index]->Cells[2]->Value = textBox4->Text;
		dataGridView1->Rows[index]->Cells[3]->Value = textBox1->Text;
		dataGridView1->Rows[index]->Cells[4]->Value = comboBox1->Text;
		dataGridView1->Rows[index]->Cells[5]->Value = comboBox2->Text;


		Bachelor& currentBach = bachelorsList->at(index);

		currentBach.pib = msclr::interop::marshal_as<std::string>(textBox2->Text);
		currentBach.group = msclr::interop::marshal_as<std::string>(textBox3->Text);
		currentBach.thesisTopic = msclr::interop::marshal_as<std::string>(textBox1->Text);
		currentBach.participatedInProjects = msclr::interop::marshal_as<std::string>(comboBox1->Text);
		currentBach.interests = msclr::interop::marshal_as<std::string>(comboBox2->Text);


		currentBach.grades.clear();
		std::string gradesStd = msclr::interop::marshal_as<std::string>(textBox4->Text);
		std::stringstream ss(gradesStd);
		int tempGrade;
		while (ss >> tempGrade) {
			currentBach.addGrade(tempGrade);
		}


		String^ gradesStr = textBox4->Text;
		double sum = 0;
		int count = 0;
		bool isExcellent = true;


		cli::array<String^>^ gradeParts = gradesStr->Split(' ');

		for each(String ^ part in gradeParts) {
			if (!String::IsNullOrWhiteSpace(part)) {
				try {
					int grade = Convert::ToInt32(part);
					sum += grade;
					count++;
					if (grade < 90) isExcellent = false;
				}
				catch (...) {}
			}
		}

		double average = (count > 0) ? (sum / count) : 0.0;


		dataGridView1->Rows[index]->Cells[6]->Value = average.ToString("F2");
		dataGridView1->Rows[index]->Cells[7]->Value = isExcellent ? "Так" : "Ні";

		MessageBox::Show("Дані успішно оновлено!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);


		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox1->Clear();

	}

	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dataGridView2->SelectedRows->Count == 0) {
			MessageBox::Show("Будь ласка, виберіть рядок для редагування.", "Увага");
			return;
		}

		int index = dataGridView2->SelectedRows[0]->Index;

		if (index >= mastersList->size()) return;


		if (textBox5->Text == "" || textBox6->Text == "") {
			MessageBox::Show("Заповніть ПІБ та Групу!", "Помилка");
			return;
		}


		dataGridView2->Rows[index]->Cells[0]->Value = textBox5->Text;
		dataGridView2->Rows[index]->Cells[1]->Value = textBox6->Text;
		dataGridView2->Rows[index]->Cells[2]->Value = textBox7->Text;
		dataGridView2->Rows[index]->Cells[3]->Value = textBox8->Text;
		dataGridView2->Rows[index]->Cells[4]->Value = textBox9->Text;


		Master& currentMaster = mastersList->at(index);

		currentMaster.pib = msclr::interop::marshal_as<std::string>(textBox5->Text);
		currentMaster.group = msclr::interop::marshal_as<std::string>(textBox6->Text);
		currentMaster.researchTopic = msclr::interop::marshal_as<std::string>(textBox8->Text);
		currentMaster.supervisor = msclr::interop::marshal_as<std::string>(textBox9->Text);


		currentMaster.grades.clear();
		std::string gradesStd = msclr::interop::marshal_as<std::string>(textBox7->Text);
		std::stringstream ss(gradesStd);
		int tempGrade;
		while (ss >> tempGrade) {
			currentMaster.addGrade(tempGrade);
		}

		MessageBox::Show("Дані магістра оновлено!", "Успіх");

		textBox5->Clear();
		textBox6->Clear();
		textBox7->Clear();
		textBox8->Clear();
		textBox9->Clear();
	}

	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dataGridView3->SelectedRows->Count == 0) {
			MessageBox::Show("Будь ласка, виберіть рядок для редагування.", "Увага");
			return;
		}

		int index = dataGridView3->SelectedRows[0]->Index;

		if (index >= phdsList->size()) return;


		if (textBox10->Text == "" || textBox11->Text == "") {
			MessageBox::Show("Заповніть ПІБ та Групу!", "Помилка");
			return;
		}


		dataGridView3->Rows[index]->Cells[0]->Value = textBox10->Text;
		dataGridView3->Rows[index]->Cells[1]->Value = textBox11->Text;
		dataGridView3->Rows[index]->Cells[2]->Value = textBox12->Text;
		dataGridView3->Rows[index]->Cells[3]->Value = textBox13->Text;
		dataGridView3->Rows[index]->Cells[4]->Value = textBox14->Text;


		PhD& currentPhD = phdsList->at(index);

		currentPhD.pib = msclr::interop::marshal_as<std::string>(textBox10->Text);
		currentPhD.group = msclr::interop::marshal_as<std::string>(textBox11->Text);
		currentPhD.researchTopic = msclr::interop::marshal_as<std::string>(textBox13->Text);
		currentPhD.supervisor = msclr::interop::marshal_as<std::string>(textBox14->Text);


		currentPhD.grades.clear();
		std::string gradesStd = msclr::interop::marshal_as<std::string>(textBox12->Text);
		std::stringstream ss(gradesStd);
		int tempGrade;
		while (ss >> tempGrade) {
			currentPhD.addGrade(tempGrade);
		}

		MessageBox::Show("Дані аспіранта оновлено!", "Успіх");

		textBox10->Clear();
		textBox11->Clear();
		textBox12->Clear();
		textBox13->Clear();
		textBox14->Clear();
	}

	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	};

}
