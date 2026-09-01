#include <iostream>
#include <fstream>

using namespace std;


int fib_recursive(int n, int& steps) {
    steps++;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib_recursive(n - 1, steps) + fib_recursive(n - 2, steps);
}

int main() {

    ifstream infile("fibonacci.txt");
    int n;
    infile >> n;
    infile.close();

    int steps_recursive = 0;
    int result = fib_recursive(n, steps_recursive);

    cout << "Recursive Fibonacci result: " << result << endl;
    cout << "Recursive Fibonacci Steps: " << steps_recursive << endl;

    return 0;
}
