#include<stdio.h>
int main(){
int N;
printf("How many numbers?");
scanf("%d", &N);
int num[N];
for (int i=0; i<N; i++){
scanf("%d", &num[i]);
}
for (int i=0; i<N; i++){
printf("%d) %d\n", i+1, num[i]);}
return 0;
}
