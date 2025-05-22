#pragma once
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Battle/BattleState.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Character/Player/Player.hpp"

using namespace N_Player;

namespace N_Battle
{
	class BattleManager
	{
	public:
		BattleManager() = default;

		void startBattle(Player* player, Pokemon* wildPokemon);
		void updateBattleState();

	private:
		BattaleState battleState;

		void battle();
		void handleBattleOutCome();

	};
}