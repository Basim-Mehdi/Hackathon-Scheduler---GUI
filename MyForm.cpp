#include "MyForm.h"

using namespace SchedulerProject;

/// <summary>
/// The main entry point for the application.
/// </summary>
[STAThread]
void Main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew SchedulerProject::MyForm);
}