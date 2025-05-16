#include <iostream>
#include "Player.hpp"
#include "BattleManager.hpp"
#include "Utilities.hpp"
using namespace std;

void BattleManager::startBattle(Player & player,Pokemon & wildPokemon)
{
	battleState.playerPokemon = &player.chosenPokemon;
	battleState.wildPokemon = &wildPokemon;
	battleState.playerTurn = true;
	battleState.battleOnGoing = true;

	cout << "A wild " << wildPokemon.name << " appeared!\n";
	battle();
	
}
void BattleManager::battle()
{
	while (battleState.battleOnGoing)
	{
		if (battleState.playerTurn=false)
		{
			battleState.wildPokemon->attack(*battleState.playerPokemon);
			updateBattleState();
			
		}
		else
		{
			battleState.playerPokemon->attack(*battleState.wildPokemon);
			updateBattleState();
		}
	}
	
	Utilities::waitForEnter();
}
void BattleManager::handleBattleOutCome() 
{
	if (battleState.playerPokemon->isFainted())
	{
		cout << "Oh no! " << battleState.playerPokemon->name << " fainted! You need to visit the PokeCenter." << endl;
		std::cout << "Game Over.\n";
	}
	if(battleState.wildPokemon->isFainted())
	{
		cout << "You defeated the wild " << battleState.wildPokemon->name << endl;

	}
	Utilities::waitForEnter();
	
}
void BattleManager::updateBattleState()
{
	if (battleState.playerPokemon->isFainted()) {
		battleState.battleOnGoing = false;
	}
	else if (battleState.wildPokemon->isFainted()) {
		battleState.battleOnGoing = false;
	}
}