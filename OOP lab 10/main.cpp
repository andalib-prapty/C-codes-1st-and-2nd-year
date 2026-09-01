#include<iostream>

using namespace std;

int main(){
 int L1, U1, L2, U2;

 cin>>L1>>U1>>L2>>U2;

 int result;

 result= (U1-L1+1)*(U2-L2+1)*(L1+L2)+((U1-L1+1)*(U2-L2+1)*(U1+L1)/2)+(U2-L2+1)*((U1-L1+1)*(U2+L2)/2);

 cout<<result<<endl;
}
