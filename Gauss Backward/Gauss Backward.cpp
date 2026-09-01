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

void printTable(int x[], double diffTable[][4], int n) {
    cout<<"Backward Table:"<<endl;
    for (int i = 0; i < n; i++) {
        cout << x[i] << "\t" << diffTable[i][0];
        for (int j = 1; j <= i; j++) {
            cout << "\t" << diffTable[i][j];
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
        for (int i = n - 1; i >= j; i--) {
            diffTable[i][j] = diffTable[i][j - 1] - diffTable[i - 1][j - 1];
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
            if (k % 2 == 1) {
                product *= (p + (k + 1) / 2);
            } else {
                product *= (p - k / 2);
            }
        }

        int tableIndex = mid + (i - 1) / 2;
        if (tableIndex >= 0 && tableIndex < n) {
            result += (product * diffTable[tableIndex][i]) / factorial(i);
        }
    }


    printTable(x, diffTable, n);

    cout << "\nInterpolated value at x = " << desired_x << " is " << result << endl;

    return 0;
}
