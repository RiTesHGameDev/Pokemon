#include <iostream>
#include <string>
#include <vector>
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Utilities/Utilities.hpp"
#include "../../include/Pokemon/Move.hpp"
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
    Pokemon::Pokemon() 
    {
        name = getName();
    }

    Pokemon::Pokemon(string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower,Move p_selectedMove)//PARAMETERIZED CONSTRUCTOR
    {
        name = p_name;
        type = p_type;
        health = p_maxHealth;
        maxHealth = p_maxHealth;
        attackPower = p_attackPower;
        Move selectedMove = p_selectedMove;
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


    void Pokemon::printAvailableMoves() 
    {
        cout << getName() << "'s available moves." << endl;

        moves.push_back(Move("Vine Whip", 35));
        moves.push_back(Move("Flame Brust", 35));
        moves.push_back(Move("Water Splash", 35));
        moves.push_back(Move("Thunder Shock", 25));
        moves.push_back(Move("Bug Bite", 25));
        moves.push_back(Move("Wing Attack", 35));
        moves.push_back(Move("Super Sonic", 20));

        for (size_t i = 0; i <= moves.size();++i) 
        {
            cout << i + 1 << ":" << moves[i].name << "Power :" << moves[i].power << endl;
        }
    }
    void Pokemon::selectAndUseMove(Pokemon* target)
    {
        printAvailableMoves();

        int choice = selectMove();
        Move selectedMove = moves[choice - 1];

        useMove(selectedMove, target);
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
        cout << name << " used " << selectedMove.name << endl;
        attack(selectedMove,target);

        N_Utilities::Utilities::waitForEnter();

        cout << "...\n";
        N_Utilities::Utilities::waitForEnter();

        if (target->isFainted())
            cout << target->name << " fainted!" << endl;
        else
            cout << target->name << " has " << target->health << " HP left.\n";
    }
    void Pokemon::attack(Move selectedMove,Pokemon* target) 
    {
        target->takeDamage(selectedMove.power);
    }
}