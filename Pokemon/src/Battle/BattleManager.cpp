#include <iostream>
#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Utilities/Utilities.hpp"
using namespace N_Utilities;
using namespace std;
namespace N_Battle 
{
	void BattleManager::startBattle(Player* player, Pokemon* wildPokemon)
	{
		battleState.playerPokemon = player->chosenPokemon;
		battleState.wildPokemon = wildPokemon;
		battleState.playerTurn = true;
		battleState.battleOnGoing = true;

		cout << "A wild " << wildPokemon->getName() << " appeared!\n";
		battle();
		handleBattleOutCome();

	}
	void BattleManager::battle()
	{
		while (battleState.battleOnGoing == true)
		{
			if (battleState.playerTurn == true)
			{
				battleState.playerPokemon->attack(battleState.wildPokemon);
				updateBattleState();
				battleState.playerTurn = false;
			} 
			else
			{
				battleState.wildPokemon->attack(battleState.playerPokemon);
				updateBattleState();
				battleState.playerTurn = true;
			}
		}

		Utilities::waitForEnter();
	}
	void BattleManager::handleBattleOutCome()
	{
		if (battleState.playerPokemon->isFainted())
		{
			cout << "Oh no! " << battleState.playerPokemon->getName() << " fainted! You need to visit the PokeCenter." << endl;
			std::cout << "Game Over.\n";
		}
		if (battleState.wildPokemon->isFainted())
		{
			cout << "You defeated the wild " << battleState.wildPokemon->getName() << endl;

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
}