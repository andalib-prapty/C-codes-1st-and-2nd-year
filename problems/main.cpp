#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pin;
        int press = 0;
        cin >> pin;
        string device = "1234567890";
        for (int i = 0, j = 0; i < 4 && j < 10; i++, j++) {
            if (pin[i] != device[j]) {
                press++;
            } else {
                press += 2;
            }
        }
        cout << press << endl;
    }

    return 0;
}
