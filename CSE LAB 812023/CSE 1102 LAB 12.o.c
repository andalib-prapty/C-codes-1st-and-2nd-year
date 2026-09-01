#include <stdio.h>
int main (){
int a,b, ch;
scanf ("%d %d", &a,&b);
printf("Operation to be performed:");
scanf (" %c\n", &ch);
switch(ch){
case '+' : printf("%d", a+b); break;
case '-' : printf("%d", a-b); break;
case '*' : printf("%d", a*b); break;
case '/' : printf("%d", a/b); break;
default: printf("invalid"); break;
}
return 0;
}
