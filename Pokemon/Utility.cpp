#include <iostream>
#include<limits>
#include"Utility.h"
using namespace std;

void Utility::clearConsole() 
{
	#ifdef _WIN32
		system("cls");
	#else
		(void)system("clear");
	#endif

}
void Utility::waitForEndter() 
{
	cin.get();
}
void Utility::clearInputBuffer() 
{
	cin.ignore(numeric_limits<streamsize>::max(), "\n");
}