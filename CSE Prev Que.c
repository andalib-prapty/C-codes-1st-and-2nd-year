#include<stdio.h>

int main ()
{
int n1=3, n2=6;
printf("%d\n", n1%n2);
n1++;
--n2;
printf("%d ; %d\n", n1, n2);
printf("%d ; %d\n", ++n1, n2--);
int R=(n1>n2)? n1:n2;
printf("%d ; %d\n", n1<n2, R);
return 0;
}
