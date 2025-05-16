#include <iostream>
#include <string>
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Utility/Utilities.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Character/Player/Player.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Main/Game.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Grass.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Battle/WildEncounterManager.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/PokemonType.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Battle/BattleManager.hpp"
using namespace std;

Game::Game()
{
    forestGrass = Grass{ "Forest",{ Pokemon{"Zubat",PokemonType::Poison,30},Pokemon{"Caterpie",PokemonType::Bug,35},Pokemon{"Pidgey",PokemonType::Normal,35}}, 80 };

    caveGrass = Grass{ "Cave",{Pokemon{"Zubat", PokemonType::Poison, 30}, Pokemon{"Geodude", PokemonType::Rock, 50}},80 };
}
void Game::gameLoop(Player & player)
{
    bool keepPlaying = true;
    int choice;
    BattleManager battleManager;

    while (keepPlaying)
    {
        Utilities::clearConsole();
        cout << "What would you like to do next" << player.name << endl;
        cout << "1.Battle wild pokemon" << endl;
        cout << "2.Visit PokeCenter" << endl;
        cout << "3.Challenge Gyms" << endl;
        cout << "4.Enter Pokemon League" << endl;
        cout << "5.Quit" << endl;

        cin >> choice;

        Utilities::clearInputBuffer();

        switch (choice)
        {
            case 1:
            {
                WildEncounterManager encounterManager ;
                Pokemon wildPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);
                //cout << "A wild " << encounteredPokemon.name << " appeard !" << endl;
                battleManager.startBattle(player , wildPokemon);
                break;
            }

            case 2:
            {
                cout << "You have arrived at Poke Centre !" << endl;
                player.chosenPokemon.heal();
                cout << player.chosenPokemon.name << "'s health is fully restored." << endl;
                break;
            }

            case 3: 
            {
                cout << player.name << " You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!" << endl;
                break;
            }

            case 4:
            {
                cout << player.name << " You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'" << endl;
                break;
            }

            case 5:
            {
                cout << "Are you sure you want to Quit ?(Y/N)" << endl;

                char quitChoice;

                cin >> quitChoice;

                if (quitChoice == 'Y' || quitChoice == 'y')
                {
                    keepPlaying = false;
                }
                else
                {
                    keepPlaying = true;
                }

                break;
            }
            default:
            {
                cout << "That's not a valid choice. Try again!" << endl;
                break;
            }
        }
        Utilities::waitForEnter();
        cout << "Goodbye, " << player.name << "! Thanks for playing" << endl;
    }

}