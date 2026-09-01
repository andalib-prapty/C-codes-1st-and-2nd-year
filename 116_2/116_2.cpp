#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
long long int step_count = 0;

int fibonacci(long long int n) {
    if (n <= 1)
        return n;
        else
            return fibonacci(n - 1) + fibonacci(n - 2);
            step_count++;
}

int read_File(const string &filename){
 ifstream file(filename);
    int n;
    if (file.is_open()) {
        file >> n;
        file.close();
    } else {
        cerr << "Unable to open file!" << endl;
        return -1;
    }
    return n;
}

int main() {
    string filename = "fibonacci.txt";
    long long int num_elements = read_File(filename);

    if (num_elements < 0) {
        return 1;
    }

    cout << num_elements << endl;
    for (int i = 0; i < num_elements; ++i) {
        cout << fibonacci(i) << " ";
        step_count++;
    }
    cout << endl;
    cout<<step_count<<endl;

    return 0;
}

