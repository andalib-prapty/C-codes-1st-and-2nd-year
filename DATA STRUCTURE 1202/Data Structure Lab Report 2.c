#include<stdio.h>
int main(){

 int arr[]={2, 5, 7, 9, 1}, MAX=0;
 for(int i=0; i<5; i++){
    if(arr[i]>MAX){
        MAX=arr[i];
    }
 }
 printf("%d", MAX);
 return 0;
}
