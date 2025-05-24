#pragma once
#include "../../include/Battle/BattleState.hpp"
#include "../../include/Character/Player/Player.hpp"

using namespace N_Player;

namespace N_Battle
{
	class BattleManager
	{
	public:
		BattleManager() = default;

		void startBattle(Player* player, Pokemon* wildPokemon);
		void updateBattleState();
		void stopBattle();

	private:
		BattaleState battleState;

		void battle();
		void handleBattleOutCome();

	};
}