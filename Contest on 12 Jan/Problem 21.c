#include<stdio.h>
int main(){

int n;
scanf("%d", &n);
if (n==0){
    printf("Program Unavailable");
}
else{
int number[n];
for (int i=0; i<n; i++){
    scanf("%d", &number[i]);
}
for(int i=n-1; i>=0; i--){
    printf("%d",number[i]);
     if(i>0) {
                 printf(" ");}
}}
return 0;
//2103116
//code for showing in reverse
}
