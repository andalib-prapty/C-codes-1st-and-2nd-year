#include<iostream>
#include<conio.h>

using namespace std;

struct Member{
 int id;
 float height;
 float weight;
 bool exist;
};
int total=-1;
struct Member mx[5000];

int searchmember(int y){
int i;
int flag=-1;
for(i=0; i<=total;i++)
if(mx[i].id==y){
    flag=i;
}
return flag;
}
void addmember(){
    int x;
    cout<<"Inside addmember()"<<endl;
    total++;
    cout<<"Enter member ID"<<endl;
    cin>> x;
    if(searchmember(x)==-1){
            mx[total].id=x;
    cout<<"Enter member Height"<<endl;
    cin>> mx[total].height;
    cout<<"Enter member Weight"<<endl;
    cin>> mx[total].weight;
    mx[total].exist=1;
    cout <<"Add Member Successful"<< endl;
    }
 else{
    cout<<"Sorry. Already Exist"<<endl;
 }
}
void removemember(){
    int x, tid;
    cout<<"Enter Member ID"<<endl;
    cin>>x;
    tid=searchmember(x);
    if(
    tid==-1){
    cout<<"Sorry, Member doesn't exist"<<endl;
    }
    else{
        mx[tid].exist=false;
        cout<<"Remove member successful" <<endl;
    }
}
void maxheightweight(){
    float max_height=0, max_weight=0;
    for(int i=0; i<=total;i++){
        if(mx[i].height>=max_height){
            max_height=mx[i].height;
        }
                if(mx[i].weight>=max_weight){
            max_weight=mx[i].weight;
        }
    }

    cout<<"max height="<<max_height<<endl;
    cout<<"max weight="<<max_weight<<endl;

}
void minheightweight(){
        float min_height=9999, min_weight=9999;
    for(int i=0; i<=total;i++){
        if(mx[i].height<=min_height){
            min_height=mx[i].height;
        }
                if(mx[i].weight<=min_weight){
            min_weight=mx[i].weight;
        }
    }

    cout<<"min height="<<min_height<<endl;
    cout<<"min weight="<<min_weight<<endl;
}
void bmi(){
    int x;
 cout << "Enter Member ID: ";
 cin >> x;
 int tid = searchmember(x);
 if (tid != -1)
{
  float bmi = mx[tid].weight / (mx[tid].height * mx[tid].height);
      cout << "BMI: " << bmi << endl;
        cout<<"BMI Value="<<bmi<<endl;

        if(bmi<15){
            cout<<"Severe Thinness"<<endl;
        }
        else if(bmi>=16&&bmi<17){
            cout<<"Moderate Thinness"<<endl;
        }
        else if(bmi>=17 && bmi<18.5){
            cout<<"Mild Thinness"<<endl;
        }
        else if(bmi>=18.5&&bmi<25){
            cout<<"Normal"<<endl;
        }
        else if(bmi>=25){
            cout<<"Overweight"<<endl;
        }
    }
}
void displayAll(){
    cout <<"------------------" <<endl;
    cout<<"displayAll() Under Construction"<<endl;
    int i;
    for(i=0; i<=total; i++){
            if(mx[i].exist){

            }
        cout << mx[i].id<<" "<<mx[i]. height<<" "<<mx[i]. weight<< endl;
    }
    cout <<"Total Member:"<< total+1<<endl;
    cout<<"-------------------"<<endl;
}
void avg(){
 float heightNumber=0, weightNumber=0;
 for(int i=0; i<=total; i++){
    heightNumber+=mx[i].height;
    weightNumber+=mx[i].weight;
 }
 float avgHeight=heightNumber/(total+1);
 float avgWeight=weightNumber/(total+1);

  cout<<"Average Height="<<avgHeight<<endl;
  cout<<"Average Weight="<<avgWeight<<endl;

}
void update(){
    int x;
    cout<<"Inside addmember()"<<endl;
    total++;
    cout<<"Enter member ID"<<endl;
    cin>> x;
    int tid=searchmember(x);
    if(tid!=-1){
    cout<<"Enter member Height"<<endl;
    cin>> mx[tid].height;
    cout<<"Enter member Weight"<<endl;
    cin>> mx[tid].weight;
    cout <<"Update Member Successful"<< endl;
    }
 else{
    cout<<"Sorry. Already Exist"<<endl;
 }
}


int menu(){
    int option;
    system("cls");
cout<< "********** Main Menu ********"<<endl;
cout<<"1. Add Member"<<endl;
cout<<"2. Update Member"<<endl;
cout<<"3. Remove Member"<<endl;
cout<<"4. Max Height & Weight"<<endl;
cout<<"5. Min Height and Weight"<<endl;
cout<<"6. Average Height and Weight"<<endl;
cout<<"7. BMI Classification"<<endl;
cout<<"8. Display"<<endl;
cout<<"Enter Your option(1-8):_"<<endl;
cin>> option;
return (option);
}

int main(){

int op;
for( ; ;){
op=menu();
cout<<"in main() option="<<op<<endl;

if(op==0){
    cout<<"End of program run"<<endl;
    break;
}
switch(op){
 case 1: addmember(); break;
 case 2: update();break;
 case 3: removemember(); break;
 case 4: maxheightweight();break;
 case 5: minheightweight();break;
 case 6: avg();break;
 case 7: bmi();break;
 case 8: displayAll();break;


}
getch();
}

return 0;
}
