#include <stdio.h>
int main(){
int x,y,z,a,b;
printf("Enter digit:");
scanf("%d",&x);
y=x/3600;
z=x%3600;
a=z/60;
b=z%60;
printf("%d Hour %d Minutes %d seconds", y,a,b);
return 0;
}
