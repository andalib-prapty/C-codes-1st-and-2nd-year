//Game of Chomp
#include <iostream>

using namespace std;

int main()
{
    string player;
    int game[10], i = 0, ball = 20, choice = 0;
    cout << "Which Role do You want to Play? P1 or P2?" << endl;
    cin >> player;

    if (player == "P1") {
        while (ball) {
            cin >> game[i];
            if (game[i] < 1 || game[i] > 4) {
                cout << "Invalid input." << endl;
                continue;
            }
            choice = game[i];
            ball = ball - choice;
            i++;

            if (ball == 1) {
                cout << "You win!" << endl;
                break;
            }

            choice = (ball % 5 == 0) ? 4 : (ball % 5 - 1);
            if(choice==0){
                choice=1;
            }
            cout << "My turn:" <<choice<< endl;
            ball = ball - choice;

            if (ball == 1) {
                cout << "I win" << endl;
                break;
            }
//remaining ball
cout<<"Remaining Ball: "<<ball<<endl;
        }
    }
    else {
        while (ball) {
            choice = (ball % 5 == 0) ? 4 : (ball % 5 - 1);
            cout << "My turn:" <<choice<< endl;
            ball = ball - choice;

            if (ball == 1) {
                cout << "I win" << endl;
                break;
            }

            cin >> game[i];
            if (game[i] < 1 || game[i] > 4) {
                cout << "Invalid input." << endl;
                continue;
            }
            choice = game[i];
            ball = ball - choice;
            i++;

            if (ball == 1) {
                cout << "You win!" << endl;
                break;
            }
            cout<<"Remaining Ball: "<<ball<<endl;

        }
    }

    return 0;
}

