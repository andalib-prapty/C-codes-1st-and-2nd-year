#include <iostream>

using namespace std;
class Test{
private:
    int x;
    static int z;
 public:
     Test(){
     cout<<"Inside Constructor"<<endl;
     z++;
     }

     void setX(int a){
      x=a;
      }
     int getX()const{
      return (x);
     }
     int static getZ(){
      return (z);
     }
     ~Test(){
      cout <<"Inside Destructor" <<endl;
     }
};
int Test::z=0;
int main()
{
    Test t1, t2, t3;
    t1.setX(5);
    cout <<"X=" <<t1.getX() <<endl;
    cout <<"Total Objects=" << t3.getZ();
    return 0;
}

