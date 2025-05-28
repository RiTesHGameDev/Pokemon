#pragma once
#include <string>
using namespace std;

namespace N_Pokemon
{
	struct Move {
		string name;
		int power;

		Move() : name("Unknown"), power(0) {}
		Move(const string& moveName , int movePower ) 
		{
			name = moveName;
			power = movePower;
		}
	};
}