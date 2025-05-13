#pragma once
#include <string>
using namespace std;
enum class PokemonType;

class Pokemon 
{
    //PROPERTIES
    public:
        string name;
        PokemonType type;
        int health;
        int maxHealth;
        int attactPower;


        //DEFAULT CONTRUCTOR
        Pokemon();
    
        //PARAMETERIZED CONSTRUCTOR
        Pokemon(string p_name, PokemonType p_type,int p_health);

        //Parameterized Contructor for wild pokemons
        Pokemon(string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower);
    
        //DEEP COPY CONTRUCTOR
        Pokemon(const Pokemon& other);
   
        //DESTRUCTOR
        ~Pokemon();
          
        void attack(Pokemon &target);

        void takeDamage(int damage);

        bool isFainted() const;

        void heal();
};