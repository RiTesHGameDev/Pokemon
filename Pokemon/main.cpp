#include <iostream>
#include <string>
#include <limits>
using namespace std;

void clearConsole() 
{
    #ifdef _WIN32
        system("cls");
    #else
        (void)system("clear");
    #endif
}
void waitForEnter() 
{
    cin.get();
}
enum class PokemonChoice
{
    Bulbasaur = 1,
    Charmander,
    Squirtle,
    Pikachu,//default
};
enum class PokemonType
{
    Fire,
    Electric,
    Water,
    Earth,
    Grass,
    Normal,//default
};
class Pokemon
{
    //PROPERTIES
    public:
        string name;
        PokemonType type;
        int health;

        //CONTRUCTORS
        Pokemon() //DEFAULT CONTRUCTOR
        {
            name = "Unknown";
            type = PokemonType::Normal;
            health = 50;
        }

        Pokemon(string p_name, PokemonType p_type, int p_health)  //PARAMETERIZED CONSTRUCTOR
        {
            name = p_name;
            type = p_type;
            health = p_health;
        }

        Pokemon(const Pokemon &other) //DEEP COPY CONTRUCTOR
        {
            name = other.name;
            type = other.type;
            health = other.health;
        }

        ~Pokemon() //DESTRUCTOR
        {
            //cout << name << " has been Destroyed." << endl;
        }
        //ATTACK METHOD
        void attack()
        {
            cout << "Attack with a powerful move!" << endl;
        }
};
class Player
{
    //PROP0PERTIES OR ATTRIBUTES
    public:
        string name;
        Pokemon chosenPokemon;

        Player() //DEFAULT CONTRUCTOR
        {
            name = "Trainer";
            chosenPokemon = Pokemon();
        }

        //PARAMETERIZED CONSTRUCTOR
        Player(string p_name,Pokemon p_chosenPokemon)
        {
            name = p_name;
            chosenPokemon = p_chosenPokemon;
        }

        //METHOD FOR CHOSSING POKEMON
        void choosePokemon(int choice)
        {
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
            default:
                chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
                break;
            }
            cout << "Player " << name << " chose " << chosenPokemon.name << endl;
            waitForEnter();
        }
      /*  void choosePokemon(int choice) 
        {
            choosePokemon(static_cast <PokemonChoice> (choice));
        }*/
};
class ProfessorOak
{
    //PROPERTIES
    public:
        string name;
        
        //CONTRUCTOR
        ProfessorOak(string p_name) 
        {
            name = p_name;
        }

        //METHOD FOR GREETING PLAYER
        void greetPlayer(Player& player)
        {
            cout << "|___________________| POKEMON |______________________|" << endl;
            cout << name << ": Hello there! Welcome to the world of Pokemon" << endl;
            waitForEnter();
            cout << name << ": My name is Oak.People call me the Pokemon Professor!" << endl;
            waitForEnter();
            cout << name << ": But enough about me.Let's talk about you" << endl;
            cout << "_____________________________________________________" << endl;
            waitForEnter();
        }
        //METHOD FOR OFFERING POKEMON CHOICE
        void offerPokemonChoices(Player& player)
        {
            cout << name << ": First of all , tell me,What's your name ?" << endl;
            getline(cin, player.name);
            cout << name << ": Ah! " << player.name << " Nice to meet you!" << endl;
            waitForEnter();
            cout << name << ": Are you ready for the adventure! But Dont you think ?" << endl;
            waitForEnter();
            cout << name << ": first you will need to have a Pokemon of your own." << endl;

            cout << "_____________________________________________________" << endl;
            waitForEnter();
            cout << name << ": I have three Pokemon here with me.They are all quite feisty! \n" << endl;
            waitForEnter();
            cout << name << ": Choose wisely..." << endl;
            cout << "1. Bulbasaur - The grass type.Calm and collected! \n2. Charmander - The fire type.A real hothead! \n3. Squirtle - The water type.Cool and cucumber!" << endl;

            int choice;
            cout << "PROFESSOR OAK : So,which Pokemon would you like to choose ? Enter the number :";
            cin >> choice;
            cout << "_____________________________________________________" << endl;
            player.choosePokemon(choice);
            cout << "_____________________________________________________" << endl;
            waitForEnter();
        }
        void explainMainQuest(Player &player ) 
        {
            clearConsole();
            cout << "PROFESSOR OAK : Oak-ay " << player.name << "!, I am about to explain you about your upcoming grand adventure.\n";
            waitForEnter();
            cout << "PROFESSOR OAK : You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck!\n";
            waitForEnter();
            cout << "PROFESSOR OAK : Your mission, should you choose to accept it—and trust me, you really don’t have a choice—is to collect all the Pokémon Badges and conquer the Pokémon League.\n";
            waitForEnter();
            cout << "\n" << player.name << ": Wait... that sounds a lot like every other Pokémon game out there...\n";
            waitForEnter();

            cout << "PROFESSOR OAK : Shhh! Don't break the fourth wall, " << player.name << "! This is serious business!\n";
            waitForEnter();
            cout << "\nPROFESSOR OAK : To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter.\n";
            waitForEnter();
            cout << "PROFESSOR OAK : Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!\n";
            waitForEnter();
            cout << "\n" << player.name << ": Sounds like a walk in the park... right?\n";
            waitForEnter();

            cout << "PROFESSOR OAK : Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one.\n";
            waitForEnter();
            cout << "\nPROFESSOR OAK : So, what do you say? Are you ready to become the next Pokémon Champion?\n";
            waitForEnter();
            cout << "\n" << player.name << ": Ready as I’ll ever be, Professor!\n";
            waitForEnter();
            cout << "\nPROFESSOR OAK : That’s the spirit! Now, your journey begins...\n";
            waitForEnter();
            cout << "PROFESSOR OAK : But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";
            waitForEnter();
        }
};
void gameLoop(Player & player) 
{
    bool keepPlaying = true;
    int choice;

    while (keepPlaying)
    {
        clearConsole();
        cout << "What would you like to do next" << player.name << endl;
        cout << "1.Battle wild pokemon" << endl;
        cout << "2.Visit PokeCenter" << endl;
        cout << "3.Challenge Gyms" << endl;
        cout << "4.Enter Pokemon League" << endl;
        cout << "5.Quit" << endl;

        cin >> choice;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

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
        waitForEnter();
        cout << "Goodbye, "<< player.name << "! Thanks for playing" << endl;
    }
    
}
int main()
{
    Pokemon charmander("Charmander", PokemonType::Fire, 100);

    ProfessorOak professor("PROFESSOR OAK");
    Player player("Ash",charmander);

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
#include "header.h"