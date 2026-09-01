#include <iostream>

using namespace std;
class A{
 public:
     void info(){
      cout<<"I am an animal"<<endl;
     }

};
class B:virtual public A{
public:
    B(){
    cout<<"Inside Class B"<<endl;
    }
};
class C:virtual public A{
    public:
    C(){
    cout<<"Inside Class C"<<endl;
    }
};
class D: public B, public C{
};
int main(){
 D d;
 d.info();
 return 0;
}
