#include <iostream>
#include <vector>
using namespace std;

// Function to calculate integration using the Trapezoidal Rule
double trapezoidal_rule(const vector<double>& y_values, double h) {
    double sum = y_values[0] + y_values.back(); // First and last terms
    for (size_t i = 1; i < y_values.size() - 1; i++) {
        sum += 2 * y_values[i]; // Intermediate terms
    }
    return (h / 2) * sum;
}

// Function to calculate integration using Simpson's 1/3 Rule
double simpsons_one_third_rule(const vector<double>& y_values, double h) {
    double sum = y_values[0] + y_values.back(); // First and last terms
    for (size_t i = 1; i < y_values.size() - 1; i++) {
        sum += (i % 2 == 0 ? 2 : 4) * y_values[i]; // Alternating 4 and 2
    }
    return (h / 3) * sum;
}

// Function to calculate integration using Simpson's 3/8 Rule
double simpsons_three_eighth_rule(const vector<double>& y_values, double h) {
    double sum = y_values[0] + y_values.back(); // First and last terms
    for (size_t i = 1; i < y_values.size() - 1; i++) {
        sum += (i % 3 == 0 ? 2 : 3) * y_values[i]; // Alternating 3 and 2
    }
    return (3 * h / 8) * sum;
}

int main() {
    // Example input values from the screenshots
    vector<double> x_values = {0.0, 0.5, 1.0}; // Example for h = 0.5
    vector<double> y_values = {1.0000, 0.6667, 0.5000};

    // Step size (h)
    double h = x_values[1] - x_values[0];

    // Calculate integrals using different methods
    double trapezoidal = trapezoidal_rule(y_values, h);
    double simpsons_1_3 = simpsons_one_third_rule(y_values, h);
    double simpsons_3_8 = simpsons_three_eighth_rule(y_values, h);

    // Output results
    cout << "Trapezoidal Rule Result: " << trapezoidal << endl;
    cout << "Simpson's 1/3 Rule Result: " << simpsons_1_3 << endl;
    cout << "Simpson's 3/8 Rule Result: " << simpsons_3_8 << endl;

    return 0;
}

