//differenciation 6.1
#include <iostream>
#include <vector>
using namespace std;


double first_derivative(const vector<double>& differences, double h) {
    double result = (1 / h) * (differences[0]
                               - 0.5 * differences[1]
                               + (1.0 / 3) * differences[2]
                               - 0.25 * differences[3]
                               + 0.2 * differences[4]);
    return result;
}


double second_derivative(const vector<double>& differences, double h) {
    double result = (1 / (h * h)) * (differences[1]
                                     - (1.0 / 12) * differences[2]
                                     + (1.0 / 12) * differences[3]
                                     - (5.0 / 6) * differences[4]);
    return result;
}

int main() {

    vector<double> differences = {0.6018, 0.1333, 0.0294, 0.0067, 0.0013};
    double h = 0.2;


    double dy_dx = first_derivative(differences, h);
    cout << "First derivative (dy/dx) at x = 1.2: " << dy_dx << endl;


    double d2y_dx2 = second_derivative(differences, h);
    cout << "Second derivative (d2y/dx2) at x = 1.2: " << d2y_dx2 << endl;

    return 0;
}
