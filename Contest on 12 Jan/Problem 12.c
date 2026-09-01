#include <stdio.h>
int main(){
int x, y, count;
while(1)
{
    scanf("%d %d", &x, &y);
    if (x==0 && y==0){
        break;
    }
    if (x>y){
        count=x;
        x=y;
        y=count;
    }
    printf("%d %d\n", x,y);
}
return 0;
//2103116
//as the problem 10 but I can't accept the answer as output doesn't align with the question said!
}
