#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char Computer() {
    int move;
    srand(time(NULL));
    move = rand() % 3;
    if (move == 0)
    {
        return 'p';
    }
    if (move == 1)
    {
        return 's';
    }
    return 'r';
}

int Result(char PlayerMove, char ComputerMove) {
    if (PlayerMove == ComputerMove)
    {
        return 0;
    }
    if (PlayerMove == 's' && ComputerMove == 'r')
    {
        return -1;
    }
    if (PlayerMove == 's' && ComputerMove == 'p')
    {
        return 1;
    }
    if (PlayerMove == 'r' && ComputerMove == 'p')
    {
        return -1;
    }
    if (PlayerMove == 'r' && ComputerMove == 's')
    {
        return 1;
    }
    if (PlayerMove == 'p' && ComputerMove == 'r')
    {
        return 1;
    }
    if (PlayerMove == 'p' && ComputerMove == 's')
    {
        return -1;
    }
    return 0;
}
int main() {
    char PlayerMove;
    cout <<" -------Welcome-------" << endl;
    cout<<"Let's play Rock, Scissors, Paper!"<< endl;
    cout<<"Please choose one: "<< endl;
    cout<<"r: ROCK" << endl <<"p: PAPER" << endl <<"s: SCISSORS"<< endl;
    cin >> PlayerMove;
    while (PlayerMove != 'r' && PlayerMove != 'p' && PlayerMove != 's')
    {
        cout <<"Invalid Input! Please try again";
        cin >> PlayerMove;
    }
    char ComputerMove = Computer();
    int result = Result(PlayerMove, ComputerMove);
    if (result == 0)
    {
        cout<<"Draw!";
    }
    else if (result == 1)
    {
        cout << "You Win!";
    }
    else
    {
        cout << "Computer Win!";
    }
    return 0;
}
