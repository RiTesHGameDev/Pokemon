#pragma once
#include <string>
#include <vector>
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/Move.hpp"
using namespace std;

namespace N_Pokemon
{
    enum class PokemonType;
    struct Move;
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
        vector<Move>moves;

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
        //Parameterize Contructor
        Pokemon(string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower,Move p_selectedMove);
        //DEEP COPY CONTRUCTOR
        Pokemon(const Pokemon& other);
        //DESTRUCTOR
        ~Pokemon();

        virtual void attack(Move selectedMove,Pokemon*target) = 0;

        void takeDamage(int damage);

        bool isFainted() const;

        void heal();

        void selectAndUseMove(Pokemon* target);

        void printAvailableMoves();

        int selectMove();

        void useMove(Move selectedMove,Pokemon* target);
    };
}