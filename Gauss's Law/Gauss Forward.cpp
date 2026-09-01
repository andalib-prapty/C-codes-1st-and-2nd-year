//Gauss's Forward
#include <iostream>
#include <iomanip>
using namespace std;


int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}


void printTable(double diffTable[][4], int n) {
    cout << "Forward Difference Table:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << setw(10) << diffTable[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int x[] = {1, 3, 5, 7};
    int y[] = {24, 120, 336, 720};
    int n = 4;
    double diffTable[4][4] = {0};


    for (int i = 0; i < n; i++) {
        diffTable[i][0] = y[i];
    }


    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            diffTable[i][j] = diffTable[i + 1][j - 1] - diffTable[i][j - 1];
        }
    }


    int mid = n / 2;

    double h = x[1] - x[0];


    double desired_x = 8;
    double p = (desired_x - x[mid]) / h;

    double result = y[mid];


    for (int i = 1; i < n; i++) {
        double product = p;
        for (int k = 1; k < i; k++) {
            if (k % 2 == 0) {
                product *= (p + k / 2);
            } else {
                product *= (p - (k + 1) / 2);
            }
        }
        result += (product * diffTable[mid - i / 2][i]) / factorial(i);
    }


    printTable(diffTable, n);

    cout << "\nInterpolated value at x = " << desired_x << " is " << result << endl;

    return 0;
}
