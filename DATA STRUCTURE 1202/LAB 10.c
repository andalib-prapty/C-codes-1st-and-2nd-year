#include<stdio.h>
int main(){
 int arr[5]={3, 5, 9, 2, 8};
 int LOC=0;
 int value=9;
 for(int k=0; k<5; k++){
    if(arr[k]==value){
        LOC=k+1;
    }
 }
 printf("%d", LOC);
}
