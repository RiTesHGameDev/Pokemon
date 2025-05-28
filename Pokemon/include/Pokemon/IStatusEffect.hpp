#pragma once
#include <string>
#include "../../include/Pokemon/Pokemon.hpp"
using namespace std;

namespace N_Pokemon 
{
    class Pokemon;
    class IStatusEffect {
    public:
        virtual void applyEffect(N_Pokemon::Pokemon* target) = 0;


        virtual std::string getEffectName()const = 0;


        virtual bool turnEndEffect(N_Pokemon::Pokemon* target) = 0;


        virtual void clearEffect(N_Pokemon::Pokemon* target) = 0;

        virtual ~IStatusEffect() = default;
    };
}

