#pragma once
#include <fstream>
#include <string>
#include <ctime> 
#include <cstdlib>
#include <algorithm> 
#include <vector>
namespace millionaire {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
		Button^ correct;
		String^ correctAnswer;
		int cena;
	private: System::Windows::Forms::Button^ button5050;
	private: System::Windows::Forms::Button^ buttonCall;
		   int total = 0;
		   bool is5050Used = false;
		   bool isCallUsed = false;
	public:
		Game(void)
		{
			InitializeComponent();
			read("test.txt");
			//
			//TODO: добавьте код конструктора
			//
			Slide = 0;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonD;
	protected:
	private: System::Windows::Forms::Button^ buttonC;
	private: System::Windows::Forms::Button^ buttonB;
	private: System::Windows::Forms::Button^ buttonA;
	private: System::Windows::Forms::TextBox^ textBoxВопрос;


	private: System::Windows::Forms::Button^ buttonStart;
	private: System::Windows::Forms::PictureBox^ pictureBoxMoney;




	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::ImageList^ imageList2;

	private: List<String^>^ questions = gcnew List<String^>(); 
		   void read(string name)
		   {
			   ifstream file(name);
			   if (!file.is_open())
			   {
				   MessageBox::Show("ошибка открытия файла");
			   }
			   string line;
			   while (getline(file, line))
			   {
				   questions->Add(gcnew String(line.c_str()));
			   }
			   file.close();
		   }

	private: System::Void Question1() {

		if (questions->Count >= 6)
		{
			correctAnswer = questions[5];
			if (correctAnswer == "A")
			{
				correct = buttonA;
			}
			if (correctAnswer == "B")
			{
				correct = buttonB;
			}
			if (correctAnswer == "C")
			{
				correct = buttonC;
			}
			if (correctAnswer == "D")
			{
				correct = buttonD;
			}
			cena = 500;
			if (!is5050Used)
			{
				button5050->Visible = true;
			}
			if (!isCallUsed)
			{
				buttonCall->Visible = true;
			}
			pictureBoxMoney->Visible = true;
			pictureBoxMoney->Image = imageList2->Images[0];
			textBoxВопрос->Text = questions[0];
			buttonA->Text = questions[1];
			buttonB->Text = questions[2];
			buttonC->Text = questions[3];
			buttonD->Text = questions[4];
		}
		else {
			MessageBox::Show("ошибка");
		}
	}
	private: System::Void Question2() {

		if (questions->Count >= 12)
		{
			correctAnswer = questions[11];
			if (correctAnswer == "A")
			{
				correct = buttonA;
			}
			if (correctAnswer == "B")
			{
				correct = buttonB;
			}
			if (correctAnswer == "C")
			{
				correct = buttonC;
			}
			if (correctAnswer == "D")
			{
				correct = buttonD;
			}
			cena = 1000;
			if (!is5050Used)
			{
				button5050->Visible = true;
			}
			if (!isCallUsed)
			{
				buttonCall->Visible = true;
			}
			pictureBoxMoney->Visible = true;
			pictureBoxMoney->Image = imageList2->Images[1];
			textBoxВопрос->Text = questions[6];
			buttonA->Text = questions[7];
			buttonB->Text = questions[8];
			buttonC->Text = questions[9];
			buttonD->Text = questions[10];
		}
		else {
			MessageBox::Show("ошибка");
		}
	}
		   private: System::Void Question3() {

			   if (questions->Count >= 18)
			   {
				   correctAnswer = questions[17];
				   if (correctAnswer == "A")
				   {
					   correct = buttonA;
				   }
				   if (correctAnswer == "B")
				   {
					   correct = buttonB;
				   }
				   if (correctAnswer == "C")
				   {
					   correct = buttonC;
				   }
				   if (correctAnswer == "D")
				   {
					   correct = buttonD;
				   }
				   cena = 2000;
				   if (!is5050Used)
				   {
					   button5050->Visible = true;
				   }
				   if (!isCallUsed)
				   {
					   buttonCall->Visible = true;
				   }
				   pictureBoxMoney->Visible = true;
				   pictureBoxMoney->Image = imageList2->Images[2];
				   textBoxВопрос->Text = questions[12];
				   buttonA->Text = questions[13];
				   buttonB->Text = questions[14];
				   buttonC->Text = questions[15];
				   buttonD->Text = questions[16];
			   }
			   else {
				   MessageBox::Show("ошибка");
			   }
		   }
				  private: System::Void Question4() {

					  if (questions->Count >= 24)
					  {
						  correctAnswer = questions[23];
						  if (correctAnswer == "A")
						  {
							  correct = buttonA;
						  }
						  if (correctAnswer == "B")
						  {
							  correct = buttonB;
						  }
						  if (correctAnswer == "C")
						  {
							  correct = buttonC;
						  }
						  if (correctAnswer == "D")
						  {
							  correct = buttonD;
						  }
						  cena = 3000;
						  if (!is5050Used)
						  {
							  button5050->Visible = true;
						  }
						  if (!isCallUsed)
						  {
							  buttonCall->Visible = true;
						  }
						  pictureBoxMoney->Visible = true;
						  pictureBoxMoney->Image = imageList2->Images[3];
						  textBoxВопрос->Text = questions[18];
						  buttonA->Text = questions[19];
						  buttonB->Text = questions[20];
						  buttonC->Text = questions[21];
						  buttonD->Text = questions[22];
					  }
					  else {
						  MessageBox::Show("ошибка");
					  }
				  }
						 private: System::Void Question5() {

							 if (questions->Count >= 30)
							 {
								 correctAnswer = questions[29];
								 if (correctAnswer == "A")
								 {
									 correct = buttonA;
								 }
								 if (correctAnswer == "B")
								 {
									 correct = buttonB;
								 }
								 if (correctAnswer == "C")
								 {
									 correct = buttonC;
								 }
								 if (correctAnswer == "D")
								 {
									 correct = buttonD;
								 }
								 cena = 5000;
								 if (!is5050Used)
								 {
									 button5050->Visible = true;
								 }
								 if (!isCallUsed)
								 {
									 buttonCall->Visible = true;
								 }
								 pictureBoxMoney->Visible = true;
								 pictureBoxMoney->Image = imageList2->Images[4];
								 textBoxВопрос->Text = questions[24];
								 buttonA->Text = questions[25];
								 buttonB->Text = questions[26];
								 buttonC->Text = questions[27];
								 buttonD->Text = questions[28];
							 }
							 else {
								 MessageBox::Show("ошибка");
							 }
						 }
								private: System::Void Question6() {

									if (questions->Count >= 36)
									{
										correctAnswer = questions[35];
										if (correctAnswer == "A")
										{
											correct = buttonA;
										}
										if (correctAnswer == "B")
										{
											correct = buttonB;
										}
										if (correctAnswer == "C")
										{
											correct = buttonC;
										}
										if (correctAnswer == "D")
										{
											correct = buttonD;
										}
										cena = 10000;
										if (!is5050Used)
										{
											button5050->Visible = true;
										}
										if (!isCallUsed)
										{
											buttonCall->Visible = true;
										}
										pictureBoxMoney->Visible = true;
										pictureBoxMoney->Image = imageList2->Images[5];
										textBoxВопрос->Text = questions[30];
										buttonA->Text = questions[31];
										buttonB->Text = questions[32];
										buttonC->Text = questions[33];
										buttonD->Text = questions[34];
									}
									else {
										MessageBox::Show("ошибка");
									}
								}
									   private: System::Void Question7() {

										   if (questions->Count >= 42)
										   {
											   correctAnswer = questions[41];
											   if (correctAnswer == "A")
											   {
												   correct = buttonA;
											   }
											   if (correctAnswer == "B")
											   {
												   correct = buttonB;
											   }
											   if (correctAnswer == "C")
											   {
												   correct = buttonC;
											   }
											   if (correctAnswer == "D")
											   {
												   correct = buttonD;
											   }
											   cena = 15000;
											   if (!is5050Used)
											   {
												   button5050->Visible = true;
											   }
											   if (!isCallUsed)
											   {
												   buttonCall->Visible = true;
											   }
											   pictureBoxMoney->Visible = true;
											   pictureBoxMoney->Image = imageList2->Images[6];
											   textBoxВопрос->Text = questions[36];
											   buttonA->Text = questions[37];
											   buttonB->Text = questions[38];
											   buttonC->Text = questions[39];
											   buttonD->Text = questions[40];
										   }
										   else {
											   MessageBox::Show("ошибка");
										   }
									   }
											   private: System::Void Question8() {

												   if (questions->Count >= 48)
												   {
													   correctAnswer = questions[47];
													   if (correctAnswer == "A")
													   {
														   correct = buttonA;
													   }
													   if (correctAnswer == "B")
													   {
														   correct = buttonB;
													   }
													   if (correctAnswer == "C")
													   {
														   correct = buttonC;
													   }
													   if (correctAnswer == "D")
													   {
														   correct = buttonD;
													   }
													   cena = 25000;
													   if (!is5050Used)
													   {
														   button5050->Visible = true;
													   }
													   if (!isCallUsed)
													   {
														   buttonCall->Visible = true;
													   }
													   pictureBoxMoney->Visible = true;
													   pictureBoxMoney->Image = imageList2->Images[7];
													   textBoxВопрос->Text = questions[42];
													   buttonA->Text = questions[43];
													   buttonB->Text = questions[44];
													   buttonC->Text = questions[45];
													   buttonD->Text = questions[46];
												   }
												   else {
													   MessageBox::Show("ошибка");
												   }
											   }
													  private: System::Void Question9() {

														  if (questions->Count >= 54)
														  {
															  correctAnswer = questions[53];
															  if (correctAnswer == "A")
															  {
																  correct = buttonA;
															  }
															  if (correctAnswer == "B")
															  {
																  correct = buttonB;
															  }
															  if (correctAnswer == "C")
															  {
																  correct = buttonC;
															  }
															  if (correctAnswer == "D")
															  {
																  correct = buttonD;
															  }
															  cena = 50000;
															  if (!is5050Used)
															  {
																  button5050->Visible = true;
															  }
															  if (!isCallUsed)
															  {
																  buttonCall->Visible = true;
															  }
															  pictureBoxMoney->Visible = true;
															  pictureBoxMoney->Image = imageList2->Images[8];
															  textBoxВопрос->Text = questions[48];
															  buttonA->Text = questions[49];
															  buttonB->Text = questions[50];
															  buttonC->Text = questions[51];
															  buttonD->Text = questions[52];
														  }
														  else {
															  MessageBox::Show("ошибка");
														  }
													  }
															 private: System::Void Question10() {

																 if (questions->Count >= 60)
																 {
																	 correctAnswer = questions[59];
																	 if (correctAnswer == "A")
																	 {
																		 correct = buttonA;
																	 }
																	 if (correctAnswer == "B")
																	 {
																		 correct = buttonB;
																	 }
																	 if (correctAnswer == "C")
																	 {
																		 correct = buttonC;
																	 }
																	 if (correctAnswer == "D")
																	 {
																		 correct = buttonD;
																	 }
																	 cena = 100000;
																	 if (!is5050Used)
																	 {
																		 button5050->Visible = true;
																	 }
																	 if (!isCallUsed)
																	 {
																		 buttonCall->Visible = true;
																	 }
																	 pictureBoxMoney->Visible = true;
																	 pictureBoxMoney->Image = imageList2->Images[9];
																	 textBoxВопрос->Text = questions[54];
																	 buttonA->Text = questions[55];
																	 buttonB->Text = questions[56];
																	 buttonC->Text = questions[57];
																	 buttonD->Text = questions[58];
																 }
																 else {
																	 MessageBox::Show("ошибка");
																 }
															 }
																	private: System::Void Question11() {

																		if (questions->Count >= 66)
																		{
																			correctAnswer = questions[65];
																			if (correctAnswer == "A")
																			{
																				correct = buttonA;
																			}
																			if (correctAnswer == "B")
																			{
																				correct = buttonB;
																			}
																			if (correctAnswer == "C")
																			{
																				correct = buttonC;
																			}
																			if (correctAnswer == "D")
																			{
																				correct = buttonD;
																			}
																			cena = 200000;
																			if (!is5050Used)
																			{
																				button5050->Visible = true;
																			}
																			if (!isCallUsed)
																			{
																				buttonCall->Visible = true;
																			}
																			pictureBoxMoney->Visible = true;
																			pictureBoxMoney->Image = imageList2->Images[10];
																			textBoxВопрос->Text = questions[60];
																			buttonA->Text = questions[61];
																			buttonB->Text = questions[62];
																			buttonC->Text = questions[63];
																			buttonD->Text = questions[64];
																		}
																		else {
																			MessageBox::Show("ошибка");
																		}
																	}
																															private: System::Void Question12() {

																																if (questions->Count >= 72)
																																{
																																	correctAnswer = questions[71];
																																	if (correctAnswer == "A")
																																	{
																																		correct = buttonA;
																																	}
																																	if (correctAnswer == "B")
																																	{
																																		correct = buttonB;
																																	}
																																	if (correctAnswer == "C")
																																	{
																																		correct = buttonC;
																																	}
																																	if (correctAnswer == "D")
																																	{
																																		correct = buttonD;
																																	}
																																	cena = 400000;
																																	if (!is5050Used)
																																	{
																																		button5050->Visible = true;
																																	}
																																	if (!isCallUsed)
																																	{
																																		buttonCall->Visible = true;
																																	}
																																	pictureBoxMoney->Visible = true;
																																	pictureBoxMoney->Image = imageList2->Images[11];
																																	textBoxВопрос->Text = questions[66];
																																	buttonA->Text = questions[67];
																																	buttonB->Text = questions[68];
																																	buttonC->Text = questions[69];
																																	buttonD->Text = questions[70];
																																}
																																else {
																																	MessageBox::Show("ошибка");
																																}
																															}
																																   																									
					private: System::Void Question13() {

						if (questions->Count >= 78)
						{
							correctAnswer = questions[77];
							if (correctAnswer == "A")
							{
								correct = buttonA;
							}
							if (correctAnswer == "B")
							{
								correct = buttonB;
							}
							if (correctAnswer == "C")
							{
								correct = buttonC;
							}
							if (correctAnswer == "D")
							{
								correct = buttonD;
							}
							cena = 800000;
							if (!is5050Used)
							{
								button5050->Visible = true;
							}
							if (!isCallUsed)
							{
								buttonCall->Visible = true;
							}
							pictureBoxMoney->Visible = true;
							pictureBoxMoney->Image = imageList2->Images[12];
							textBoxВопрос->Text = questions[72];
							buttonA->Text = questions[73];
							buttonB->Text = questions[74];
							buttonC->Text = questions[75];
							buttonD->Text = questions[76];
						}
						else {
							MessageBox::Show("ошибка");
						}
					}
						   private: System::Void Question14() {

							   if (questions->Count >= 84)
							   {
								   correctAnswer = questions[83];
								   if (correctAnswer == "A")
								   {
									   correct = buttonA;
								   }
								   if (correctAnswer == "B")
								   {
									   correct = buttonB;
								   }
								   if (correctAnswer == "C")
								   {
									   correct = buttonC;
								   }
								   if (correctAnswer == "D")
								   {
									   correct = buttonD;
								   }
								   cena = 1500000;
								   if (!is5050Used)
								   {
									   button5050->Visible = true;
								   }
								   if (!isCallUsed)
								   {
									   buttonCall->Visible = true;
								   }
								   pictureBoxMoney->Visible = true;
								   pictureBoxMoney->Image = imageList2->Images[13];
								   textBoxВопрос->Text = questions[78];
								   buttonA->Text = questions[79];
								   buttonB->Text = questions[80];
								   buttonC->Text = questions[81];
								   buttonD->Text = questions[82];
							   }
							   else {
								   MessageBox::Show("ошибка");
							   }
						   }
								  private: System::Void Question15() {

									  if (questions->Count >= 90)
									  {
										  correctAnswer = questions[89];
										  if (correctAnswer == "A")
										  {
											  correct = buttonA;
										  }
										  if (correctAnswer == "B")
										  {
											  correct = buttonB;
										  }
										  if (correctAnswer == "C")
										  {
											  correct = buttonC;
										  }
										  if (correctAnswer == "D")
										  {
											  correct = buttonD;
										  }
										  cena = 3000000;
										  if (!is5050Used)
										  {
											  button5050->Visible = true;
										  }
										  if (!isCallUsed)
										  {
											  buttonCall->Visible = true;
										  }
										  
										  pictureBoxMoney->Visible = true;
										  pictureBoxMoney->Image = imageList2->Images[14];
										  textBoxВопрос->Text = questions[84];
										  buttonA->Text = questions[85];
										  buttonB->Text = questions[86];
										  buttonC->Text = questions[87];
										  buttonD->Text = questions[88];
									  }
									  else {
										  MessageBox::Show("ошибка");
									  }
								  }
										  private: System::Void Question16() {
											  MessageBox::Show("Игра окончена!" + "\nВы правильно ответили на все 15 вопросов" + "\nВаш общий выигрыш : " + total.ToString(), "", MessageBoxButtons::OK, MessageBoxIcon::Information);
											  Application::Exit();
										  }


		 Void updateTotal() 
		   {
			   total += cena; 
		   }

		  Void CloseGame() 
		  {
			  
			  Application::Exit();
		  }

		  Void nextSlide()
		  {
			  buttonA->Enabled = true;
			  buttonB->Enabled = true;
			  buttonC->Enabled = true;
			  buttonD->Enabled = true;
			  if (Slide == 1)
			  {
				  Question2();
				  Slide = 2;
				  if (!is5050Used && !isCallUsed)
			{
				button5050->Visible = true;
				buttonCall->Visible = true;
			}
			else if (!is5050Used)
			{
				button5050->Visible = true;
			}
			else if (!isCallUsed)
			{
				buttonCall->Visible = true;
			}
			  }
			  else if (Slide == 2)
			  {
				  Question3();
				  Slide = 3;
			  }
			  else if (Slide == 3)
			  {
				  Question4();
				  Slide = 4;
			  }
			  else if (Slide == 4)
			  {
				  Question5();
				  Slide = 5;
			  }
			  else if (Slide == 5)
			  {
				  Question6();
				  Slide = 6;
			  }
			  else if (Slide == 6)
			  {
				  Question7();
				  Slide = 7;
			  }
			  else if (Slide == 7)
			  {
				  Question8();
				  Slide = 8;
			  }
			  else if (Slide == 8)
			  {
				  Question9();
				  Slide = 9;
			  }
			  else if (Slide == 9)
			  {
				  Question10();
				  Slide = 10;
			  }
			  else if (Slide == 10)
			  {
				  Question11();
				  Slide = 11;
			  }
			  else if (Slide == 11)
			  {
				  Question12();
				  Slide = 12;
			  }
			  else if (Slide == 12)
			  {
				  Question13();
				  Slide = 13;
			  }
			  else if (Slide == 13)
			  {
			  Question14();
			  Slide = 14;
			  }
			  else if (Slide == 14)
			  {
			  Question15();
			  Slide = 15;
			  }
			  else if (Slide == 15)
			  {
			  Question16();
			  Slide = 16;
			  }
		  }
	private: System::ComponentModel::IContainer^ components;

		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		 private: int Slide;
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->buttonD = (gcnew System::Windows::Forms::Button());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonB = (gcnew System::Windows::Forms::Button());
			this->buttonA = (gcnew System::Windows::Forms::Button());
			this->textBoxВопрос = (gcnew System::Windows::Forms::TextBox());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->pictureBoxMoney = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button5050 = (gcnew System::Windows::Forms::Button());
			this->buttonCall = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxMoney))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonD
			// 
			this->buttonD->BackColor = System::Drawing::Color::Navy;
			this->buttonD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonD->ForeColor = System::Drawing::Color::Transparent;
			this->buttonD->Location = System::Drawing::Point(573, 514);
			this->buttonD->Name = L"buttonD";
			this->buttonD->Size = System::Drawing::Size(221, 42);
			this->buttonD->TabIndex = 10;
			this->buttonD->UseVisualStyleBackColor = false;
			this->buttonD->Click += gcnew System::EventHandler(this, &Game::buttonD_Click);
			// 
			// buttonC
			// 
			this->buttonC->BackColor = System::Drawing::Color::Navy;
			this->buttonC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonC->ForeColor = System::Drawing::Color::Transparent;
			this->buttonC->Location = System::Drawing::Point(234, 514);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(221, 42);
			this->buttonC->TabIndex = 9;
			this->buttonC->UseVisualStyleBackColor = false;
			this->buttonC->Click += gcnew System::EventHandler(this, &Game::buttonC_Click);
			// 
			// buttonB
			// 
			this->buttonB->BackColor = System::Drawing::Color::Navy;
			this->buttonB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonB->ForeColor = System::Drawing::Color::Transparent;
			this->buttonB->Location = System::Drawing::Point(573, 444);
			this->buttonB->Name = L"buttonB";
			this->buttonB->Size = System::Drawing::Size(221, 42);
			this->buttonB->TabIndex = 8;
			this->buttonB->UseVisualStyleBackColor = false;
			this->buttonB->Click += gcnew System::EventHandler(this, &Game::buttonB_Click);
			// 
			// buttonA
			// 
			this->buttonA->BackColor = System::Drawing::Color::Navy;
			this->buttonA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonA->ForeColor = System::Drawing::Color::Transparent;
			this->buttonA->Location = System::Drawing::Point(234, 444);
			this->buttonA->Name = L"buttonA";
			this->buttonA->Size = System::Drawing::Size(221, 42);
			this->buttonA->TabIndex = 6;
			this->buttonA->UseVisualStyleBackColor = false;
			this->buttonA->Click += gcnew System::EventHandler(this, &Game::buttonA_Click);
			// 
			// textBoxВопрос
			// 
			this->textBoxВопрос->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->textBoxВопрос->BackColor = System::Drawing::Color::Navy;
			this->textBoxВопрос->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxВопрос->Cursor = System::Windows::Forms::Cursors::Help;
			this->textBoxВопрос->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxВопрос->ForeColor = System::Drawing::Color::Transparent;
			this->textBoxВопрос->Location = System::Drawing::Point(234, 333);
			this->textBoxВопрос->Margin = System::Windows::Forms::Padding(0);
			this->textBoxВопрос->Multiline = true;
			this->textBoxВопрос->Name = L"textBoxВопрос";
			this->textBoxВопрос->ReadOnly = true;
			this->textBoxВопрос->ShortcutsEnabled = false;
			this->textBoxВопрос->Size = System::Drawing::Size(531, 85);
			this->textBoxВопрос->TabIndex = 7;
			this->textBoxВопрос->TabStop = false;
			this->textBoxВопрос->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// buttonStart
			// 
			this->buttonStart->BackColor = System::Drawing::Color::Navy;
			this->buttonStart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonStart->ForeColor = System::Drawing::Color::Lime;
			this->buttonStart->Location = System::Drawing::Point(453, 571);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(119, 37);
			this->buttonStart->TabIndex = 13;
			this->buttonStart->Text = L"Start";
			this->buttonStart->UseVisualStyleBackColor = false;
			this->buttonStart->Click += gcnew System::EventHandler(this, &Game::buttonStart_Click);
			// 
			// pictureBoxMoney
			// 
			this->pictureBoxMoney->Location = System::Drawing::Point(788, 2);
			this->pictureBoxMoney->Name = L"pictureBoxMoney";
			this->pictureBoxMoney->Size = System::Drawing::Size(196, 256);
			this->pictureBoxMoney->TabIndex = 14;
			this->pictureBoxMoney->TabStop = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"50 50.png");
			this->imageList1->Images->SetKeyName(1, L"вопрос аудитории.png");
			// 
			// imageList2
			// 
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"1.png");
			this->imageList2->Images->SetKeyName(1, L"2.png");
			this->imageList2->Images->SetKeyName(2, L"3.png");
			this->imageList2->Images->SetKeyName(3, L"4.png");
			this->imageList2->Images->SetKeyName(4, L"5.png");
			this->imageList2->Images->SetKeyName(5, L"6.png");
			this->imageList2->Images->SetKeyName(6, L"7.png");
			this->imageList2->Images->SetKeyName(7, L"8.png");
			this->imageList2->Images->SetKeyName(8, L"9.png");
			this->imageList2->Images->SetKeyName(9, L"10.png");
			this->imageList2->Images->SetKeyName(10, L"11.png");
			this->imageList2->Images->SetKeyName(11, L"12.png");
			this->imageList2->Images->SetKeyName(12, L"13.png");
			this->imageList2->Images->SetKeyName(13, L"14.png");
			this->imageList2->Images->SetKeyName(14, L"15.png");
			// 
			// button5050
			// 
			this->button5050->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5050.BackgroundImage")));
			this->button5050->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5050->Location = System::Drawing::Point(12, 12);
			this->button5050->Name = L"button5050";
			this->button5050->Size = System::Drawing::Size(65, 41);
			this->button5050->TabIndex = 15;
			this->button5050->UseVisualStyleBackColor = true;
			this->button5050->Click += gcnew System::EventHandler(this, &Game::button5050_Click);
			// 
			// buttonCall
			// 
			this->buttonCall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCall.BackgroundImage")));
			this->buttonCall->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonCall->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCall->Location = System::Drawing::Point(99, 12);
			this->buttonCall->Name = L"buttonCall";
			this->buttonCall->Size = System::Drawing::Size(65, 41);
			this->buttonCall->TabIndex = 16;
			this->buttonCall->UseVisualStyleBackColor = true;
			this->buttonCall->Click += gcnew System::EventHandler(this, &Game::buttonCall_Click);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(984, 611);
			this->Controls->Add(this->buttonCall);
			this->Controls->Add(this->button5050);
			this->Controls->Add(this->pictureBoxMoney);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->buttonD);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->buttonB);
			this->Controls->Add(this->buttonA);
			this->Controls->Add(this->textBoxВопрос);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Game";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Game::Game_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxMoney))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		button5050->Visible = false;
		buttonCall->Visible = false;
		pictureBoxMoney->Visible = false;
		buttonA->Enabled = false;
		buttonB->Enabled = false;
		buttonC->Enabled = false;
		buttonD->Enabled = false;
	}
	private: System::Void Game_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e) {
		Slide = Slide + 1;
		buttonStart->Visible = false;
		switch (Slide)
		{
		case 1:
			Question1();
			Slide = 1;
			buttonA->Enabled = true;
			buttonB->Enabled = true;
			buttonC->Enabled = true;
			buttonD->Enabled = true;
			if (!is5050Used && !isCallUsed)
			{
				button5050->Visible = true;
				buttonCall->Visible = true;
			}
			else if (!is5050Used)
			{
				button5050->Visible = true;
			}
			else if (!isCallUsed)
			{
				buttonCall->Visible = true;
			}
			break;
		case 2:
			Question2();
			Slide = 2;
			buttonA->Enabled = true;
			buttonB->Enabled = true;
			buttonC->Enabled = true;
			buttonD->Enabled = true;
			break;
		case 3:
			Question3();
			Slide = 3;
			buttonA->Enabled = true;
			buttonB->Enabled = true;
			buttonC->Enabled = true;
			buttonD->Enabled = true;
			break;
		case 4:
			Question4();
			Slide = 4;
			buttonA->Enabled = true;
			buttonB->Enabled = true;
			buttonC->Enabled = true;
			buttonD->Enabled = true;
			break;
		case 5:
			Question5();
			Slide = 5;
			buttonA->Enabled = true;
			buttonB->Enabled = true;
			buttonC->Enabled = true;
			buttonD->Enabled = true;
			break;
		case 6:
			Question6();
			Slide = 6;
			buttonA->Enabled = true;
			buttonB->Enabled = true;
			buttonC->Enabled = true;
			buttonD->Enabled = true;
			break;
		case 7:
			Question7();
			Slide = 7;
			buttonA->Enabled = true;
			buttonB->Enabled = true;
			buttonC->Enabled = true;
			buttonD->Enabled = true;
			break;
		case 8:
			Question8();
			Slide = 8;
			buttonA->Enabled = true;
			buttonB->Enabled = true;
			buttonC->Enabled = true;
			buttonD->Enabled = true;
			break;
		case 9:
			Question9();
			Slide = 9;
			buttonA->Enabled = true;
			buttonB->Enabled = true;
			buttonC->Enabled = true;
			buttonD->Enabled = true;
			break;
		case 10:
			Question10();
			Slide = 10;
			buttonA->Enabled = true;
			buttonB->Enabled = true;
			buttonC->Enabled = true;
			buttonD->Enabled = true;
			break;
		case 11:
			Question11();
			Slide = 11;
			buttonA->Enabled = true;
			buttonB->Enabled = true;
			buttonC->Enabled = true;
			buttonD->Enabled = true;
			break;
		case 12:
			Question12();
			Slide = 12;
			buttonA->Enabled = true;
			buttonB->Enabled = true;
			buttonC->Enabled = true;
			buttonD->Enabled = true;
			break;
		case 13:
			Question13();
			Slide = 13;
			buttonA->Enabled = true;
			buttonB->Enabled = true;
			buttonC->Enabled = true;
			buttonD->Enabled = true;
			break;
		case 14:
			Question14();
			Slide = 14;
			buttonA->Enabled = true;
			buttonB->Enabled = true;
			buttonC->Enabled = true;
			buttonD->Enabled = true;
			break;
		case 15:
			Question15();
			Slide = 15;
			buttonA->Enabled = true;
			buttonB->Enabled = true;
			buttonC->Enabled = true;
			buttonD->Enabled = true;
			break;
		case 16:
			Question16();
			Slide = 16;
			break;
		}
	}
