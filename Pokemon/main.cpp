#include "../Pokemon/include/Pokemon/PokemonChoice.hpp"
#include "../Pokemon/include/Pokemon/PokemonType.hpp"
#include "../Pokemon/include/Utilities/Utilities.hpp"
#include "../Pokemon/include/Character/ProfessorOak.hpp"
#include "../Pokemon/include/Main/Game.hpp"
#include <iostream>
#include <string>
#include <limits>
using namespace N_Pokemon;
using namespace N_Utilities;
using namespace N_Character;
using namespace N_Main;
using namespace std;

int main()
{
    // Continue with the main flow of the game
    ProfessorOak* professor = new ProfessorOak("Professor Oak");
    Player* player = new Player();

    // Greet the player and offer Pokemon choices
    professor->greetPlayer(*player);
    professor->offerPokemonChoices(*player);

    // Explain the main quest
    professor->explainMainQuest(*player);

    // Start the main game loop
    Game* game = new Game();
    game->gameLoop(player);

    system("pause");

    delete professor;
    delete player;
    delete game;

    professor = nullptr;
    player = nullptr;
    game = nullptr;
    return 0;
}