#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/PokemonChoice.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/PokemonType.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Utilities/Utilities.hpp"
#include <iostream>
#include <string>
#include <limits>
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Character/Player/Player.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Character/ProfessorOak.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Main/Game.hpp"
using namespace N_Pokemon;
using namespace N_Player;
using namespace N_Utilities;
using namespace N_Character;
using namespace N_Main;
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