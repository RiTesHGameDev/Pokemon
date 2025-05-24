#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Balbasaur :public Pokemon
		{
		public:
			Balbasaur();
			void attack(Move selectedMove,Pokemon* target)override;
		};
	}
}