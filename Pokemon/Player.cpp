#include "Player.hpp"
#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace std;

Player::Player() 
{
    name = "Trainer";
    chosenPokemon = Pokemon();
}
Player::Player(string p_name, Pokemon p_chosenPokemon) {
    name = p_name;
    chosenPokemon = p_chosenPokemon;
}
void Player::choosePokemon(int choice) {
    switch ((PokemonChoice)choice)
    {
        case PokemonChoice::Bulbasaur:
            chosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100);
            break;

        case PokemonChoice::Charmander:
            chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
            break;
        case PokemonChoice::Squirtle:
            chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
            break;
        case PokemonChoice::Charizard:
            chosenPokemon = Pokemon("Charizard", PokemonType::Fire, 100);
            break;
        default:
            chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
            break;
    }
    cout << "Player " << name << " chose " << chosenPokemon.name << endl;
    Utilities::waitForEnter();
}