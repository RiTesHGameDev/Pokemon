#pragma once
#include <string>
using namespace std;
#include "../../../include/Pokemon/IStatusEffect.hpp"
namespace N_Pokemon
{
	namespace N_StatusEffect
	{
		class Burn : public IStatusEffect
		{
			int turnLeft;
		public:
			void applyEffect(Pokemon* target) override;
			std::string getEffectName()const override;
			bool turnEndEffect(Pokemon* target) override;
			void clearEffect(Pokemon* target) override;
		};

	}
}