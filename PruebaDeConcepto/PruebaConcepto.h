#pragma once




namespace PruebaDeConcepto {
	
	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	

	/// <summary>
	/// Resumen de PruebaConcepto
	/// </summary>
	public ref class PruebaConcepto : public System::Windows::Forms::Form
	{
	public:
		PruebaConcepto(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PruebaConcepto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  glovesCombobox;
	protected:

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  selectGloveButton;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::ProgressBar^  progressBar2;
	private: System::Windows::Forms::ProgressBar^  progressBar3;
	private: System::Windows::Forms::ProgressBar^  progressBar4;
	private: System::Windows::Forms::ProgressBar^  progressBar5;
	private: System::Windows::Forms::ProgressBar^  progressBar6;
	private: System::Windows::Forms::ProgressBar^  progressBar7;
	private: System::Windows::Forms::ProgressBar^  progressBar8;
	private: System::Windows::Forms::ProgressBar^  progressBar9;
	private: System::Windows::Forms::ProgressBar^  progressBar10;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  ACCELX;
	private: System::Windows::Forms::Label^  ACCELY;
	private: System::Windows::Forms::Label^  ACCELZ;
	private: System::Windows::Forms::Label^  GYROZ;
	private: System::Windows::Forms::Label^  GYROY;
	private: System::Windows::Forms::Label^  GYROX;
	private: System::Windows::Forms::Label^  MAGNZ;
	private: System::Windows::Forms::Label^  MAGNY;
	private: System::Windows::Forms::Label^  MAGNX;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{

			this->glovesCombobox = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->selectGloveButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar5 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar6 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar7 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar8 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar9 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar10 = (gcnew System::Windows::Forms::ProgressBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->ACCELX = (gcnew System::Windows::Forms::Label());
			this->ACCELY = (gcnew System::Windows::Forms::Label());
			this->ACCELZ = (gcnew System::Windows::Forms::Label());
			this->GYROZ = (gcnew System::Windows::Forms::Label());
			this->GYROY = (gcnew System::Windows::Forms::Label());
			this->GYROX = (gcnew System::Windows::Forms::Label());
			this->MAGNZ = (gcnew System::Windows::Forms::Label());
			this->MAGNY = (gcnew System::Windows::Forms::Label());
			this->MAGNX = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// glovesCombobox
			// 
			this->glovesCombobox->FormattingEnabled = true;
			this->glovesCombobox->Location = System::Drawing::Point(50, 94);
			this->glovesCombobox->Name = L"glovesCombobox";
			this->glovesCombobox->Size = System::Drawing::Size(121, 21);
			this->glovesCombobox->TabIndex = 0;
			this->glovesCombobox->SelectedIndexChanged += gcnew System::EventHandler(this, &PruebaConcepto::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Available Gloves";
			this->label1->Click += gcnew System::EventHandler(this, &PruebaConcepto::label1_Click);
			// 
			// selectGloveButton
			// 
			this->selectGloveButton->Location = System::Drawing::Point(187, 94);
			this->selectGloveButton->Name = L"selectGloveButton";
			this->selectGloveButton->Size = System::Drawing::Size(75, 23);
			this->selectGloveButton->TabIndex = 2;
			this->selectGloveButton->Text = L"Seleccionar";
			this->selectGloveButton->UseVisualStyleBackColor = true;
			this->selectGloveButton->Click += gcnew System::EventHandler(this, &PruebaConcepto::selectGloveButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(96, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(423, 39);
			this->label2->TabIndex = 3;
			this->label2->Text = L"OPENGLOVE C++ TEST";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(50, 155);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(100, 23);
			this->progressBar1->TabIndex = 4;
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(50, 184);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(100, 23);
			this->progressBar2->TabIndex = 5;
			// 
			// progressBar3
			// 
			this->progressBar3->Location = System::Drawing::Point(50, 213);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(100, 23);
			this->progressBar3->TabIndex = 6;
			// 
			// progressBar4
			// 
			this->progressBar4->Location = System::Drawing::Point(50, 242);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(100, 23);
			this->progressBar4->TabIndex = 7;
			// 
			// progressBar5
			// 
			this->progressBar5->Location = System::Drawing::Point(50, 271);
			this->progressBar5->Name = L"progressBar5";
			this->progressBar5->Size = System::Drawing::Size(100, 23);
			this->progressBar5->TabIndex = 8;
			// 
			// progressBar6
			// 
			this->progressBar6->Location = System::Drawing::Point(202, 271);
			this->progressBar6->Name = L"progressBar6";
			this->progressBar6->Size = System::Drawing::Size(100, 23);
			this->progressBar6->TabIndex = 13;
			// 
			// progressBar7
			// 
			this->progressBar7->Location = System::Drawing::Point(202, 242);
			this->progressBar7->Name = L"progressBar7";
			this->progressBar7->Size = System::Drawing::Size(100, 23);
			this->progressBar7->TabIndex = 12;
			// 
			// progressBar8
			// 
			this->progressBar8->Location = System::Drawing::Point(202, 213);
			this->progressBar8->Name = L"progressBar8";
			this->progressBar8->Size = System::Drawing::Size(100, 23);
			this->progressBar8->TabIndex = 11;
			// 
			// progressBar9
			// 
			this->progressBar9->Location = System::Drawing::Point(202, 184);
			this->progressBar9->Name = L"progressBar9";
			this->progressBar9->Size = System::Drawing::Size(100, 23);
			this->progressBar9->TabIndex = 10;
			// 
			// progressBar10
			// 
			this->progressBar10->Location = System::Drawing::Point(202, 155);
			this->progressBar10->Name = L"progressBar10";
			this->progressBar10->Size = System::Drawing::Size(100, 23);
			this->progressBar10->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"0";
			this->label3->Click += gcnew System::EventHandler(this, &PruebaConcepto::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 184);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(31, 213);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(31, 242);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"3";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(31, 271);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"4";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(183, 155);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"5";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(183, 184);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"6";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(183, 213);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"7";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(183, 242);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L"8";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(183, 271);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 23;
			this->label12->Text = L"9";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(118, 130);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(108, 13);
			this->label13->TabIndex = 24;
			this->label13->Text = L"GLOVE REGIONS";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(427, 130);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(67, 13);
			this->label14->TabIndex = 25;
			this->label14->Text = L"IMU DATA";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(350, 223);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(46, 13);
			this->label15->TabIndex = 26;
			this->label15->Text = L"GYRO:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(350, 194);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(50, 13);
			this->label16->TabIndex = 27;
			this->label16->Text = L"ACCEL:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(350, 252);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(47, 13);
			this->label17->TabIndex = 28;
			this->label17->Text = L"MAGN:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(416, 166);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(15, 13);
			this->label18->TabIndex = 29;
			this->label18->Text = L"X";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(478, 166);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(15, 13);
			this->label19->TabIndex = 30;
			this->label19->Text = L"Y";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(542, 166);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(15, 13);
			this->label20->TabIndex = 31;
			this->label20->Text = L"Z";
			// 
			// ACCELX
			// 
			this->ACCELX->AutoSize = true;
			this->ACCELX->Location = System::Drawing::Point(417, 194);
			this->ACCELX->Name = L"ACCELX";
			this->ACCELX->Size = System::Drawing::Size(13, 13);
			this->ACCELX->TabIndex = 32;
			this->ACCELX->Text = L"0";
			// 
			// ACCELY
			// 
			this->ACCELY->AutoSize = true;
			this->ACCELY->Location = System::Drawing::Point(479, 194);
			this->ACCELY->Name = L"ACCELY";
			this->ACCELY->Size = System::Drawing::Size(13, 13);
			this->ACCELY->TabIndex = 33;
			this->ACCELY->Text = L"0";
			// 
			// ACCELZ
			// 
			this->ACCELZ->AutoSize = true;
			this->ACCELZ->Location = System::Drawing::Point(543, 194);
			this->ACCELZ->Name = L"ACCELZ";
			this->ACCELZ->Size = System::Drawing::Size(13, 13);
			this->ACCELZ->TabIndex = 34;
			this->ACCELZ->Text = L"0";
			// 
			// GYROZ
			// 
			this->GYROZ->AutoSize = true;
			this->GYROZ->Location = System::Drawing::Point(543, 223);
			this->GYROZ->Name = L"GYROZ";
			this->GYROZ->Size = System::Drawing::Size(13, 13);
			this->GYROZ->TabIndex = 37;
			this->GYROZ->Text = L"0";
			// 
			// GYROY
			// 
			this->GYROY->AutoSize = true;
			this->GYROY->Location = System::Drawing::Point(479, 223);
			this->GYROY->Name = L"GYROY";
			this->GYROY->Size = System::Drawing::Size(13, 13);
			this->GYROY->TabIndex = 36;
			this->GYROY->Text = L"0";
			// 
			// GYROX
			// 
			this->GYROX->AutoSize = true;
			this->GYROX->Location = System::Drawing::Point(417, 223);
			this->GYROX->Name = L"GYROX";
			this->GYROX->Size = System::Drawing::Size(13, 13);
			this->GYROX->TabIndex = 35;
			this->GYROX->Text = L"0";
			// 
			// MAGNZ
			// 
			this->MAGNZ->AutoSize = true;
			this->MAGNZ->Location = System::Drawing::Point(543, 253);
			this->MAGNZ->Name = L"MAGNZ";
			this->MAGNZ->Size = System::Drawing::Size(13, 13);
			this->MAGNZ->TabIndex = 40;
			this->MAGNZ->Text = L"0";
			// 
			// MAGNY
			// 
			this->MAGNY->AutoSize = true;
			this->MAGNY->Location = System::Drawing::Point(479, 253);
			this->MAGNY->Name = L"MAGNY";
			this->MAGNY->Size = System::Drawing::Size(13, 13);
			this->MAGNY->TabIndex = 39;
			this->MAGNY->Text = L"0";
			// 
			// MAGNX
			// 
			this->MAGNX->AutoSize = true;
			this->MAGNX->Location = System::Drawing::Point(417, 253);
			this->MAGNX->Name = L"MAGNX";
			this->MAGNX->Size = System::Drawing::Size(13, 13);
			this->MAGNX->TabIndex = 38;
			this->MAGNX->Text = L"0";
			// 
			// PruebaConcepto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 317);
			this->Controls->Add(this->MAGNZ);
			this->Controls->Add(this->MAGNY);
			this->Controls->Add(this->MAGNX);
			this->Controls->Add(this->GYROZ);
			this->Controls->Add(this->GYROY);
			this->Controls->Add(this->GYROX);
			this->Controls->Add(this->ACCELZ);
			this->Controls->Add(this->ACCELY);
			this->Controls->Add(this->ACCELX);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->progressBar6);
			this->Controls->Add(this->progressBar7);
			this->Controls->Add(this->progressBar8);
			this->Controls->Add(this->progressBar9);
			this->Controls->Add(this->progressBar10);
			this->Controls->Add(this->progressBar5);
			this->Controls->Add(this->progressBar4);
			this->Controls->Add(this->progressBar3);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->selectGloveButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->glovesCombobox);
			this->Name = L"PruebaConcepto";
			this->Text = L"PruebaConcepto";
			this->Load += gcnew System::EventHandler(this, &PruebaConcepto::PruebaConcepto_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PruebaConcepto_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void selectGloveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	ACCELX->Text = "123";
}
};
}
