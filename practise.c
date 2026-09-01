#include <stdio.h>
int main(){
int num2[10], num1[10]={10, 20,30, 40, 50, 60, 70, 80, 90, 100};
printf ("Array 1: ");
for (int i=0; i<10; i++){
    printf("%d ", num1[i]);
}
for (int i=0; i<10; i++){
    num2[i]=num1[i];
}
printf("\nArray 2: ");
for (int i=0; i<10; i++){
    printf("%d ", num2[i]);
}
getch();
return 0;
}
//Linear Search in array
