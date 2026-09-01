//Two sets and find AllxAlly, AllxSomey, SomexAlly, SomexSomey
#include <iostream>
#include <vector>
using namespace std;
bool P(int x, int y){
 return x-y>1;
}
bool AllxAlly(const vector<int> &A, const vector<int> &B){
for(int x:A){
    for(int y:B){
        if(!P(x,y)){
            return false;
        }
    }
}
return true;
}

bool AllxSomey(const vector<int> &A, const vector<int> &B){
for(int x:A){
    bool c=false;
    for(int y:B){
        if(P(x,y)){
            c = true;
            break;
        }
    }
    if(!c)
        return false;
    }
    return true;
}

bool SomexAlly(const vector<int> &A, const vector<int> &B){
    for (int x:A){
        bool all=true;
        for(int y:B){
            if (!P(x,y)){
                all=false;
                break;
            }
        }
        if(all){
            return true;
        }
    }
    return false;
}
bool Somexsomey(const vector<int> &A, const vector<int> &B){
    for(int x:A){
        for(int y:B){
            if(P(x,y))
                return true;
        }
    }
    return false;

}
int main() {
  int sizeA, sizeB;
  cin>>sizeA>>sizeB;
  vector<int>A(sizeA);
  vector<int>B(sizeB);
  for(int &a:A){
    cin>>a;
  }
  for(int &b:B){
    cin>>b;
  }
  cout<<"VxVy:"<<(AllxAlly(A,B)?"True":"False")<<endl;
  cout<<"VxEy:"<<(AllxSomey(A,B)?"True":"False")<<endl;
  cout<<"ExVy:"<<(SomexAlly(A,B)?"True":"False")<<endl;
  cout<<"ExEy:"<<(Somexsomey(A,B)?"True":"False")<<endl;
    return 0;
}
