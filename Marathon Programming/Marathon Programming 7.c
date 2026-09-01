#include <stdio.h>
int main(){
int S,H,a,M,t;
scanf("%d\n", &S);
H=S/3600;
a=S%3600;
M=a/60;
t=a%60;
printf("%d:%d:%d\n", H, M, t);
return 0;
//2103116
}
