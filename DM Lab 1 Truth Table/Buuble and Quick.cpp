//Bubble and Quick Sort Algorithm Comparison
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;

void random(int arr[], int sizea){
 srand(time(NULL));
 for(int i=0; i<sizea; i++){
    arr[i]=rand();
 }
}

void bubble(int arr[], int sizea){
 for(int i=0; i<sizea-1; i++){
    for(int j=0; j<sizea-i-1; j++){

        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
 }
}
int main(){

 int sizea;
 cin>>sizea;
 int arr[sizea];
 random(arr, sizea);

 clock_t s1=clock();
 bubble(arr, sizea);
 clock_t e1=clock();

double dif1=(double)(e1-s1)/CLOCKS_PER_SEC;
 cout<<s1<<endl;
 cout<<e1<<endl;
 cout<<dif1<<endl;


  clock_t s2=clock();
sort(arr, arr+sizea);
 clock_t e2= clock();

 double dif2=(double)(e2-s2)/CLOCKS_PER_SEC;
cout<<dif2<<endl;
    return 0;
 }

