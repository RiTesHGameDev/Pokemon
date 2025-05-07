
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Utilities.hpp"
#include <iostream>
#include <string>
#include <limits>
using namespace std;
#include "Pokemon.hpp"
#include "Player.hpp"
#include "ProfessorOak.hpp"
void gameLoop(Player & player) 
{
    bool keepPlaying = true;
    int choice;

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
                cout << player.name << "! You look around... but all the wild Pokemon are on vacation.Maybe try again later ? " << endl;
                break;

            case 2:
                cout << player.name << " You head to the PokeCenter, but Nurse Joy is out on a coffee break.Guess your Pokemon will have to tough it out for now!" << endl;
                break;

            case 3:
                cout << player.name << " You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!" << endl;
                break;

            case 4:
                cout << player.name << " You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'" << endl;
                break;

            case 5:
                cout << player.name << " You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!" << endl;
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

            default:
                cout << "That's not a valid choice. Try again!" << endl;
                break;
        }
        Utilities::waitForEnter();
        cout << "Goodbye, "<< player.name << "! Thanks for playing" << endl;
    }
    
}
int main()
{
    Pokemon charmander("Charmander", PokemonType::Fire, 100);

    ProfessorOak professor("PROFESSOR OAK");
    Player player("Ash", charmander);

    // Greet the player and offer Pokemon choices
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);
    professor.explainMainQuest(player);

    gameLoop(player);

    // Conclude the first chapter
    /*cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";*/

    system("pause");
    return 0;
}