#include <iostream>

using namespace std;
class A{
 private:
     int x;
 protected:
    int y;
 public:
    int z;
    public:
int get_x(){
return x;}
};
class B: public A{
    public:
 B(){
  cout<<get_x()<<" "<<y<<" "<<z<<endl;
 }
};
int main()
{
B b;
b.get_x;
    return 0;
}
