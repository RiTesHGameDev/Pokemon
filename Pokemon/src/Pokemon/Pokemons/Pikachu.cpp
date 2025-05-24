#include <iostream>
#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Utilities/Utilities.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
using namespace N_Utilities;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Pikachu::Pikachu() :Pokemon("Pikachu", PokemonType::Electric, 100, 25,(Move("Thunder Shock",25),Move("Thunder Bolt",80))){}

		void Pikachu::attack(Move selectedMove,Pokemon* target) 
		{
			Pokemon::attack(selectedMove, target);

			if(selectedMove.name == "Thunder Bolt")
			{
				int HitChance = rand() % 100;

				if (HitChance <= 80)

					Pokemon::attack(selectedMove, target);
				
					cout << name << " hit again with a second " << selectedMove.name << endl;
			}
			else
				cout << target->getName() << " dodged the second hit" << endl;
		}
	}
}