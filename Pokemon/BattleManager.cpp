#include <iostream>
#include "Player.hpp"
#include "BattleManager.hpp"
#include "Utilities.hpp"
using namespace std;

void BattleManager::startBattle(Player & player,Pokemon & wildPokemon)
{
	cout << "A wild " << wildPokemon.name << " appeared!\n";
	battle(player.chosenPokemon, wildPokemon);
}
void BattleManager::battle(Pokemon& playerPokemon, Pokemon& wildPokemon)
{
	while (!playerPokemon.isFainted() && !wildPokemon.isFainted())
	{
		playerPokemon.attack(wildPokemon);
	}
	if (!wildPokemon.isFainted())
	{
		wildPokemon.attack(playerPokemon);
	}

	Utilities::waitForEnter();
}
void BattleManager::handleBattleOutCome(Player& player, bool playerWon) 
{
	if (playerWon)
	{
		cout << player.chosenPokemon.name << " is victorious! Keep an eye on your Pokémon's health." << endl;
	}
	else
	{
		cout << "Oh no! " << player.chosenPokemon.name << " fainted! You need to visit the PokeCenter." << endl;
		Utilities::waitForEnter();
		std::cout << "Game Over.\n";
	}
}