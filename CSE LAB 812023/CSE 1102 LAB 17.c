#include <stdio.h>
int main(){
int N;
scanf("%d", &N);
for (int i=1; i<=N; i+=3){
printf("%d->", i);
}
printf(".");
return 0;
}
