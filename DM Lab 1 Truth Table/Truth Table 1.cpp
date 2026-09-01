//negation,conjunction, disjuction, implication, biconditional
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
  cout<<"p  q   -p  p&q     p|q     p->q    p<->q"<<endl;
  cout<<"-----------------------------------------------------"<<endl;
  for(int i=0;i<=1;i++){
    for(int j=0; j<=1; j++){
        cout<<show(i)<<"  "<<show(j)<<"   "<<show(!i)<<"   "<<show(i&j)<<"        "<<show(i|j)<<"       "<<show(implication(i,j))<<"      "<<show(implication(i,j)&implication(j,i))<<endl;
    }
  }
  return 0;
}
