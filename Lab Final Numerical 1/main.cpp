#include <iostream>

using namespace std;

int main()
{
    int x[]={-2,1,3,7};
    int y[]={5,7,11,34};
    int n=4;
    int value = 0;
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

    return 0;
}


















