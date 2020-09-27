#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    for (int hours = 0; hours < 24; hours++)
    {
        for (int minutes = 0; minutes < 60; minutes++)
        {
            for (int seconds = 0; seconds < 60; seconds++)
            {
                cout << hours << ":" << minutes << ":" << seconds << "\n";
            }
        }
    }
}