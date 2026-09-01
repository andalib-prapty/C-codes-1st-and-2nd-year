#include <stdio.h>
int main(){
int a, b, c, d;
scanf("%d %d %d %d", &a, &b, &c, &d);
if (a>d && b>d && c>d){printf("%d", (a+b+c)/3);}
else if (a>c && b>c && d>c){printf("%d", (a+b+d)/3);}
else if (a>b && c>b && d>b) {printf("%d", (a+c+d)/3);}
else {printf("invalid");}
return 0;
}
