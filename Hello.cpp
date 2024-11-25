#include "Hello.h"
#include <Windows.h>
using namespace millionaire; // Название вашего проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Hello);
	return 0;
}
