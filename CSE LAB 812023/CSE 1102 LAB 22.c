#include <stdio.h>
int main(){
int X,N, sum=1;
scanf("%d %d", &X, &N);
for (int i=1; i<=N; i++){
sum=sum*X;
}
printf("%d", sum);
return 0;
}
