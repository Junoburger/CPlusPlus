#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int MAX_CHIPS = 100;
const float MAX_TURN = .5;

int main()
{
    bool player1Turn = true;
    bool gameOver = false;
    int chipsLeftInPile = 0;
    int chipsTaken = 0;
    int maxPerTurn = 0;
    string playerNames[2];

    //seeding the number generator
    srand(time(0));

    cout << "Player 1, please enter your name: \n";
    cin >> playerNames[0];
    cout << "Player 2, please enter your name: \n";
    cin >> playerNames[1];
    cout << "Thanks and good luck!\n";
    cout << playerNames[0] << " & " << playerNames[1] << " are ready to play!" << endl;

    //start the game with a random number of chips in the pile
    chipsLeftInPile = (rand() % MAX_CHIPS) + 1;
    cout << "This round starts with " << chipsLeftInPile << " chips in the pile\n";
    if (player1Turn)
    {
        cout << playerNames[0] << " How many chips would you like? \n";
    }
    else
    {
        cout << playerNames[1] << " How many chips would you like?\n";
    }
    maxPerTurn = (MAX_TURN * chipsLeftInPile);
    cout << "You can  take up to  " << maxPerTurn << " chips" << endl;
    cin >> chipsTaken;
    chipsTaken = (rand() % maxPerTurn) + 1;

    cout << "Number taken: " << chipsTaken << endl;

    return 0;
}