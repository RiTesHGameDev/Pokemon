#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Character/Player/Player.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/PokemonChoice.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/PokemonType.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Utilities/Utilities.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemons/Balbasaur.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemons/Charmander.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemons/Squirtle.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemons/Pikachu.hpp"
#include <iostream>
using namespace N_Pokemons;
using namespace N_Utilities;
using namespace N_Pokemon;
using namespace N_Player;
using namespace std;

namespace N_Player 
{
    Player::Player()
    {
        name = "Trainer";
        
    }
    Player::Player(string p_name) {
        name = p_name;
    }
    void Player::choosePokemon(int choice) {
        switch ((PokemonChoice)choice)
        {
        case PokemonChoice::Bulbasaur:
            chosenPokemon = new Balbasaur();
            break;
        case PokemonChoice::Charmander:
            chosenPokemon = new Charmander();
            break;
        case PokemonChoice::Squirtle:
            chosenPokemon = new Squirtle();
            break;
        default:
            chosenPokemon = new Pikachu();
            break;
        }
        cout << "Player " << name << " chose " << chosenPokemon->getName() << endl;
        Utilities::waitForEnter();
    }
}