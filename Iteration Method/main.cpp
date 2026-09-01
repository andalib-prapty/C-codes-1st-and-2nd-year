#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double g(double x) {
    return cbrt(x+1);
}


int main() {
    double x0 = 1.0;
    double tolerance = 0.0001;
    int max_iter = 100;
    int n = 0;
    double x_n = g(x0);


    cout << "Iteration     x_n       g(x_n)       |x_{n+1} - x_n|" << endl;
    cout << "----------------------------------------------------" << endl;

    while (fabs(x_n - x0) >= tolerance && n < max_iter) {

        cout << setw(5) << n + 1 << "   " << fixed << setprecision(6) << x0
             << "   " << x_n << "   " << fabs(x_n - x0) << endl;

        x0 = x_n;
        x_n = g(x0);
        n++;
    }

    if (fabs(x_n - x0) < tolerance) {
        cout << "----------------------------------------------------" << endl;
        cout << "The approximate root: " << x_n << endl;
    } else {
        cout << "----------------------------------------------------" << endl;
        cout << "Invalid" << endl;
    }

    return 0;
}

