#pragma once
#include <string>
using namespace std;

namespace N_Pokemon
{
	struct Move {
		string name;
		int maxPower;
		int currentPower;

		//Move() : name("Unknown"), power(0) {}
		Move(const string& moveName , int moveMaxPower ,int movePower ) 
		{
			name = moveName;
			maxPower = moveMaxPower;
			currentPower = movePower;
			
		}
	};
}