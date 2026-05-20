#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string arr[3] = {"rock", "paper", "scissor"};
    string user;
    int again;

    srand(time(0));

    cout << "**************Welcome to Rock Paper Scissors!**************" << endl;

    do {
        cout << "\nChoose: rock, paper, or scissor: ";
        cin >> user;

        int random = rand() % 3;
        string bot = arr[random];

        cout << "I picked: " << bot << endl;

        if(user == bot)
        {
            cout << "Draw!" << endl;
        }
        else if(
            (user == "rock" && bot == "scissor") ||
            (user == "paper" && bot == "rock") ||
            (user == "scissor" && bot == "paper")
        )
        {
            cout << "You win!" << endl;
        }
        else
        {
            cout << "I win!" << endl;
        }
        cout << endl;
        cout << "Would you like to play this game again? (1 = yes, 0 = no): ";
        cin >> again;

    } while(again == 1);

    cout << "Thanks for playing!" << endl;

    return 0;
}