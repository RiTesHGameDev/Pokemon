#pragma once
#include <string>
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/PokemonType.hpp"
//enum class PokemonType;

using namespace std;

namespace N_Pokemon
{
    class Pokemon
    {
        //PROPERTIES
    protected:
        string name;
        PokemonType type;
        int health;
        int maxHealth;
        int attackPower;

    public:
        void setName(string n);
        string getName();

        PokemonType setType(PokemonType t);
        PokemonType getType();

        void setHealth(int h);
        int getHealth();

        void setMaxHealth(int mh);
        int getMaxHealth();

        void setAttackPower(int ap);
        int getAttackPower();
        //DEFAULT CONTRUCTOR
        Pokemon();
        //PARAMETERIZED CONSTRUCTOR
        Pokemon(string p_name, PokemonType p_type, int p_health);
        //Parameterized Contructor for wild pokemons
        Pokemon(string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower);
        //DEEP COPY CONTRUCTOR
        Pokemon(const Pokemon& other);
        //DESTRUCTOR
        ~Pokemon();

        virtual void attack(Pokemon*target) = 0;

        void takeDamage(int damage);

        bool isFainted() const;

        void heal();
    };
}