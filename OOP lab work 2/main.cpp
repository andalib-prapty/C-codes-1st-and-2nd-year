#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string show(bool a){
 if(a)
    return "T";
 else
    return "F";
}
int implication(int x, int y){
 if(x){
    return y;
 }
 else
    return 1;
}

int main()
{
  bool p,q;
  cout<<"p  q   r  p->(q^r)    (p->q)^r"<<endl;
  cout<<"--------------------------------------------"<<endl;
  for(int i=0;i<=1;i++){
    for(int j=0; j<=1; j++){
            for(int k=0; k<=1; k++){
                cout<<show(i)<<"    "<<show(j)<<"   "<<show(k)<<"   "<<show(implication(i, j&k))<<"     "<<show(implication(i,j)&k)<<endl;
                int tru=implication(i, j&k);
                int fal=implication(i,j)&k;
                if(tru==1&&fal==1){
                    cnt++;
                }
            }
    }
  cout<<endl;
  if(cnt==8){
    cout<<"Equivalent"<<endl;
  }
  else{
    cout<<"Not Equivalent"<<endl;
  }
