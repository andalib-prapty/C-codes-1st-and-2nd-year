#include <stdio.h>
int main(){
int N;
long long int gun=1;
scanf("%d", &N);
for (int i=1; i<=N; i++){
    gun=gun*i;
}
printf("%lld", gun);
return 0;
//2103116-Yoo
}
