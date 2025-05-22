#pragma once
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Charmander :public Pokemon
		{
		private:
			void flameBrust(Pokemon* target);
		public:
			Charmander();
			void attack(Pokemon* target)override;
		};
	}
}