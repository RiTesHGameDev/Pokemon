#include <iostream>
using namespace std;

enum PokemonChoice
{
    Bulbasaur,
    Charmander,
    Squirtle,
    InvalidChoice,
};
int main() 
{
    //Variable Intialization |
    string player_name;
    int choice;
    PokemonChoice chosen_pokemon = InvalidChoice;

    //Introduction by Professor |
    cout << "|___________________| POKEMON |______________________|" << endl;
    cout << "PROFESSOR OAK : Hello there! Welcome to the world of Pokemon" << endl;
    cout << "PROFESSOR OAK : My name is Oak.People call me the Pokemon Professor! \nPROFESSOR OAK : But enough about me.Let's talk about you" << endl;
    cout << "_____________________________________________________" << endl;
    //Taking Player name as input |
    cout << "PROFESSOR OAK : First of all , tell me,What's your name ?" << endl;
    cin >> player_name;
    cout << "_____________________________________________________" << endl;
    cout << "PROFESSOR OAK : Ah! " << player_name << " Nice to meet you!" << endl;
    cout << "Are you ready for the adventure! But Dont you think ? first you will need to have a Pokemon of your own." << endl;
    //Pokemon Choosing Options |
    cout << "_____________________________________________________" << endl;
    cout << "PROFESSOR OAK : I have three Pokemon here with me.They are all quite feisty! \nPROFESSOR OAK : Choose wisely..." << endl;
    cout << "1. Bulbasaur - The grass type.Calm and collected! \n2. Charmander - The fire type.A real hothead! \n3. Squirtle - The water type.Cool and cucumber!" << endl;
    cout << "PROFESSOR OAK : So,which Pokemon would you like to choose ? Enter the number :";
    cin >> choice;
    cout << "_____________________________________________________" << endl;

    //Store the chosen Pokemon based on User Input |
    switch (choice)
    {
        case 1:
            chosen_pokemon = Bulbasaur;
            break;
        case 2:
            chosen_pokemon = Charmander;
            break;
        case 3:
            chosen_pokemon = Squirtle;
            break;
        default:
            chosen_pokemon = InvalidChoice;
            break;
    }
    //Respond back on Chosen Pokemon
    switch (chosen_pokemon)
    {
    case Bulbasaur:
        cout << "PROFESSOR OAK : A fine choice! Bulbasaur !" << endl;
        break;
    case Charmander:
        cout << "PROFESSOR OAK : A fiery choice! Charmander !" << endl;
        break;
    case Squirtle:
        cout << "PROFESSOR OAK : A wise choice! Squirtle !" << endl;
        break;
    default:
        cout << "PROFESSOR OAK : That's is not in the options but Let me do it for you. " << endl;
        chosen_pokemon = Charmander;
        cout << "PROFESSOR OAK : A fiery choice! Charmander !" << endl;
        break;
    }
    
    //Concluding |
    cout << "_____________________________________________________" << endl;
    cout << "PROFESSOR OAK :" << ( chosen_pokemon == Charmander ? "Charmander" : chosen_pokemon == Bulbasaur ? "Bulbasaur" : "Squirtle" ) << " and you " << player_name << " are going to be the best of friends." << endl;
    cout << "PROFESSOR OAK : Your journey begins now! Get ready to explore" << endl;
    cout << "_____________________________________________________" << endl;

    return 0;
}
