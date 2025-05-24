#include <iostream>
#include "../../../include/Pokemon/Pokemons/Balbasaur.hpp"
#include "../../../include/Utilities/Utilities.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"

using namespace N_Utilities;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Balbasaur::Balbasaur() :Pokemon("Balbasaur", PokemonType::Grass, 100, 35, (Move("Vine Whip", 35),Move("Tackle", 15))) {}

		void Balbasaur::attack(Move selectedMove,Pokemon* target) 
		{
			Pokemon::attack(selectedMove, target);

			if (selectedMove.name == "Vine Whip")
			{
				int secondHitChance = rand() % 2;

				if (secondHitChance == 1)

					Pokemon::attack(selectedMove, target);

					cout << name << " hit again with a second " << selectedMove.name << endl;
			}
			else
				cout << target->getName() << " dodged the second hit" << endl;
		}
	}
}