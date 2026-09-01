#include <iostream>
using namespace std;
class Father{
 private:
     int money=10;
 protected:
    int gold=20;
 public:
    int land=30;
    int get_money(){
    return money;}
    void show(){
    cout<<"Money="<<money<<endl;
     cout<<"Gold="<<gold<<endl;
     cout<<"Land="<<land<<endl;
     }

};
class Son: public Father{
 public:

    void show(){
cout<<"Money="<<get_money()<<endl;
     cout<<"Gold="<<gold<<endl;
     cout<<"Land="<<land<<endl;
     }
     int get_y(){

     return get_money();}
     int get_gold(){
     return gold;
     }
};
class Grandson: public Son{
 public:
    void show(){
cout<<"Money="<<get_y()<<endl;
     cout<<"Gold="<<get_gold()<<endl;
     cout<<"Land="<<land<<endl;
     }
};
int main(){
 Grandson Gias;
 Gias.show();
 return 0;
}

