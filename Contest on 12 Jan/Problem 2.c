#include <stdio.h>
int main (){
int n, x, y;
scanf("%d", &n);
x=(n/10)*10;
y=((n/10)+1)*10;
if (n%10==0){
printf("%d", n);}
else if (n%10>=5){
    printf("%d", y);
}
else {printf("%d", x);}
return 0;
//2103116-NoobAndalib
}
