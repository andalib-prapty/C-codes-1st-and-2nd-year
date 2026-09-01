#include <iostream>
#include <fstream>

using namespace std;

int fib_iterative(int n, int& steps) {
    int a = 0, b = 1, temp;
    steps = 0;

    for (int i = 0; i < n; i++) {
        steps++;
        temp = a;
        a = b;
        b = temp + b;
    }

    return a;
}

int main() {
   s
    ifstream infile("fibonacci.txt");
    int n;
    infile >> n;
    infile.close();

    int steps_iterative = 0;
    int result = fib_iterative(n, steps_iterative);

    cout << "Iterative Fibonacci result: " << result << endl;
    cout << "Iterative Fibonacci Steps: " << steps_iterative << endl;

    return 0;
}


