#pragma once
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Balbasaur :public Pokemon
		{
		private:
			void vineWhip(Pokemon* target);
		public:
			Balbasaur();
			void attack(Pokemon* target)override;
		};
	}
}