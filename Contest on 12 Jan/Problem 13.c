#include <stdio.h>
int main(){
int a, b, out;
char yoyo;
while(1){
scanf("%d %c %d", &a, &yoyo, &b);
if (yoyo=='?'){
    break;
}
switch(yoyo){
case '+': printf("%d\n", a+b); break;
case '-': printf("%d\n", a-b);break;
case '/': printf("%d\n", a/b); break;
case '*': printf("%d\n", a*b); break;
default: printf("Error Operation. Sorry!");
}
}
return 0;
//2103116
//asked to make a simple calculator of two integer and operator as character
}
