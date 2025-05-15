#pragma once
using namespace std;

class BattleManager 
{
	public:
	BattleManager() = default;

	void startBattle(Player& player, Pokemon& wildPokemon);
	void battle(Pokemon& playerPokemon, Pokemon& wildPokemon);
	void handleBattleOutCome(Player& player, bool playerWon);

};