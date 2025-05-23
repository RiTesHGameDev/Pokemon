#pragma once
#include <string>
#include <vector>
#include "../../include/Pokemon/PokemonType.hpp"
using namespace std;

//struct Move;

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
        //vector<Move>moves;

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
        Pokemon(string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower);
        //DEEP COPY CONTRUCTOR
        Pokemon(const Pokemon& other);
        //DESTRUCTOR
        ~Pokemon();

        virtual void attack(Pokemon*target) = 0;

        void takeDamage(int damage);

        bool isFainted() const;

        void heal();

        //void selectAndUseMove(Pokemon* target);

        /*void printAvailableMoves();

        int selectMove();

        void useMove(Move selectedMove,Pokemon* target);*/
    };
}