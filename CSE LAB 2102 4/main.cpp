#include<iostream>

using namespace std;

int main(){
int coin, de[4]={0,0,0,0}, c[4]={25,10,5,1};
cin>>coin;
for(int i=0; i<4; i++){
while(coin>=c[i]){
    coin-=c[i];
    de[i]++;
    cout<<coin<<endl;
}
}
cout<<"coin exchange: "<<endl;
for(int j=0; j<4; j++){
cout<<de[j]<<"X"<<c[j]<<" ";
return 0;
}
}
