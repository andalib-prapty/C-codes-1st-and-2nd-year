//Day 8: Hackerrank-Phone a Friend
//special lookout-using map and find function a new learn.
#include<iostream>
#include<map>
using namespace std;

int main() {
    map <string, string> phonebook;
    int n;
    cin>>n;
   string name,phone,input;
    for(int i = 0;i<n;i++)
    {
        cin>> name;
        cin>> phone;
        phonebook[name] = phone;
    }
    while(cin>>input){
        if(phonebook.find(input)!= phonebook.end())
            cout<<input<<"="<<phonebook[input]<<endl;
        else
            cout<<"Not found"<<endl;
    }
    return 0;
}
