#include <iostream>
#include <string>
#include <vector>
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utilities/Utilities.hpp"
#include "../../include/Pokemon/Move.hpp"
#include "../../include/Pokemon/StatusEffect/ParalyzedEffect.hpp"
#include "../../include/Pokemon/StatusEffect/Sleep.hpp"
#include "../../include/Pokemon/StatusEffect/Poison.hpp"
#include "../../include/Pokemon/StatusEffect/Burn.hpp"
using namespace N_Pokemon::N_StatusEffect;
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
        name = "Unknown";
        type = PokemonType::Normal;
        health = 100;
        maxHealth = 100;
        attackPower = 10;
        appliedEffect = nullptr;
    }

    Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower,vector<Move>p_moves)//PARAMETERIZED CONSTRUCTOR
    {
        name = p_name;
        type = p_type;
        health = p_health;
        maxHealth = p_health;
        attackPower = p_attackPower;
        moves = p_moves;
        appliedEffect = nullptr;
    }

    Pokemon::Pokemon(const Pokemon* other) //DEEP COPY CONTRUCTOR
    {
        name = other->name;
        type = other->type;
        health = other->health;
        maxHealth = other->health;
        attackPower = other->attackPower;
        moves = other->moves;
    }

    Pokemon::~Pokemon() //DESTRUCTOR
    {
        if (appliedEffect != nullptr)
        {
            delete appliedEffect;
            appliedEffect = nullptr;
            //cout << name << " has been Destroyed." << endl;
        }
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
        cout << "--------------------------------" << endl;

     /*   vector<Move> moves = {
            Move("Vine Whip", 35),
            Move("Flame Brust", 35),
            Move("Water Splash", 35),
            Move("Thunder Shock", 25),
            Move("Bug Bite", 25),
            Move("Wing Attack", 35),
            Move("Super Sonic", 20)
        };*/

        for (size_t i = 0; i < moves.size();++i)
        {
            cout << i + 1 << ". " << moves[i].name << " --> Power :" << moves[i].currentPower << endl;
        }
        cout << "--------------------------------" << endl;
    }

    void Pokemon::selectAndUseMove(Pokemon* target)
    {
        printAvailableMoves();

        int choice = selectMove();

        Move selectedMove = moves[choice-1];
        
        useMove(selectedMove, target);
    }

    int Pokemon::selectMove() 
    {
        int choice;
        cout << "Choose a move :" << endl;

        cin >> choice;

        while (choice < 1 || choice > static_cast<int>(moves.size()))
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
        target->takeDamage(selectedMove.currentPower);
    }

    void Pokemon::reduceAttackPower(int reduced_damage)
    {
        for (int i = 0; i < moves.size(); i++)
        {
            moves[i].currentPower -= reduced_damage;
            if (moves[i].currentPower < 0)
                moves[i].currentPower = 0;
        }
        cout << "Attack Power Reducing by:" << reduced_damage << endl;
    }
    
    void Pokemon::restoreAttackPower() 
    {
        for (int i = 0; i < moves.size(); i++)
        {
            if (moves[i].currentPower < moves[i].maxPower)
                moves[i].currentPower = moves[i].maxPower;
        }
    }

    bool Pokemon::canAttack() {
        if(appliedEffect == nullptr)
        {
            return true;
        }
        else
        {
            return appliedEffect->turnEndEffect(this);
        }
    }

    bool Pokemon::canApplyEffect() 
    {
            return appliedEffect == nullptr;
    }

    void Pokemon::clearEffect() 
    {
            appliedEffect = nullptr;
    }

    void Pokemon::applyEffect(StatusEffectType effectToApply) {
       /* if (appliedEffect != nullptr) {
            delete appliedEffect;
            appliedEffect = nullptr;
        }*/
        switch (effectToApply) {
        case StatusEffectType::PARALYZED:
            appliedEffect = new ParalyzedEffect();
            appliedEffect->applyEffect(this);
            break;
        case StatusEffectType::SLEEPING:
            appliedEffect = new Sleep();
            appliedEffect->applyEffect(this);
            break;
        case StatusEffectType::BURNED:
            appliedEffect = new Burn();
            appliedEffect->applyEffect(this);
            break;
        case StatusEffectType::POISONED:
            appliedEffect = new Poison();
            appliedEffect->applyEffect(this);
            break;
        default:
            appliedEffect = nullptr;
        }
    }
}