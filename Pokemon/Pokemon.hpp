#pragma once
#include <string>
using namespace std;
enum class PokemonType;

class Pokemon 
{
    //PROPERTIES
    public:
        string name;
        PokemonType type{};
        int health{};

        //DEFAULT CONTRUCTOR
        Pokemon();
    
        //PARAMETERIZED CONSTRUCTOR
        Pokemon(string p_name, PokemonType p_type, int p_health);
    
        //DEEP COPY CONTRUCTOR
        Pokemon(const Pokemon& other);
   
        //DESTRUCTOR
        ~Pokemon();
   
        void attack();
};