#include<iostream>
using namespace std;
int main(){
 int n,x, loca=0;
 cout<<"No. of Elements:"<<endl;
 cin>>n;
 int arr[n];
 for(int i=0; i<n; i++){
    cin>>arr[i];
 }
 cout<<"Element to Search:"<<endl;
 cin>>x;
 for(int j=0; j<n; j++){
    if(x==arr[j]){
        cout<<x<<"is present at location"<<j+1<<endl;
        loca++;
    }

 }
 cout<<x<<"is present "<<loca<<" times in the array"<<endl;
 return 0;
}
