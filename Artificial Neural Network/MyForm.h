#pragma once
#include <iostream>
#include <cliext/vector>
#include "Dot.h"
#include "Line.h"
#include "Dott.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace cliext;

	
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::RadioButton^ blueButton;
	private: System::Windows::Forms::RadioButton^ redButton;
	private: System::Windows::Forms::Button^ btnFindLine;
	private: System::Windows::Forms::Button^ btnClearForm;
	private: System::Windows::Forms::Button^ btnDeltaRule;
	private: System::Windows::Forms::Button^ btnMultiCategory;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::RadioButton^ singleCategory;
	private: System::Windows::Forms::RadioButton^ multiCategory;
	private: System::Windows::Forms::Button^ btnFindContinuous;

	private: System::Windows::Forms::TrackBar^ trackBar2;

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
			this->blueButton = (gcnew System::Windows::Forms::RadioButton());
			this->redButton = (gcnew System::Windows::Forms::RadioButton());
			this->btnFindLine = (gcnew System::Windows::Forms::Button());
			this->btnClearForm = (gcnew System::Windows::Forms::Button());
			this->btnDeltaRule = (gcnew System::Windows::Forms::Button());
			this->btnMultiCategory = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->singleCategory = (gcnew System::Windows::Forms::RadioButton());
			this->multiCategory = (gcnew System::Windows::Forms::RadioButton());
			this->btnFindContinuous = (gcnew System::Windows::Forms::Button());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(14, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(400, 300);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			// 
			// blueButton
			// 
			this->blueButton->AutoSize = true;
			this->blueButton->Location = System::Drawing::Point(440, 49);
			this->blueButton->Name = L"blueButton";
			this->blueButton->Size = System::Drawing::Size(46, 17);
			this->blueButton->TabIndex = 1;
			this->blueButton->Text = L"Blue";
			this->blueButton->UseVisualStyleBackColor = true;
			this->blueButton->Visible = false;
			// 
			// redButton
			// 
			this->redButton->AutoSize = true;
			this->redButton->Location = System::Drawing::Point(498, 48);
			this->redButton->Name = L"redButton";
			this->redButton->Size = System::Drawing::Size(45, 17);
			this->redButton->TabIndex = 2;
			this->redButton->Text = L"Red";
			this->redButton->UseVisualStyleBackColor = true;
			this->redButton->Visible = false;
			// 
			// btnFindLine
			// 
			this->btnFindLine->Location = System::Drawing::Point(440, 86);
			this->btnFindLine->Name = L"btnFindLine";
			this->btnFindLine->Size = System::Drawing::Size(86, 29);
			this->btnFindLine->TabIndex = 3;
			this->btnFindLine->Text = L"Find Line";
			this->btnFindLine->UseVisualStyleBackColor = true;
			this->btnFindLine->Visible = false;
			this->btnFindLine->Click += gcnew System::EventHandler(this, &MyForm::btnFindLine_Click);
			// 
			// btnClearForm
			// 
			this->btnClearForm->Location = System::Drawing::Point(529, 86);
			this->btnClearForm->Name = L"btnClearForm";
			this->btnClearForm->Size = System::Drawing::Size(100, 29);
			this->btnClearForm->TabIndex = 4;
			this->btnClearForm->Text = L"Clear Form";
			this->btnClearForm->UseVisualStyleBackColor = true;
			this->btnClearForm->Visible = false;
			this->btnClearForm->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// btnDeltaRule
			// 
			this->btnDeltaRule->Location = System::Drawing::Point(440, 121);
			this->btnDeltaRule->Name = L"btnDeltaRule";
			this->btnDeltaRule->Size = System::Drawing::Size(86, 30);
			this->btnDeltaRule->TabIndex = 5;
			this->btnDeltaRule->Text = L"Delta Rule";
			this->btnDeltaRule->UseVisualStyleBackColor = true;
			this->btnDeltaRule->Visible = false;
			this->btnDeltaRule->Click += gcnew System::EventHandler(this, &MyForm::btnDeltaRule_Click);
			// 
			// btnMultiCategory
			// 
			this->btnMultiCategory->Location = System::Drawing::Point(564, 256);
			this->btnMultiCategory->Name = L"btnMultiCategory";
			this->btnMultiCategory->Size = System::Drawing::Size(89, 53);
			this->btnMultiCategory->TabIndex = 6;
			this->btnMultiCategory->Text = L"Find MultiCategory Line";
			this->btnMultiCategory->UseVisualStyleBackColor = true;
			this->btnMultiCategory->Visible = false;
			this->btnMultiCategory->Click += gcnew System::EventHandler(this, &MyForm::btnMultiCategory_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"3", L"4", L"5", L"6" });
			this->comboBox1->Location = System::Drawing::Point(437, 245);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->Visible = false;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(437, 288);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 8;
			this->comboBox2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(434, 224);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Select class number:";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(434, 271);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Select class:";
			this->label4->Visible = false;
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(434, 160);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(104, 45);
			this->trackBar1->TabIndex = 12;
			this->trackBar1->Visible = false;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			this->trackBar1->RightToLeftChanged += gcnew System::EventHandler(this, &MyForm::trackBar1_RightToLeftChanged);
			// 
			// singleCategory
			// 
			this->singleCategory->AutoSize = true;
			this->singleCategory->Location = System::Drawing::Point(438, 12);
			this->singleCategory->Name = L"singleCategory";
			this->singleCategory->Size = System::Drawing::Size(96, 17);
			this->singleCategory->TabIndex = 13;
			this->singleCategory->Text = L"SingleCategory";
			this->singleCategory->UseVisualStyleBackColor = true;
			this->singleCategory->CheckedChanged += gcnew System::EventHandler(this, &MyForm::singleCategory_CheckedChanged);
			// 
			// multiCategory
			// 
			this->multiCategory->AutoSize = true;
			this->multiCategory->Location = System::Drawing::Point(537, 12);
			this->multiCategory->Name = L"multiCategory";
			this->multiCategory->Size = System::Drawing::Size(88, 17);
			this->multiCategory->TabIndex = 14;
			this->multiCategory->Text = L"Multicategory";
			this->multiCategory->UseVisualStyleBackColor = true;
			this->multiCategory->CheckedChanged += gcnew System::EventHandler(this, &MyForm::multiCategory_CheckedChanged);
			// 
			// btnFindContinuous
			// 
			this->btnFindContinuous->Location = System::Drawing::Point(564, 316);
			this->btnFindContinuous->Name = L"btnFindContinuous";
			this->btnFindContinuous->Size = System::Drawing::Size(86, 50);
			this->btnFindContinuous->TabIndex = 15;
			this->btnFindContinuous->Text = L"Find Continiuous ";
			this->btnFindContinuous->UseVisualStyleBackColor = true;
			this->btnFindContinuous->Visible = false;
			this->btnFindContinuous->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(437, 321);
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(104, 45);
			this->trackBar2->TabIndex = 16;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar2_Scroll);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(662, 449);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->btnFindContinuous);
			this->Controls->Add(this->multiCategory);
			this->Controls->Add(this->singleCategory);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->btnMultiCategory);
			this->Controls->Add(this->btnDeltaRule);
			this->Controls->Add(this->btnClearForm);
			this->Controls->Add(this->btnFindLine);
			this->Controls->Add(this->redButton);
			this->Controls->Add(this->blueButton);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		int sizeX = pictureBox1->Size.Width;
		int sizeY = pictureBox1->Size.Height;

		int centerX = sizeX / 2;
		int centerY = sizeY / 2;
		// Draw the coordinate plane
		Pen^ pen = gcnew Pen(Color::Black);
		e->Graphics->DrawLine(pen, Point(0, sizeY / 2), Point(sizeX, sizeY / 2));
		e->Graphics->DrawLine(pen, Point(sizeX / 2, 0), Point(sizeX / 2, sizeY));

		if (dots.size() > 0) { // draw dots after picturebox.refresh()
			for (int i = 0; i < dots.size(); i++) {
				if (dots.at(i)->getD() == 1) {
					e->Graphics->DrawEllipse(Pens::Red, dots.at(i)->getX() + centerX, dots.at(i)->getY() * (-1) + centerY, 3, 3);
				}
				if (dots.at(i)->getD() == -1) {
					e->Graphics->DrawEllipse(Pens::Blue, dots.at(i)->getX() + centerX, dots.at(i)->getY() * (-1) + centerY, 3, 3);
				}
			}
			
			int a = sizeY / 2 - ((line->getA()) * (sizeX / 2) - line->getC()) / line->getB();
			int b = sizeY / 2 - ((line->getA()) * (-sizeX / 2) - line->getC()) / line->getB();
			e->Graphics->DrawLine(Pens::Black, Point(0, a), Point(sizeX, b));
		}
		
		int pointSize = pointVector.size();
		if (pointSize > 0) {
			for (int i = 0; i < pointSize; i++) {
				e->Graphics->DrawEllipse(Pens::Blue, pointVector.at(i)->getX() + centerX,
					pointVector.at(i)->getY() * (-1) + centerY, 3, 3);
			}

			int lineSize = lineVector.size();
			for (int i = 0; i < lineSize; i++) {
				int a = sizeY / 2 - ((lineVector.at(i)->getA()) * (sizeX / 2) -
						lineVector.at(i)->getC()) / lineVector.at(i)->getB();

				int b = sizeY / 2 - ((lineVector.at(i)->getA()) * (-sizeX / 2) -
						lineVector.at(i)->getC()) / lineVector.at(i)->getB();

				e->Graphics->DrawLine(Pens::Black, Point(0, a), Point(sizeX, b));
			}
		}

	}
	vector<Dott^> pointVector;
	vector<Dott^> dotVector;
	Dot^ dot = gcnew Dot();
	Line^ line = gcnew Line();
	vector<Line^> lineVector;
	vector<Dot^> dots;
	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		
		int x = e->X;
		int y = e->Y;
		Dot^ newPoint = gcnew Dot();
		Line^ newLine = gcnew Line();
		int originX= (pictureBox1->Size.Width) / 2;
		int originY= (pictureBox1->Size.Height) / 2;
		Dott^ points = gcnew Dott();
		if (redButton->Checked) {
			newPoint->setX(x - originX);
			newPoint->setY(originY - y);
			Graphics^ g = pictureBox1->CreateGraphics();
			g->DrawEllipse(Pens::Red, x, y, 3, 3);
			newPoint->setdD(1);
			dots.push_back(newPoint);
		}
		else if (blueButton->Checked) {
			newPoint->setX(x - originX);
			newPoint->setY(originY - y);
			Graphics^ g = pictureBox1->CreateGraphics();
			g->DrawEllipse(Pens::Blue, x, y, 3, 3);
			newPoint->setdD(-1);
			dots.push_back(newPoint);
		}
		else {
			System::String^ numberOfClass1 = comboBox2->Items->Count.ToString();
			int numberOfClass = int::Parse(numberOfClass1);
			System::String^ classNumber1 = comboBox2->SelectedItem->ToString();
			int classNumber = int::Parse(classNumber1);

			points->setX(x - originX);
			points->setY(originY - y);
			Graphics^ g = pictureBox1->CreateGraphics();
			g->DrawEllipse(Pens::Blue, x, y, 3, 3);
			points->setD(classNumber, numberOfClass);
			pointVector.push_back(points);
		}
	}

