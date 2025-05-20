#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/PokemonChoice.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/PokemonType.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Utilities/Utilities.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Character/Player/Player.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Character/ProfessorOak.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Main/Game.hpp"
#include <iostream>
#include <string>
#include <limits>
using namespace N_Pokemon;
using namespace N_Player;
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
    game->gameLoop(*player);

    system("pause");

    delete professor;
    delete player;
    delete game;

    professor = nullptr;
    player = nullptr;
    game = nullptr;
    return 0;
}