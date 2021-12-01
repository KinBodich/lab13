#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	double xe[1000];
	double ye[1000];
	double yg[1000];
	double c[50];

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label1;

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(878, 397);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->numericUpDown4);
			this->groupBox1->Controls->Add(this->numericUpDown3);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 415);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(878, 216);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметри графіків";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(660, 125);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 56);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Вихід";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(660, 52);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 56);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Побудувати графіки";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(514, 163);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(46, 22);
			this->numericUpDown4->TabIndex = 3;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(514, 125);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(46, 22);
			this->numericUpDown3->TabIndex = 3;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(514, 89);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(46, 22);
			this->numericUpDown2->TabIndex = 3;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(514, 56);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(46, 22);
			this->numericUpDown1->TabIndex = 3;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(50, 162);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(49, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(200, 88);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(49, 22);
			this->textBox2->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(129, 55);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(49, 22);
			this->textBox4->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(40, 55);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(49, 22);
			this->textBox3->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(95, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 17);
			this->label3->TabIndex = 1;
			this->label3->Text = L"b =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 165);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 17);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Ne =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"a =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 127);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(271, 17);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Введіть к-сть експерементальних точок";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(188, 17);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Введіть к-сть гармонік Ng =";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(342, 165);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(166, 17);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Товщина лінії суми ряду";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(360, 127);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(148, 17);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Товщина ліній гратки";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(332, 91);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(176, 17);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Товщина осей координат";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(358, 58);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 17);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Товщина лінії графіка";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(332, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(246, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Оберіть, при потребі, інші значення";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(902, 643);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"Розкладення періодичної ф-ції в ряд фур\'є";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
	
		double kx, ky, zx, zy;
		double al, bl, tp;
		int ne, ngr, ng;
		double minYg, maxYg, maxx, minx, maxy, miny;
		double krx, kry, xx, yy, gx, gy;
		int krokX, krokY, l;

#pragma endregion
	
		double f(double x)
		{
			return Math::Sin((5 / 2) * Math::Cos(x));
		}
		
		void TabF(double xe[1000], double ye[1000])
		{
			double h;
			h = (bl - al) / ne;
			xe[0] = al;
			for (int i = 0; i <= ne - 1; i++)
			{
				ye[i] = f(xe[i]);
				xe[i + 1] = xe[i] + h;
			}
		}

		void Furje(double xe[1000], double ye[1000], int ne, double yg[1000], double c[50], double tp)
		{
			double a[50];
			double b[50];
			double w, kom, s, g, d;

			ng = Convert::ToInt32(textBox2->Text);
			al = Convert::ToDouble(textBox3->Text);
			bl = Convert::ToDouble(textBox4->Text);
			ne = Convert::ToInt32(textBox1->Text);

			tp = bl - al;
			w = 2 * Math::PI / tp;
			for (int k = 1; k <= ne; k++)
			{
				kom = k * w;
				g = 0;
				d = 0;

				for (int i = 1; i <= ne - 1; i++)
				{
					s = kom * xe[i];
					g += ye[i] * Math::Cos(s);
					d += ye[i] * Math::Sin(s);
				}

				a[k] = 2 * g / ne;
				b[k] = 2 * d / 2;
				c[k] = Math::Sqrt(a[k] * a[k] + b[k] * b[k]);
			}

			a[0] = 0;
			for (int i = 1; i <= ne - 1; i++)
			{
				a[0] += ye[i];
			}

			a[0] /= ne;

			for (int i = 0; i <= ne - 1; i++)
			{
				s = 0;
				d = xe[i] * w;

				for (int k = 1; k <= ng; k++)
				{
					kom = k * d;
					s += b[k] * Math::Sin(kom) + a[k] * Math::Cos(kom);
				}

				yg[i] = a[0] + s;
			}

			return;
		}

		void Garm(int ng, double c[50])
		{
			int i, krokXg, x;
			double maxC, kyc, w;
			
			Graphics^ g = pictureBox1->CreateGraphics();
			Pen^ pen1 = gcnew Pen(Color::Black, (float)(numericUpDown1->Value));
			Pen^ pen2 = gcnew Pen(Color::Blue, (float)(numericUpDown2->Value));
			Pen^ pen3 = gcnew Pen(Color::Silver, (float)(numericUpDown3->Value));
			Pen^ pen4 = gcnew Pen(Color::Green, (float)(numericUpDown4->Value));

			int pbHeight = pictureBox1->Height;
			int pbWidth = pictureBox1->Width;

			krokXg = (pbWidth - 2 * l) / ng;
			maxC = c[1];
			for (i = 2; i <= ng; i++)
				if (c[i] > maxC)
					maxC = c[i];
			
			kyc = (pbHeight / 2) / maxC;
			
			g->DrawLine(pen2, l, l + 20, l + 10, l + 10);
			g->DrawLine(pen2, l + 20, l + 20, l + 10, l + 10);
			g->DrawLine(pen2, l + 10, pbHeight - 50, pbWidth - 20, pbHeight - 50);
			g->DrawLine(pen2, l + 10, pbHeight - 50, l + 10, l + 10);
			g->DrawLine(pen2, pbWidth - 40, pbHeight - 60, pbWidth - 20, pbHeight - 50);
			g->DrawString("C", gcnew Drawing::Font("Times", 14), Brushes::Black, (float)l - 15, (float)l + 5);
			g->DrawString("W", gcnew Drawing::Font("Times", 14), Brushes::Black, (float)pbWidth - 60.0f, (float)pbHeight - 50.0f);

			x = krokXg + 20;
			w = 6.2831853 / (bl - al);
			for (i = 1; i <= ng; i++)
			{
				g->DrawLine(pen1, (int)x + 3, pbHeight - 50, x + 3, pbHeight - 50 - (int)(kyc * c[i]));
				String^ s = String::Format("{0:F3}", kyc * c[i]);
				g->DrawString(s, gcnew Drawing::Font("Times", 12), Brushes::Black, (float)x,
					(float)pbHeight - (float)(kyc * c[i]) - 70.0f);
				g->DrawEllipse(pen2, (int)x, pbHeight - (int)(kyc * c[i]) - 55, 5, 5);
				g->DrawString(Convert::ToString(i), gcnew Drawing::Font("Times", 12), Brushes::Black, (float)x - 5.0f, (float)pbHeight - 50.0f);
				x += krokXg;
			}

			x = krokXg + 19;
			String^ s = String::Format("W={0:F3}", w);
			g->DrawString(s, gcnew Drawing::Font("Times", 12), Brushes::Black, (float)x - 20.0f, (float)pbHeight - 35.0f);
			
			return;
		}

		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			Close();
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Pen^ pen1 = gcnew Pen(Color::Red, (float)(numericUpDown1->Value));
			Pen^ pen2 = gcnew Pen(Color::Blue, (float)(numericUpDown2->Value));
			Pen^ pen3 = gcnew Pen(Color::Silver, (float)(numericUpDown3->Value));
			Pen^ pen4 = gcnew Pen(Color::Green, (float)(numericUpDown4->Value));
			Graphics^ g = pictureBox1->CreateGraphics();

			al = Convert::ToDouble(textBox3->Text);
			bl = Convert::ToDouble(textBox4->Text);
			ne = Convert::ToInt32(textBox1->Text);
			ng = Convert::ToInt32(textBox2->Text);

			g->Clear(Color::White);
			l = 40;

			int pbHeight = pictureBox1->Height;
			int pbWidth = pictureBox1->Width;

			TabF(xe, ye);

			minx = xe[0];
			maxx = xe[ne - 1];
			miny = ye[0];
			maxy = ye[ne - 1];
			for (int i = 1; i <= ne; i++)
			{
				if (maxy < ye[i])
					maxy = ye[i];
				if (miny > ye[i])
					miny = ye[i];
			}

			kx = (pbWidth - 2 * l) / (maxx - minx);
			ky = (pbHeight - 2 * l) / (miny - maxy);
			zx = (pbWidth * minx - l * (maxx + minx)) / (minx - maxx);
			zy = (pbHeight * maxy - l * (miny + maxy)) / (maxy - miny);

			if (minx * maxx <= 0.0)
				gx = 0.0;
			if (minx * maxx > 0.0)
				gx = minx;
			if (minx * maxx > 0.0 && minx < 0.0)
				gx = maxx;
			if (miny * maxy <= 0.0)
				gy = 0.0;
			if (miny * maxy > 0.0 && miny > 0.0)
				gy = miny;
			if (miny * maxy > 0.0 && miny < 0.0)
				gy = maxy;

			krokX = (pbWidth - 2 * l) / 10;
			krokY = (pbHeight - 2 * l) / 9;

			for (int i = 1; i < 7; i++)
			{
				g->DrawLine(pen3, l, Math::Round(ky * gy + zy, 4) + i * krokY, pbWidth - l, Math::Round(ky * gy + zy, 4) + i * krokY);
				g->DrawLine(pen3, l, Math::Round(ky * gy + zy, 4) - i * krokY, pbWidth - l, Math::Round(ky * gy + zy, 4) - i * krokY);
			}

			for (int i = 1; i < 9; i++)
			{
				g->DrawLine(pen3, Math::Round(kx * gx + zx, 4) + i * krokX, l - 20, Math::Round(kx * gx + zx, 4) + i * krokX, pbHeight - l + 30);
				g->DrawLine(pen3, Math::Round(kx * gx + zx, 4) - i * krokX, l - 20, Math::Round(kx * gx + zx, 4) - i * krokX, pbHeight - l + 30);
			}

			xx = minx;
			yy = maxy;
			krx = (maxx - minx) / 10.0;
			kry = (maxy - miny) / 10.6;

			for (int i = 0; i < 12; i++)
			{
				g->DrawString(Convert::ToString(Math::Round(xx, 1)), gcnew Drawing::Font("Times", 8), Brushes::Black, l + 4 + i * krokX, Math::Round(ky * gy + zy, 4) - l + 40.0f);
				g->DrawString(Convert::ToString(Math::Round(yy, 1)), gcnew Drawing::Font("Times", 8), Brushes::Black, Math::Round(kx * gx + zx, 4) - l + 10.0f, (float)(l + i * krokY) - 24.0f);
				xx += krx;
				yy -= kry;
			}

			g->DrawLine(pen2, l, Math::Round(ky * gy + zy, 4), Math::Round(pbWidth - 10, 4), Math::Round(ky * gy + zy, 4)); // вісь У
			g->DrawLine(pen2, Math::Round(kx * gx + zx, 4), 10, Math::Round(kx * gx + zx, 4), Math::Round(pbHeight - 10, 4)); // вісь x

			for (int i = 1; i <= ne - 1; i++)
			{
				g->DrawLine(pen1, Math::Round(kx * xe[i - 1] + zx, 4), Math::Round(ky * ye[i - 1] + zy, 4), Math::Round(kx * xe[i] + zx, 4), Convert::ToInt32(Math::Round(ky * ye[i] + zy, 4)));
			}

			MessageBox::Show("Показати гармоніки ?");
			g->Clear(Color::White);
			Garm(ng, c); // виклик функції Garm
		}
};
}
