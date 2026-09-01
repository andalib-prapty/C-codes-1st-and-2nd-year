#include <iostream>

using namespace std;

int main()
{
    int n, temp;
    cout<<"No. of Elements:"<<endl;
    cin>>n;
int arra[n];
for(int i=0; i<n; i++){
    cin>>arra[i];
}
for(int i=0; i<n/2; i++){
    int temp=arra[i];
    arra[i]=arra[n-i-1];
    arra[n-i-1]=temp;
}
cout<<"Reversed"<<endl;
for(int i=0; i<n; i++){
    cout<<arra[i]<<endl;
}
return 0;
}


