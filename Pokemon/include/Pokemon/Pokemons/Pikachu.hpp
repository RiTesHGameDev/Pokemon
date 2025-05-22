#pragma once
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemon.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Utilities/Utilities.hpp"
using namespace N_Utilities;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Pikachu :public Pokemon
		{
		private:
			void thunderShock(Pokemon* target);
		public:
			Pikachu();
			void attack(Pokemon* target)override;
		};
	}
}