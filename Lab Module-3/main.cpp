#include <iostream>

using namespace std;
class Member{
//Declare data members
public:
int mobile_no;
string name;
float amount;
int pin;
void registration(){
 cin>>mobile_no;
 cin>>name;
 cin>>amount;
 cout<<"A Pin Has been Sent to Your Phone"<<endl;
 cout<<"Enter Pin"<<endl;
 cin>>pin;
 cout<<"Registration Successful"<<endl;
}
//Write member functions
void login(){
 cout<<"Enter Phone Number"<<endl;
 cout<<"Enter Pin Number"<<endl;
}
void exit(){
 cout<<"Are you sure to Exit the App?"<<endl;
}

};
class History{
//Declare data members
//Write member functions
};

void menu(){
 cout<<"*** MyCash Login**"<<endl;
cout<<"1. Login"<<endl;
cout<<"2. Register"<<endl;
cout<<"3. Exit"<<endl;
cout<<"Enter Your Option:"<<endl;

}
void option(int x){

 switch(option){
  case 1: login();
  case 2: registration();
  case 3: exit();
 }
}
int main()
{
    menu();
    int op;
    cin<<op;
    option(op);
    return 0;

    }
}
