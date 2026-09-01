#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char grid[10][10];
        int points = 0;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> grid[i][j];
            }
        }

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] == 'X') {
                    int distance = max(abs(i - 4), abs(j - 4)); // Calculate the distance from the center
                    points += (6 - distance); // Calculate points based on the ring
                }
            }
        }

        cout << points << endl;
    }

    return 0;
}
