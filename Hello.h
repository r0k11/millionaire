#pragma once
#include "Game.h"
namespace millionaire {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Hello
	/// </summary>
	public ref class Hello : public System::Windows::Forms::Form
	{
	public:
		Hello(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Hello()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonClose;
	protected:

	private: System::Windows::Forms::Button^ buttonStart;
	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Hello::typeid));
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonClose
			// 
			this->buttonClose->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonClose->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClose->Font = (gcnew System::Drawing::Font(L"Magneto", 39.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClose->ForeColor = System::Drawing::Color::Red;
			this->buttonClose->Location = System::Drawing::Point(701, 263);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(283, 85);
			this->buttonClose->TabIndex = 3;
			this->buttonClose->Text = L"Закрыть";
			this->buttonClose->UseVisualStyleBackColor = false;
			this->buttonClose->Click += gcnew System::EventHandler(this, &Hello::buttonЗакрыть_Click);
			// 
			// buttonStart
			// 
			this->buttonStart->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonStart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonStart->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonStart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Magneto", 50.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStart->ForeColor = System::Drawing::Color::Lime;
			this->buttonStart->Location = System::Drawing::Point(1, 263);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(278, 85);
			this->buttonStart->TabIndex = 2;
			this->buttonStart->Text = L"Начать";
			this->buttonStart->UseVisualStyleBackColor = false;
			this->buttonStart->Click += gcnew System::EventHandler(this, &Hello::buttonНачать_Click);
			// 
			// Hello
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(984, 611);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->buttonStart);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Hello";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hello";
			this->Load += gcnew System::EventHandler(this, &Hello::Hello_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void buttonНачать_Click(System::Object^ sender, System::EventArgs^ e) {
		Game^ form2 = gcnew Game();
		form2->Show();
		this->Hide();
	}
	private: System::Void Hello_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void buttonЗакрыть_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
