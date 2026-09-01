#include <stdio.h>
int main(){
int N, num;
scanf("%d", &N);
if (N%3==0){num=N;}
else {num=N-(N%3);}

for (int i=num; i>=1; i-=3){
printf("%d>", i);
}
printf(".");
return 0;
}
