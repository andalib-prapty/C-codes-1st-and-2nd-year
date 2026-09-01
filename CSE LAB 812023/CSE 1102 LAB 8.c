#include <stdio.h>
int main(){
int x,y,z,a;
scanf("%d", &x);
y=x/1000000;
z=x%10;
printf("%d\n",y+z);
a=(x%100)*(x%100);
printf("%d\n",a);
return 0;
}
