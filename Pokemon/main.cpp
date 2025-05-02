#include <iostream>
#include <string>
using namespace std;

enum class PokemonChoice
{
    Bulbasaur = 1,
    Charmander,
    Squirtle,
    InvalidChoice,
};
enum class PokemonType
{
    Fire,
    Electric,
    Water,
    Earth,
    Normal,
    Grass,
};
class Pokemon
{
    //PROPERTIES
public:
    string name;
    PokemonType type;
    int health;

    //CONTRUCTORS
public:

    Pokemon() //DEFAULT CONTRUCTOR
    {
        name = "Pikachu";
        type = PokemonType::Electric;
        health = 10;
        cout << "A new Pokemon " << name << " has been created with the default !" << endl;
    }
    Pokemon(string p_name, PokemonType p_type, int p_health)  //PARAMETERIZED CONSTRUCTOR
    {
        name = p_name;
        type = p_type;
        health = p_health;
        cout << "A new Pokemon " << name << " has been created !" << endl;
    }
    Pokemon(const Pokemon &other) //DEEP COPY CONTRUCTOR
    {
        name = other.name;
        type = other.type;
        health = other.health;
        cout << "A new Pokemon has been copied from !" << other.name << endl;
    }

    //DESTRUCTOR
    ~Pokemon() 
    {
        cout << name << "has been released." << endl;
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

    //CONTRUCTORS
public:
    Player() //DEFAULT CONTRUCTOR
    {
        name = "Trainer";
        chosenPokemon = Pokemon();
        cout << "A new player named " << name << " has been created! with default !" << endl;
    }
    Player(string p_name,Pokemon p_chosenPokemon) //PARAMETERIZED CONSTRUCTOR
    {
        name = p_name;
        chosenPokemon = p_chosenPokemon;
        cout << "A new player named " << name << " has been created!" << endl;
    }
    Player(const Player &other) //DEEP COPY CONTRUCTOR
    {
        name = other.name;
        chosenPokemon = other.chosenPokemon;
        cout << "A new Player has been copied from !" << other.name << endl;
    }

    //METHOD FOR CHOSSING POKEMON
    void choosePokemon(int choice)
    {
        switch ((PokemonChoice)choice)
        {
        case PokemonChoice::Bulbasaur:
            chosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100);
            //cout << "PROFESSOR OAK : A fine choice! Bulbasaur !" << endl;
            break;

        case PokemonChoice::Charmander:
            chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
            cout << "PROFESSOR OAK : A fiery choice! Charmander !" << endl;
            break;
        case PokemonChoice::Squirtle:
            chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
            cout << "PROFESSOR OAK : A wise choice! Squirtle !" << endl;
            break;
        default:
            cout << "PROFESSOR OAK : That's is not in the options but Let me do it for you. " << endl;
            chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
            cout << "PROFESSOR OAK : I have chosen Pikachu for you !" << endl;
            break;
        }
        cout << "Player " << name << " chose " << chosenPokemon.name << endl;
    }
};
class ProfessorOak
{
    //PROPERTIES
public:
    string name;
    Player player;

    //CONTRUCTOR
    /*ProfessorOak(string p_name) 
    {
        name = p_name;
        cout << "Here is our Pokemon Professor :" << name << endl;
    }*/

    //METHOD FOR GREETING PLAYER
    void greetPlayer(Player& player)
    {
        cout << "|___________________| POKEMON |______________________|" << endl;
        cout << name << ": Hello there! Welcome to the world of Pokemon" << endl;
        cout << name << ": My name is Oak.People call me the Pokemon Professor!" << endl;
        cout << name << ": But enough about me.Let's talk about you" << endl;
        cout << "_____________________________________________________" << endl;
    }
    //METHOD FOR OFFERING POKEMON CHOICE
    void offerPokemonChoices(Player& player)
    {
        cout << name << ": First of all , tell me,What's your name ?" << endl;
        getline(cin, player.name);
        cout << name << ": Ah! " << player.name << " Nice to meet you!" << endl;
        cout << name << ": Are you ready for the adventure! But Dont you think ?" << endl;
        cout << name << ": first you will need to have a Pokemon of your own." << endl;

        cout << "_____________________________________________________" << endl;
        cout << name << ": I have three Pokemon here with me.They are all quite feisty! \n" << name << ": Choose wisely..." << endl;
        cout << "1. Bulbasaur - The grass type.Calm and collected! \n2. Charmander - The fire type.A real hothead! \n3. Squirtle - The water type.Cool and cucumber!" << endl;

        int choice;
        cout << "PROFESSOR OAK : So,which Pokemon would you like to choose ? Enter the number :";
        cin >> choice;
        cout << "_____________________________________________________" << endl;
        player.choosePokemon(choice);
        cout << "_____________________________________________________" << endl;
    }
};
int main()
{
    Player player;
    ProfessorOak professor;
    Pokemon placeholderPokemon;

    placeholderPokemon.name = "Pikachu";
    placeholderPokemon.type = PokemonType::Electric;
    placeholderPokemon.health = 40;

    professor.name = "Professor Oak";
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    //Concluding |
    cout << professor.name << " : " << player.chosenPokemon.name << " and you " << player.name << " are going to be best of friends !" << endl;
    cout << professor.name << " : Your journey begins now! Get ready to explore" << endl;
    cout << "_____________________________________________________" << endl;

    return 0;
}