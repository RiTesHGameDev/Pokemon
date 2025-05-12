#include <iostream>
#include <string>
#include "Pokemon.hpp"
#include "PokemonType.hpp"
using namespace std;

//CONTRUCTORS
Pokemon::Pokemon() //DEFAULT CONTRUCTOR
{
    name = "Unknown";
    type = PokemonType::Normal;
    health = 50;
}

Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health)  //PARAMETERIZED CONSTRUCTOR
{
    name = p_name;
    type = p_type;
    health = p_health;
}

Pokemon::Pokemon(const Pokemon& other) //DEEP COPY CONTRUCTOR
{
    name = other.name;
    type = other.type;
    health = other.health;
}

Pokemon::~Pokemon() //DESTRUCTOR
{
    //cout << name << " has been Destroyed." << endl;
}
//ATTACK METHOD
void Pokemon::attack(Pokemon &target)
{ 
    int damage = 10;
    cout << name << " Attacks " << target.name << " for " << damage << " damage !" << endl;
    target.takeDamage(damage);
}
void Pokemon::takeDamage(int damage) 
{
    health -= damage;

    if (health < 0) 
    {
        health = 0;
    }
}
bool Pokemon::isFainted() const
{
    return (health <= 0);
}