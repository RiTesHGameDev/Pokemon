#pragma once
#include <string>
using namespace std;
#include "../../../include/Pokemon/IStatusEffect.hpp"
namespace N_Pokemon
{
	namespace N_StatusEffect
	{
		class ParalyzedEffect : public IStatusEffect
		{
			int turnLeft;
		public:
			void applyEffect(N_Pokemon::Pokemon* target) override;
			std::string getEffectName()const override;
			bool turnEndEffect(N_Pokemon::Pokemon* target) override;
			void clearEffect(N_Pokemon::Pokemon* target) override;
		};

	}
}