#include <bits/stdc++.h>
using namespace std;
int Y(int M, int m) {
    for(int i=1; i<m; i++)
        if(M*i % m == 1)
            return i;
}
int main() {
    int a, b, c, m1, m2, m3;
    cin >> a >>b>>c>> m1>>m2>>m3;
    int M = m1 * m2 * m3;
    int M1 = M/m1;
    int M2 = M/m2;
    int M3 = M/m3;
    int y1, y2, y3;
    if(M1%m1==0 || M2%m2==0 || M3%m3==0)
        cout << "There is no solution" << endl;
    else {
        y1 = Y(M1, m1);
        y2 = Y(M2, m2);
        y3 = Y(M3, m3);
              int x = a*M1*y1 + b*M2*y2 + c*M3*y3;
        cout << "x: " << x << endl;
    }
    return 0;
}
