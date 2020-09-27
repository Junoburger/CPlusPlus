// Hello world by Juno Burger
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{

    string first_name, last_name;
    string favorite_food;
    int dice = 0;

    // seed the random number generator
    srand(time(0));

    dice = (rand() % 6) + 1;
    cout << "You rolled a " << dice << endl;

    cout << "Enter you first name: \n";
    cin >> first_name;

    cout << "Enter your last name: \n";
    cin >> last_name;

    cout << "Hello, your full name is: " << first_name << " " << last_name << endl;
    // dice = (rand() % 6) + 1;
    // cout << "You rolled a " << dice << endl;

    cout << first_name << " what is your favorite food? ";
    cin >> favorite_food;
    cout << first_name << "'s favorite food is " << favorite_food << endl;

    return 0;
}