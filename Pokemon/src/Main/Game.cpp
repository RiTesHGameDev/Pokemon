#include <iostream>
#include <string>
#include "../../include/Utilities/Utilities.hpp"
#include "../../include/Main/Game.hpp"
#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../include/Pokemon/Pokemons/Pidgey.hpp"
using namespace N_Pokemons;
using namespace N_Utilities;
using namespace N_Pokemon;
using namespace N_Battle;
using namespace std;

namespace N_Main 
{
    Game::Game()
    {
        forestGrass = Grass{ "Forest",{new Zubat(),new Pidgey(),new Caterpie()}, 80 };
    }
    Game::~Game() {
        delete(wildPokemon);
    }
    void Game::visitPokeCentre(Player * player) {
        cout << "You have arrived at Poke Centre !" << endl;
        player->chosenPokemon->heal();
        cout << player->chosenPokemon->getName() << "'s health is fully restored." << endl;
    }
    void Game::gameLoop(Player* player)
    {
        bool keepPlaying = true;
        int choice;
        BattleManager battleManager;

        while (keepPlaying)
        {
            Utilities::clearConsole();
            cout << "What would you like to do next" << player->name << endl;
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
                WildEncounterManager encounterManager;
                Pokemon* wildPokemon = &encounterManager.getRandomPokemonFromGrass(forestGrass);
                wildPokemon->heal();
                battleManager.startBattle(player,wildPokemon);
                break;
            }

            case 2:
            {
                Game::visitPokeCentre(player);
                break;
            }

            case 3:
            {
                cout << player->name << " You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!" << endl;
                break;
            }

            case 4:
            {
                cout << player->name << " You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'" << endl;
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
            cout << "Goodbye, " << player->name << "! Thanks for playing" << endl;
        }

    }
}