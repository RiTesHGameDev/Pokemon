#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "Utilities.hpp"
#include <iostream>
#include <string>
#include <limits>
#include "Player.hpp"
#include "ProfessorOak.hpp"
#include "Game.hpp"
using namespace std;

int main()
{
    Pokemon charmander("Charmander", PokemonType::Fire, 100);

    ProfessorOak professor("PROFESSOR OAK");
    Player player("Ash", charmander) ;

    // Greet the player and offer Pokemon choices
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);
    professor.explainMainQuest(player);

    Game game;
    game.gameLoop(player);

    system("pause");
    return 0;
}