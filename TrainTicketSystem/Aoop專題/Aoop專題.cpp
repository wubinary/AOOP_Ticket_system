// Aoop專題.cpp: 主要專案檔。

#include "stdafx.h"
#include "selling_form.h"
#include "Train_system.h"
#include "Form1.h"

//Train_system A;
using namespace Aoop專題;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// 建立任何控制項之前，先啟用 Windows XP 視覺化效果
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// 建立主視窗並執行
	Application::Run(gcnew Form1());
	
	return 0;
}
