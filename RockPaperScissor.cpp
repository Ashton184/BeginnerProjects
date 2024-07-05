#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string hand;
    cout << "Hello! Let's play a Rock, Paper and Scissor with me!" << endl;

    cout << "Choose one: " << endl;
    cout<< "1: Rock" << endl << "2: Paper" << endl <<"3: Scissor";
    cin >> hand;

    srand(time(NULL));
    int Comp = (rand() % 3) +1;
    switch (Comp)
    {
    case 1: return 'Rock';
    case 2: return 'Paper';
    case 3: return 'Scissor';
    default: return 0;
    }

}
