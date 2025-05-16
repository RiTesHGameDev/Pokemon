#pragma once
#include "BattleState.hpp"
#include "Player.hpp"
using namespace std;

class BattleManager 
{
	public:
	BattleManager() = default;

	void startBattle(Player& player, Pokemon& wildPokemon);
	void updateBattleState();

	private:
	BattaleState battleState;

	void battle();
	void handleBattleOutCome();
	
};