#include <iostream>
#include <string>
#include <vector>
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Utilities/Utilities.hpp"
using namespace N_Utilities;
using namespace std;

namespace N_Pokemon
{
    void Pokemon::setName(string n) { name = n; }
    string Pokemon::getName() { return name; }

    PokemonType Pokemon::setType(PokemonType t) { type = t; return type; }
    PokemonType Pokemon::getType() { return type; }

    void Pokemon::setHealth(int h) { health = h; }
    int Pokemon::getHealth() { return health; }

    void Pokemon::setMaxHealth(int mh) { maxHealth= mh; }
    int Pokemon::getMaxHealth() { return maxHealth; }

    void Pokemon::setAttackPower(int ap) { attackPower = ap; }
    int Pokemon::getAttackPower() { return attackPower; }
    //CONTRUCTORS
    Pokemon::Pokemon(string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower)//PARAMETERIZED CONSTRUCTOR
    {
        name = p_name;
        type = p_type;
        health = p_maxHealth;
        maxHealth = p_maxHealth;
        attackPower = p_attackPower;
    }
    Pokemon::Pokemon(const Pokemon& other) //DEEP COPY CONTRUCTOR
    {
        name = other.name;
        type = other.type;
        health = other.health;
        maxHealth = other.maxHealth;
        attackPower = other.attackPower;
    }
    Pokemon::~Pokemon() //DESTRUCTOR
    {
        //cout << name << " has been Destroyed." << endl;
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
    void Pokemon::heal()
    {
        health = maxHealth;
    }
   /* void Pokemon::selectAndUseMove(Pokemon* target) 
    {
        printAvailableMoves();
    }*/
    /*void Pokemon::printAvailableMoves() 
    {
        cout << getName() << "'s available moves." << endl;
        cout << "Vine Whip" << endl;
        cout << "Flame Brust" << endl;
        cout << "Water Splash" << endl;
        cout << "Thunder Shock" << endl;
        cout << "Super Sonic" << endl;
        cout << "Bug Bite" << endl;
        cout << "Wing Attack" << endl;

        for (size_t i = 0; i <= moves.size();++i) 
        {
            cout << i + 1 << ":" << moves[i].name << "Power :" << moves[i].power << endl;
        }
    }
    int Pokemon::selectMove() 
    {
        int choice;
        cout << "Choose a move :" << endl;

        cin >> choice;

        while (choice < 1 || static_cast<int>(moves.size()))
        {
            cout << "Invalid Choice !" << endl;
            cin >> choice;
        }
        return choice;
    }
    void Pokemon::useMove(Move selectedMove,Pokemon*target) 
    {
        cout << name << " used " << selectedMove.name << "!\n";
        attack(selectedMove,target);

        N_Utilities::Utilities::waitForEnter();

        cout << "...\n";
        N_Utilities::Utilities::waitForEnter();

        if (target->isFainted())
            cout << target->name << " fainted!\n";
        else
            cout << target->name << " has " << target->health << " HP left.\n";
    }*/
}