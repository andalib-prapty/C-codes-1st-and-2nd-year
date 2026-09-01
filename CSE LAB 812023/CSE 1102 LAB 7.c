#include <stdio.h>
int main(){
int a,b,c;
printf("Enter a digit:");
scanf("%d", &a);
printf("Enter next digit");
scanf("%d", &b);
c=a;
a=b;
b=c;
printf("Your number %d %d", a,b);
return 0;
//2103116
}
