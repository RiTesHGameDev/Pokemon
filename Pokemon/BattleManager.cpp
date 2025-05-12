#include <iostream>
#include "Player.hpp"
#include "WildEncounterManager.hpp"
using namespace std;

void battle(Pokemon& playerPokemon, Pokemon& WildPokemon) {
	cout << "A " << WildPokemon.name << " appeared !" << endl;

	while (!playerPokemon.isFainted() && !WildPokemon.isFainted())
	{
		playerPokemon.attack(WildPokemon);
	}
	if (!WildPokemon.isFainted()) 
	{
		WildPokemon.attack(playerPokemon);
	}
	if (playerPokemon.isFainted())
	{
		cout << playerPokemon.name << " hass fainted ! You lose the battle ." << endl;
	}
	else
	{
		cout << "You have defeated the " << WildPokemon.name << endl;
	}
}