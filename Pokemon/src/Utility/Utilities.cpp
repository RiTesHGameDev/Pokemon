#include <iostream>
#include <limits>
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Utility/Utilities.hpp"
using namespace std;

void Utilities::clearConsole()
{
	#ifdef _WIN32
		system("cls");
	#else
		(void)system("clear");
	#endif

}
void Utilities::waitForEnter()
{
	cin.get();
}
void Utilities::clearInputBuffer()
{
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}