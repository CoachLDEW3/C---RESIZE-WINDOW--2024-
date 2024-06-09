/************************************************************************************************
	Name:	 CoachLDEW
	Date:	 06.09.2024
	Purpose: This program with resize the console window according to the height and width 
			 specified
*************************************************************************************************/

#include <iostream>			//This library contains standard input and output processes
#include <Windows.h>		//This library contains the function to control the cursor position

using namespace std;

//Function that changes the window size
void WindowSize(int x, int y)
{
	HWND console = GetConsoleWindow();		//Get the Console Window and put it in a variable of the Window Handle type
	RECT ConsoleRect;						//Rect Structure defines a Rectangle (The Window)
	GetWindowRect(console, &ConsoleRect);

	MoveWindow(console, ConsoleRect.left, ConsoleRect.top, x, y, TRUE);
}

int main()
{
	//Changes console window to 500x700
	WindowSize(500, 700);

	return 0;
}