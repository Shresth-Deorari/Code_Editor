#pragma once
using namespace std;
namespace TextEditor {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;


    public ref class MyForm : public System::Windows::Forms::Form
    {
        String^ currentFilePath;
    public:
        MyForm(void)
        {
            this->KeyPreview = true;
            InitializeComponent();
            MainTextBox->BringToFront();
            currentFilePath = nullptr;
            
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
        
    private: System::Windows::Forms::ToolStripPanel^ BottomToolStripPanel;
    protected:
    private: System::Windows::Forms::ToolStripPanel^ TopToolStripPanel;
    private: System::Windows::Forms::ToolStripPanel^ RightToolStripPanel;
    private: System::Windows::Forms::ToolStripPanel^ LeftToolStripPanel;
    private: System::Windows::Forms::ToolStripContentPanel^ ContentPanel;
    private: System::Windows::Forms::MenuStrip^ MenuStrip;
    private: System::Windows::Forms::ToolStripMenuItem^ FileButton;
    public: System::Windows::Forms::StatusStrip^ StatusStrip;
    private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
    private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
    private: System::Windows::Forms::RichTextBox^ MainTextBox;
    private: System::Windows::Forms::ToolStripMenuItem^ EditButton;
    private: System::Windows::Forms::ToolStripMenuItem^ ViewButton;
    private: System::Windows::Forms::ToolStripMenuItem^ OpenButton;
    private: System::Windows::Forms::ToolStripMenuItem^ SaveButton;
    private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
    private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
    private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
    private: System::Windows::Forms::ToolStripMenuItem^ copyToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ cutToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ pasteToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
    private: System::Windows::Forms::ListBox^ LineNumberCount;


    private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->components = (gcnew System::ComponentModel::Container());
               this->BottomToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
               this->TopToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
               this->RightToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
               this->LeftToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
               this->ContentPanel = (gcnew System::Windows::Forms::ToolStripContentPanel());
               this->MenuStrip = (gcnew System::Windows::Forms::MenuStrip());
               this->FileButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->OpenButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->SaveButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->EditButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->ViewButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->StatusStrip = (gcnew System::Windows::Forms::StatusStrip());
               this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
               this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
               this->MainTextBox = (gcnew System::Windows::Forms::RichTextBox());
               this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
               this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
               this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
               this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->LineNumberCount = (gcnew System::Windows::Forms::ListBox());
               this->MenuStrip->SuspendLayout();
               this->StatusStrip->SuspendLayout();
               this->contextMenuStrip1->SuspendLayout();
               this->SuspendLayout();
               // 
               // BottomToolStripPanel
               // 
               this->BottomToolStripPanel->Location = System::Drawing::Point(0, 0);
               this->BottomToolStripPanel->Name = L"BottomToolStripPanel";
               this->BottomToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
               this->BottomToolStripPanel->RowMargin = System::Windows::Forms::Padding(4, 0, 0, 0);
               this->BottomToolStripPanel->Size = System::Drawing::Size(0, 0);
               // 
               // TopToolStripPanel
               // 
               this->TopToolStripPanel->Location = System::Drawing::Point(0, 0);
               this->TopToolStripPanel->Name = L"TopToolStripPanel";
               this->TopToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
               this->TopToolStripPanel->RowMargin = System::Windows::Forms::Padding(4, 0, 0, 0);
               this->TopToolStripPanel->Size = System::Drawing::Size(0, 0);
               // 
               // RightToolStripPanel
               // 
               this->RightToolStripPanel->Location = System::Drawing::Point(0, 0);
               this->RightToolStripPanel->Name = L"RightToolStripPanel";
               this->RightToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
               this->RightToolStripPanel->RowMargin = System::Windows::Forms::Padding(4, 0, 0, 0);
               this->RightToolStripPanel->Size = System::Drawing::Size(0, 0);
               // 
               // LeftToolStripPanel
               // 
               this->LeftToolStripPanel->Location = System::Drawing::Point(0, 0);
               this->LeftToolStripPanel->Name = L"LeftToolStripPanel";
               this->LeftToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
               this->LeftToolStripPanel->RowMargin = System::Windows::Forms::Padding(4, 0, 0, 0);
               this->LeftToolStripPanel->Size = System::Drawing::Size(0, 0);
               // 
               // ContentPanel
               // 
               this->ContentPanel->Size = System::Drawing::Size(200, 100);
               // 
               // MenuStrip
               // 
               this->MenuStrip->ImageScalingSize = System::Drawing::Size(20, 20);
               this->MenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                   this->FileButton, this->EditButton,
                       this->ViewButton
               });
               this->MenuStrip->Location = System::Drawing::Point(0, 0);
               this->MenuStrip->Name = L"MenuStrip";
               this->MenuStrip->Size = System::Drawing::Size(658, 28);
               this->MenuStrip->TabIndex = 1;
               this->MenuStrip->Text = L"menuStrip2";
               // 
               // FileButton
               // 
               this->FileButton->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                   this->OpenButton,
                       this->SaveButton, this->saveAsToolStripMenuItem
               });
               this->FileButton->Name = L"FileButton";
               this->FileButton->Size = System::Drawing::Size(46, 24);
               this->FileButton->Text = L"File";
               this->FileButton->Click += gcnew System::EventHandler(this, &MyForm::optionsToolStripMenuItem_Click);
               // 
               // OpenButton
               // 
               this->OpenButton->Name = L"OpenButton";
               this->OpenButton->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
               this->OpenButton->Size = System::Drawing::Size(233, 26);
               this->OpenButton->Text = L"Open";
               this->OpenButton->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
               // 
               // SaveButton
               // 
               this->SaveButton->Name = L"SaveButton";
               this->SaveButton->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
               this->SaveButton->Size = System::Drawing::Size(233, 26);
               this->SaveButton->Text = L"Save";
               this->SaveButton->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
               // 
               // saveAsToolStripMenuItem
               // 
               this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
               this->saveAsToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
                   | System::Windows::Forms::Keys::S));
               this->saveAsToolStripMenuItem->Size = System::Drawing::Size(233, 26);
               this->saveAsToolStripMenuItem->Text = L"Save As";
               this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
               // 
               // EditButton
               // 
               this->EditButton->Name = L"EditButton";
               this->EditButton->Size = System::Drawing::Size(49, 24);
               this->EditButton->Text = L"Edit";
               this->EditButton->Click += gcnew System::EventHandler(this, &MyForm::editToolStripMenuItem_Click);
               // 
               // ViewButton
               // 
               this->ViewButton->Name = L"ViewButton";
               this->ViewButton->Size = System::Drawing::Size(55, 24);
               this->ViewButton->Text = L"View";
               this->ViewButton->Click += gcnew System::EventHandler(this, &MyForm::viewToolStripMenuItem_Click);
               // 
               // StatusStrip
               // 
               this->StatusStrip->ImageScalingSize = System::Drawing::Size(20, 20);
               this->StatusStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                   this->toolStripStatusLabel1,
                       this->toolStripStatusLabel2
               });
               this->StatusStrip->Location = System::Drawing::Point(0, 410);
               this->StatusStrip->Name = L"StatusStrip";
               this->StatusStrip->Size = System::Drawing::Size(658, 26);
               this->StatusStrip->TabIndex = 2;
               this->StatusStrip->Text = L"statusStrip1";
               // 
               // toolStripStatusLabel1
               // 
               this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
               this->toolStripStatusLabel1->Size = System::Drawing::Size(51, 20);
               this->toolStripStatusLabel1->Text = L"Line: 1";
               // 
               // toolStripStatusLabel2
               // 
               this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
               this->toolStripStatusLabel2->Size = System::Drawing::Size(75, 20);
               this->toolStripStatusLabel2->Text = L"Column: 1";
               // 
               // MainTextBox
               // 
               this->MainTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
               this->MainTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->MainTextBox->Location = System::Drawing::Point(40, 28);
               this->MainTextBox->Name = L"MainTextBox";
               this->MainTextBox->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
               this->MainTextBox->Size = System::Drawing::Size(618, 382);
               this->MainTextBox->TabIndex = 0;
               this->MainTextBox->Text = L"";
               this->MainTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::MainTextBox_TextChanged);
               this->MainTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MainTextBox_KeyDown);
               // 
               // openFileDialog1
               // 
               this->openFileDialog1->FileName = L"openFileDialog1";
               // 
               // saveFileDialog1
               // 
               this->saveFileDialog1->FileName = L"saveFileDialog1";
               // 
               // contextMenuStrip1
               // 
               this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
               this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                   this->copyToolStripMenuItem,
                       this->cutToolStripMenuItem, this->pasteToolStripMenuItem
               });
               this->contextMenuStrip1->Name = L"contextMenuStrip1";
               this->contextMenuStrip1->Size = System::Drawing::Size(113, 76);
               // 
               // copyToolStripMenuItem
               // 
               this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
               this->copyToolStripMenuItem->Size = System::Drawing::Size(112, 24);
               this->copyToolStripMenuItem->Text = L"Copy";
               // 
               // cutToolStripMenuItem
               // 
               this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
               this->cutToolStripMenuItem->Size = System::Drawing::Size(112, 24);
               this->cutToolStripMenuItem->Text = L"Cut";
               // 
               // pasteToolStripMenuItem
               // 
               this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
               this->pasteToolStripMenuItem->Size = System::Drawing::Size(112, 24);
               this->pasteToolStripMenuItem->Text = L"Paste";
               // 
               // LineNumberCount
               // 
               this->LineNumberCount->Dock = System::Windows::Forms::DockStyle::Left;
               this->LineNumberCount->Enabled = false;
               this->LineNumberCount->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->LineNumberCount->ItemHeight = 27;
               this->LineNumberCount->Location = System::Drawing::Point(0, 28);
               this->LineNumberCount->Name = L"LineNumberCount";
               this->LineNumberCount->Size = System::Drawing::Size(40, 382);
               this->LineNumberCount->TabIndex = 4;
               // 
               // MyForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(658, 436);
               this->Controls->Add(this->MainTextBox);
               this->Controls->Add(this->LineNumberCount);
               this->Controls->Add(this->StatusStrip);
               this->Controls->Add(this->MenuStrip);
               this->Name = L"MyForm";
               this->Text = L"MyForm";
               this->MenuStrip->ResumeLayout(false);
               this->MenuStrip->PerformLayout();
               this->StatusStrip->ResumeLayout(false);
               this->StatusStrip->PerformLayout();
               this->contextMenuStrip1->ResumeLayout(false);
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private: System::Void optionsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        // Handle File button click
    }

    private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            StreamReader^ reader = gcnew StreamReader(openFileDialog1->FileName);
            MainTextBox->Text = reader->ReadToEnd();
            delete reader;
        }
    }

    
    private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        if (String::IsNullOrEmpty(this->currentFilePath))
        {
            saveAsToolStripMenuItem_Click(sender, e);
        }
        else
        {
            StreamWriter^ writer = gcnew StreamWriter(this->currentFilePath);
            writer->Write(MainTextBox->Text);
            writer->Close();
        }
    }

    private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
        saveFileDialog->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
        saveFileDialog->Title = "Save a Text File";

        if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
        {
            // Save the file at the chosen location
            this->currentFilePath = saveFileDialog->FileName;
            StreamWriter^ writer = gcnew StreamWriter(this->currentFilePath);
            writer->Write(MainTextBox->Text);
            writer->Close();
        }
    }

    private: System::Void editToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        // Handle Edit button click
    }

    private: System::Void viewToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        // Handle View button click
    }

    private: System::Void MainTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        Update_Line_Number();
    }
           

           void Update_Line_Number() {
               int lines = MainTextBox->Lines->Length;
               int OldLines = LineNumberCount->Items->Count;
               if (lines == OldLines)return;
               if (lines < OldLines) {
                   for (int i = OldLines-1; i >lines; i--) {
                       LineNumberCount->Items->RemoveAt(i);
                   }
               }
               else {
                   for (int i = OldLines; i < lines; i++) {
                       LineNumberCount->Items->Add(i + 1);
                   }
               }
               return;
           }
    private: System::Void MainTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
        if (e->KeyData == Keys::Tab) {
            int charIndex = MainTextBox->SelectionStart;
            Point caretPosition = MainTextBox->GetPositionFromCharIndex(charIndex);
            int newXPosition = caretPosition.X + 10; 
            int newCharIndex = MainTextBox->GetCharIndexFromPosition(Point(newXPosition, caretPosition.Y));
            MainTextBox->SelectionStart = newCharIndex;
        }
    }
};
}
