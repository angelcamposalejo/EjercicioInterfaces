#include "stdafx.h"  //________________________________________ EjercicioInterfacess.cpp
#include "EjercicioInterfacess.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	EjercicioInterfacess app;
	return app.BeginDialog(IDI_EjercicioInterfacess, hInstance);
}

void EjercicioInterfacess::Window_Open(Win::Event& e)
{
}

