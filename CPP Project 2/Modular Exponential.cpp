#include<iostream>
using namespace std;
class Base{
 public:
     int x;
 protected:
    int y;
 private:
    int z;
};
class PublicDerived: public Base{

};
 class ProtectedDerived: protected Base{

 };
 class PrivateDerived: private Base{

 };
int main(){

}

