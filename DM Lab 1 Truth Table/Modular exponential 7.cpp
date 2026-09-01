//modular exponential b^n mod m
#include<iostream>
using namespace std;

int main(){
 int b, n, m;
 cin>>b>>n>>m;
 long long int x=1;
 int p = b%m;
 while(n>0){
    if(n%2==1){
        x=(x*p)%m;
    }
    p = (p*p)%m;
    n = n>>1;
 }
 cout<<x<<endl;
 return 0;
}
