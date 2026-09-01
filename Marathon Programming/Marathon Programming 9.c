#include <stdio.h>
int main(){
int a,b,c,d;
scanf("%d %d %d %d", &a, &b, &c, &d);
if (a>b && a>c && a>d)
{printf("%d %d %d", a-b, a-c, a-d);
}
else if (b>c && b>a && b>d)
{printf("%d %d %d", b-c, b-a, b-d);
}
else if (c>a && c>b && c>d)
{printf("%d %d %d", c-a, c-b, c-d);
}
else if (d>a && d>b && d>c)
{printf("%d %d %d", d-a, d-b, d-c);
}
else {printf("error");}
return 0;
//2103116
}
