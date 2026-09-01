#include <iostream>

using namespace std;

int main()
{
    int a[5]={4,3,8,90,10};
    int f=8, flag;
    for(int i=0; i<=5; i++){
        if(a[i]==f){
            flag=i+1;
        }
    }
    cout<<flag<<endl;
    return 0;
}
