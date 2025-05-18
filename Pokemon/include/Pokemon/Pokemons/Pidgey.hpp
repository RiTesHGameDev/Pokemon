#pragma once
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemon.hpp"
using namespace N_Pokemon;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Pidgey :public Pokemon
		{
		private:
			void wingAttack(Pokemon& target);
		public:
			Pidgey();
		};
	}
}
