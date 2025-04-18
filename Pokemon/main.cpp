#include <iostream>
using namespace std;

int main() 
{
    //Variable Intialization |
    string player_name;
    int choice;

    //Welcoming User[ Name ] |
    cout << "Enter your name : ";
    cin >> player_name;
    cout << "Great Start ! " << player_name << ",looks like you have understood main() function properly now !" << endl;
    cout << "_____________________________________________________" << endl;

    //Pokemon Game |
    cout << "|___________________| POKEMON |______________________|" << endl;
    cout << "Welcome to the world of Pokemon! I am Professor Oak." << endl;
    cout << "You can choose one of the following Pokemon : " << endl;
    cout << "1. Bulbasaur \n2. Charmender \n3. Squirtle" << endl;
    cout << "Which Pokemon would you like to choose ? Enter the number :";
    cout << "_____________________________________________________" << endl;

    cin >> choice;

    //Player Input |
    if (choice == 1) 
    {
        cout << "You chose [Bulbasaur!] A wise choice" << endl;
    }
    else if (choice == 2) 
    {
        cout << "You chose [Charmender!] A fiery choice." << endl;
    }
    else if (choice == 3) 
    {
        cout << "You chose [Squirtle!] A cool choice." << endl;
    }
    else 
    {
        cout << "Invalid choice.Please restart the game. " << endl;
    }
    
    //Professor Oak |
    cout << "_____________________________________________________" << endl;
    cout << "PROFESSOR OAK : Ah,an excellent choice! \nBut beware,Trainer, \nthis is only the beginning." << endl;
    cout << "Your journey is about to unfold. \nnow let's see id you've got what it takes to keep going! \nGood luck,and remember...Choose wisely!" << endl;
    cout << "_____________________________________________________" << endl;

    return 0;
}
