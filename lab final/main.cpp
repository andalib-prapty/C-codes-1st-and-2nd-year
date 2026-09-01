//calculates n factorial modulo m
#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
long long x=1;
    for(int i=2; i<=n; i++)
        x=(x*i)%m;

    cout<<x%m<<"\n";
    return 0;s
}
