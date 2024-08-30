#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    TextEditor::MyForm form;  // Ensure 'Text::MyForm' matches the namespace and class name in 'MyForm.h'
    Application::Run(% form);
}
