#include <iostream>

using namespace std;

int main() {
    int x[] = {1, 3, 5, 7};
    int y[] = {24, 120, 336, 720};
    int n = 4;
    int value = 8;
    double result = 0.0;

    for(int i = 0; i < n; i++) {
        double term = y[i];

        for(int j = 0; j < n; j++) {
            if(j != i) {
                term *= (double)(value - x[j]) / (x[i] - x[j]);
            }
        }
        result += term;
    }

    cout << "Result: " << result << endl;
    return 0;
}



#include <iostream>
#include <vector>
using namespace std;

// Function to perform Lagrange interpolation
double lagrangeInterpolation(vector<pair<int, int>> points, double x) {
    double result = 0.0; // Initialize result

    int n = points.size(); // Number of data points

    // Loop through each point to calculate its contribution
    for (int i = 0; i < n; i++) {
        double term = points[i].second; // Start with y[i]

        // Compute the Lagrange basis polynomial L_i(x)
        for (int j = 0; j < n; j++) {
            if (i != j) {
                term *= (x - points[j].first) / (points[i].first - points[j].first);
            }
        }

        result += term; // Add the term to the result
    }

    return result; // Return the interpolated value
}

int main() {
    // Given data points
    vector<pair<int, int>> points = { {-2, 5}, {1, 7}, {3, 11}, {7, 34} };

    // Value of x for which we want to find y
    double x = 0;

    // Perform Lagrange interpolation
    double y = lagrangeInterpolation(points, x);

    // Display the result
    cout << "The interpolated value of y at x = " << x << " is " << y << endl;

    return 0;
}
