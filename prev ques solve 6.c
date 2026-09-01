#include<stdio.h>
void oddeven(int a){
 if (a%2==0){
    printf("even");
 }
 else {
    printf("odd");
 }
}
int main(){
int Number;
scanf("%d", &Number);
oddeven(Number);
return 0;
}
