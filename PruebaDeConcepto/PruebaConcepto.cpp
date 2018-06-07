#include "PruebaConcepto.h"
//#include "OpenGloveAPI.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array <String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PruebaDeConcepto::PruebaConcepto form;
	Application::Run(%form);
	return 0;
}
