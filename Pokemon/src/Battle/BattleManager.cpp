#include <iostream>
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Character/Player/Player.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Battle/BattleManager.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Utilities/Utilities.hpp"
using namespace N_Player;
using namespace N_Utilities;
using namespace std;
namespace N_Battle 
{
	void BattleManager::startBattle(Player& player, Pokemon& wildPokemon)
	{
		battleState.playerPokemon = &player.chosenPokemon;
		battleState.wildPokemon = &wildPokemon;
		battleState.playerTurn = true;
		battleState.battleOnGoing = true;

		cout << "A wild " << wildPokemon.getName() << " appeared!\n";
		battle();

	}
	void BattleManager::battle()
	{
		while (battleState.battleOnGoing)
		{
			if (battleState.playerTurn)
			{
				battleState.playerPokemon->attack(*battleState.wildPokemon);
				updateBattleState();
			}
			else
			{
				battleState.wildPokemon->attack(*battleState.playerPokemon);
				updateBattleState();
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