private: System::Void buttonA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (sender == correct)
	{
		updateTotal();
		if (Slide != 15) 
		{
			System::Windows::Forms::DialogResult Result;
			Result = MessageBox::Show(
				L"Правильный ответ! Ваш общий выигрыш: " + total.ToString() + "\nХотите ли вы забрать выигрыш и уйти?",
				L"",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question);
			if (Result == System::Windows::Forms::DialogResult::No)
			{
				nextSlide();
			}
			else if (Result == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		else { nextSlide(); }
	}
	else
	{
		MessageBox::Show("Неправильный ответ, вы проиграли!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
		CloseGame();
	}
}	  
private: System::Void buttonB_Click(System::Object^ sender, System::EventArgs^ e) {
	if (sender == correct)
	{
		updateTotal();
		if (Slide != 15)
		{
			System::Windows::Forms::DialogResult Result;
			Result = MessageBox::Show(
				L"Правильный ответ! Ваш общий выигрыш: " + total.ToString() + "\nХотите ли вы забрать выигрыш и уйти?",
				L"",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question);
			if (Result == System::Windows::Forms::DialogResult::No)
			{
				nextSlide();
			}
			else if (Result == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		else { nextSlide(); }
	}
	else
	{
		MessageBox::Show("Неправильный ответ, вы проиграли!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
		CloseGame();
	}
}
private: System::Void buttonC_Click(System::Object^ sender, System::EventArgs^ e) {
	if (sender == correct)
	{
		updateTotal();
		if (Slide != 15)
		{
			System::Windows::Forms::DialogResult Result;
			Result = MessageBox::Show(
				L"Правильный ответ! Ваш общий выигрыш: " + total.ToString() + "\nХотите ли вы забрать выигрыш и уйти?",
				L"",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question);
			if (Result == System::Windows::Forms::DialogResult::No)
			{
				nextSlide();
			}
			else if (Result == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		else { nextSlide(); }
	}
	else
	{
		MessageBox::Show("Неправильный ответ, вы проиграли!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
		CloseGame();
	}
}
private: System::Void buttonD_Click(System::Object^ sender, System::EventArgs^ e) {
	if (sender == correct)
	{
		updateTotal();
		if (Slide != 15)
		{
			System::Windows::Forms::DialogResult Result;
			Result = MessageBox::Show(
				L"Правильный ответ! Ваш общий выигрыш: " + total.ToString() + "\nХотите ли вы забрать выигрыш и уйти?",
				L"",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question);
			if (Result == System::Windows::Forms::DialogResult::No)
			{
				nextSlide();
			}
			else if (Result == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		else { nextSlide(); }
	}
	else
	{
		MessageBox::Show("Неправильный ответ, вы проиграли!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
		CloseGame();
	}
}
private: System::Void button5050_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Button^>^ necorretnie = gcnew List<Button^>();
	if (buttonA != correct && buttonA->Enabled)
	{
		necorretnie->Add(buttonA);
	}
	if (buttonB != correct && buttonB->Enabled)
	{
		necorretnie->Add(buttonB);
	}
	if (buttonC != correct && buttonC->Enabled)
	{
		necorretnie->Add(buttonC);
	}
	if (buttonD != correct && buttonD->Enabled)
	{
		necorretnie->Add(buttonD);
	}
	Random^ rand = gcnew Random();
	int random1 = rand->Next(necorretnie->Count);
	int random2 = rand->Next(necorretnie->Count - 1);
	if (random2 >= random1)
	{
		random2++;
	}
	necorretnie[random1]->Enabled = false;
	necorretnie[random2]->Enabled = false;
	button5050->Visible = false;
	buttonCall->Visible = false; 
	is5050Used = true;
}
private: System::Void buttonCall_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Button^>^ necorretnie = gcnew List<Button^>();
	if (buttonA != correct && buttonA->Enabled)
	{
		necorretnie->Add(buttonA);
	}
	if (buttonB != correct && buttonB->Enabled)
	{
		necorretnie->Add(buttonB);
	}
	if (buttonC != correct && buttonC->Enabled)
	{
		necorretnie->Add(buttonC);
	}
	if (buttonD != correct && buttonD->Enabled)
	{
		necorretnie->Add(buttonD);
	}
	Random^ rand = gcnew Random();
	int random1 = rand->Next(necorretnie->Count);
	necorretnie[random1]->Enabled = false;
	buttonCall->Visible = false;
	button5050->Visible = false;
	isCallUsed = true;
}
};
}