#pragma once
#include <string>
#include "../../../include/Pokemon/Pokemon.hpp"

namespace N_Pokemon 
{
	namespace N_StatusEffect
	{
		class IStatusEffect
		{
		public:
			virtual void applyEffect(Pokemon* target) = 0;
			virtual string getEffectName() = 0;
			virtual bool turnEndEffect(Pokemon* target) = 0;
			virtual void clearEffect(Pokemon* target) = 0;
			virtual ~IStatusEffect() = default;
		};
	}

}