private: System::Void btnFindLine_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int sign;
	long double net;
	double c = 1.0;
	int dotsSize = dots.size();
	int counter = 0;
		while(counter < dotsSize) {
			counter = 0;
			for (int i = 0; i < dotsSize; i++) {
				net = dots.at(i)->getX() * line->getA()+
					  dots.at(i)->getY() * line->getB()+
					  dots.at(i)->getZ() * line->getC();
				
				if (net > 0)
					sign = 1;
				else
					sign = -1;

				line->setA(line->getA() + dots.at(i)->getX() * c * (dots.at(i)->getD() - sign));
				line->setB(line->getB() + dots.at(i)->getY() * c * (dots.at(i)->getD() - sign));
				line->setC(int(line->getC() + dots.at(i)->getZ() * c * (dots.at(i)->getD() - sign)));

				if (dots.at(i)->getD() - sign == 0) {
					counter++;
				}
			}
			pictureBox1->Refresh();
		}
		MessageBox::Show("Done!");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	dots.clear();
	pointVector.clear();
	line->setA(0);
	line->setB(1);
	line->setC(0);
	for (int i = 0; i < lineVector.size(); i++) {
		lineVector.at(i)->setA(0);
		lineVector.at(i)->setB(1);
		lineVector.at(i)->setB(0);
	}
	pictureBox1->Refresh();
}
private: System::Void btnDeltaRule_Click(System::Object^ sender, System::EventArgs^ e) {

	double net;
	double c = 1.0;
	float fNet;
	float fNetDerivation;
	double error=1;
	double epsilon = 0.5;
	int dotsSize = dots.size();
	double sumx = 0, sumy = 0;

	for (int i = 0; i < dotsSize; i++) { // ortalama
		sumx += dots.at(i)->getX();
		sumy += dots.at(i)->getY();
	}
	double avaragex = sumx / dotsSize;
	double avaragey = sumy / dotsSize;
	sumx = 0;
	sumy = 0;

	for (int i = 0; i < dotsSize; i++) { // sapma
		sumx += pow((dots.at(i)->getX() - avaragex), 2);
		sumy += pow((dots.at(i)->getY() - avaragey), 2);
	}
	
	double tempx = 1 / (double(dotsSize) - 1);
	double tempy = 1 / (double(dotsSize) - 1);
	double xSapma = sqrt( tempx * sumx);
	double ySapma = sqrt( tempy * sumy);

	for (int i = 0; i < dotsSize; i++){
		dots.at(i)->setX((dots.at(i)->getX() - avaragex) / xSapma);
		dots.at(i)->setY((dots.at(i)->getY() - avaragey) / ySapma);
	}
		
	while (error > epsilon) {
		error = 0;
		for (int i = 0; i < dotsSize; i++) {
			net =dots.at(i)->getX() * line->getA() +
						 dots.at(i)->getY() * line->getB() +
						 dots.at(i)->getZ() * line->getC();
			float expr = exp(-net);
			fNet = (2 / (1 + expr) ) - 1;
			fNetDerivation = (1 - pow(fNet, 2)) / 2;

			line->setA(line->getA() + c * (dots.at(i)->getD() - fNet) * fNetDerivation * dots.at(i)->getX());
			line->setB(line->getB() + c * (dots.at(i)->getD() - fNet) * fNetDerivation * dots.at(i)->getY());
			line->setC(line->getC() + c * (dots.at(i)->getD() - fNet) * fNetDerivation * dots.at(i)->getZ());

			error = error + pow((dots.at(i)->getD() - fNet), 2) / 2;
		}
		
		pictureBox1->Refresh();
	}	
	MessageBox::Show("Done!");
	trackBar1->Visible = 1;
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	comboBox2->Visible = true;
	label4->Visible = true;
	comboBox1->Enabled = false;
	System::String^ classCount = comboBox1->SelectedItem->ToString();
	int numberOfClass = int::Parse(classCount);
	for (int i = 0; i < numberOfClass ; i++) {
		comboBox2->Items->Add((i+1));
	}
}	
private: System::Void btnMultiCategory_Click(System::Object^ sender, System::EventArgs^ e) {
	
	System::String^ numberOfClass1 = comboBox2->Items->Count.ToString();
	int numberOfClass = int::Parse(numberOfClass1);
	
	for (int i = 0; i < numberOfClass; i++) {
		Line^ newLine = gcnew Line();
		line->setA(5);
		line->setB(5);
		line->setC(5);
		lineVector.push_back(newLine);
	}	
	int lineSize = numberOfClass;
	int net[6], cntr = 0;
	double c = 1.0;
	int counter = 0;
	
	do {
		counter = 0;
		cntr = 0;
		while (cntr < pointVector.size()) {

			for (int i = 0; i < lineSize; i++) {
				net[i] = lineVector.at(i)->getA() * pointVector.at(cntr)->getX() +
					lineVector.at(i)->getB() * pointVector.at(cntr)->getY() +
					lineVector.at(i)->getC() * pointVector.at(cntr)->getZ();
			}

			for (int i = 0; i < lineSize; i++) {
				if (net[i] < 0)
					net[i] = -1;
				else
					net[i] = 1;
			}
			for (int i = 0; i < lineSize; i++) {
				if (net[i] != pointVector.at(cntr)->getD()[i]){

					lineVector.at(i)->setA(lineVector.at(i)->getA() +
						(c) * (pointVector.at(cntr)->getD()[i] - net[i]) * pointVector.at(cntr)->getX());

					lineVector.at(i)->setB(lineVector.at(i)->getB() +
						(c) * (pointVector.at(cntr)->getD()[i] - net[i]) * pointVector.at(cntr)->getY());

					lineVector.at(i)->setC(int(lineVector.at(i)->getC() +
						(c) * (pointVector.at(cntr)->getD()[i] - net[i]) * pointVector.at(cntr)->getZ()));
					counter++;
				}
			}
			cntr++;
			pictureBox1->Refresh();
		}
	} while (counter != 0);
}
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < dots.size(); i++) {
		dots.at(i)->setX(dots.at(i)->getX() * 5);
		dots.at(i)->setY(dots.at(i)->getY() * 5);
	}
	pictureBox1->Refresh();
}
private: System::Void trackBar1_RightToLeftChanged(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < dots.size(); i++) {
		dots.at(i)->setX(dots.at(i)->getX() / 5);
		dots.at(i)->setY(dots.at(i)->getY() / 5);
	}
	pictureBox1->Refresh();
}
private: System::Void singleCategory_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	blueButton->Visible = 1;
	redButton->Visible = 1;
	btnClearForm->Visible = 1;
	btnFindLine->Visible = 1;
	btnDeltaRule->Visible = 1;
	trackBar1->Visible = 1;
	btnMultiCategory->Visible = 0;
	comboBox1->Visible = 0;
	label3->Visible = 0;

}
private: System::Void multiCategory_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	btnMultiCategory->Visible = 1;
	comboBox1->Visible = 1;
	label3->Visible = 1;
	btnFindContinuous->Visible = 1;

	blueButton->Visible = 0;
	redButton->Visible = 0;
	btnClearForm->Visible = 0;
	btnFindLine->Visible = 0;
	btnDeltaRule->Visible = 0;
	
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	System::String^ numberOfClass1 = comboBox2->Items->Count.ToString();
	int numberOfClass = int::Parse(numberOfClass1);
	double dotsSize = pointVector.size();
	for (int i = 0; i < numberOfClass; i++) {
		Line^ newLine = gcnew Line();
		line->setA(5);
		line->setB(5);
		line->setC(5);
		lineVector.push_back(newLine);
	}
	double sumx = 0, sumy = 0;

	for (int i = 0; i < dotsSize; i++) { // ortalama
		sumx += pointVector.at(i)->getX();
		sumy += pointVector.at(i)->getY();
	}
	double avaragex = sumx / dotsSize;
	double avaragey = sumy / dotsSize;
	sumx = 0;
	sumy = 0;

	for (int i = 0; i < dotsSize; i++) { // sapma
		sumx += pow((pointVector.at(i)->getX() - avaragex), 2);
		sumy += pow((pointVector.at(i)->getY() - avaragey), 2);
	}

	double tempx = 1 / (double(dotsSize) - 1);
	double tempy = 1 / (double(dotsSize) - 1);
	double xSapma = sqrt(tempx * sumx);
	double ySapma = sqrt(tempy * sumy);

	for (int i = 0; i < dotsSize; i++) {
		pointVector.at(i)->setX((pointVector.at(i)->getX() - avaragex) / xSapma);
		pointVector.at(i)->setY((pointVector.at(i)->getY() - avaragey) / ySapma);
	}

	int lineSize = numberOfClass;
	double net=0;
	int  cntr = 0, flag=0;
	double c = 1.0;
	int counter = 0;
	double fNet, fNetDerivation;
	double epsilon = 0.1;
	double error[6];
	int pointSize = pointVector.size();
	for (int i = 0; i < lineSize; i++)
		error[i] = i+1;
	do {
		counter = 0;
		cntr = 0;

		while (cntr < pointSize) {
			for (int i = 0; i < lineSize; i++) {
				net = lineVector.at(i)->getA() * pointVector.at(cntr)->getX() +
						lineVector.at(i)->getB() * pointVector.at(cntr)->getY() +
						lineVector.at(i)->getC() * pointVector.at(cntr)->getZ();

				double expr = exp(-net);
				fNet = (2 / (1 + expr)) - 1;
				fNetDerivation = (1 - pow(fNet, 2)) / 2;
		
					lineVector.at(i)->setA(lineVector.at(i)->getA() +
						(c) * (pointVector.at(cntr)->getD()[i] - fNet) * fNetDerivation * pointVector.at(cntr)->getX());

					lineVector.at(i)->setB(lineVector.at(i)->getB() +
						(c) * (pointVector.at(cntr)->getD()[i] - fNet) * fNetDerivation * pointVector.at(cntr)->getY());

					lineVector.at(i)->setC(double(lineVector.at(i)->getC() +
						(c) * (pointVector.at(cntr)->getD()[i] - fNet) * fNetDerivation * pointVector.at(cntr)->getZ()));
					error[i] = error[i] + pow((pointVector.at(cntr)->getD()[i] - fNet), 2) / 2;
				
			}
			cntr++;
			pictureBox1->Refresh();
		}

		for (int i = 0; i < lineSize; i++) {
			if (error[i] < epsilon)
				counter++;
			error[i] = 0;
		}
		
	} while (counter < lineSize);
}
private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < pointVector.size(); i++) {
		pointVector.at(i)->setX(pointVector.at(i)->getX() * 2);
		pointVector.at(i)->setY(pointVector.at(i)->getY() * 2);
	}
	for (int i = 0; i < lineVector.size(); i++) {
		lineVector.at(i)->setA(lineVector.at(i)->getA() * 2);
		lineVector.at(i)->setB(lineVector.at(i)->getB() * 2);
		lineVector.at(i)->setC(lineVector.at(i)->getC() * 2);
	}
	pictureBox1->Refresh();
}
};
}
