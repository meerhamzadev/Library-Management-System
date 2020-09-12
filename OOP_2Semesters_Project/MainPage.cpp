#include "MainPage.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;


[STAThread]

void main()
{
	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	OOP2SemestersProject::MainPage form;
	Application::Run(% form);
}
