#include "game.h"

#include <Windows.h>

int Game::create_console(void)
{
	LPCSTR name = "C:\dev\console-game\x64\Debug\console-game.exe";
	char desktop[20] = "Desktop Placeholder";
	char title[18] = "Title Placeholder";

	STARTUPINFOA si;
	PROCESS_INFORMATION pi;;

	si.lpReserved = NULL;
	si.lpDesktop = desktop;
	si.lpTitle = title;
	si.dwX = 0; //STARTF_USEPOSTION in dwFlags
	si.dwY = 0;
	si.dwXSize = 100; //STARTF_USESIZE in dwFlags
	si.dwYSize = 100;
	si.dwXCountChars = 10; //STARTF_USECOUNTCHARS in dwFlags
	si.dwYCountChars = 10;
	si.dwFillAttribute = 0; //STARTF_USEFILLATTRIBUTE
	si.dwFlags = 0;
	si.wShowWindow = 0;
	si.cbReserved2 = 0;
	si.lpReserved2 = NULL;
	si.hStdInput = 0;
	si.hStdOutput = 0;
	si.hStdError = 0;
	si.cb = sizeof(si);

	pi.hProcess = GetCurrentProcess();
	pi.hThread = GetCurrentThread();
	pi.dwProcessId = GetCurrentProcessId();
	pi.dwThreadId = GetCurrentThreadId();


	CreateProcessA(
		name,
		NULL,
		NULL,
		NULL,
		FALSE,
		CREATE_NEW_CONSOLE,
		NULL,
		NULL,
		&si,
		&pi
	);


	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);

	return 0;
}

int Game::run(void)
{
	Game::create_console();
	return 0;
}


int main(void)
{
	Game texterminator = Game();
	texterminator.run();
	return 0;
}