#include<stdio.h>
int main(){
int N, s, bati=0;
scanf("%d", &N);
int number[N];
for (int i=0; i<N; i++){
scanf("%d", &number[i]);
}
printf("\nElements to be searched:");
scanf("%d", &s);
for (int i=0; i<N; i++){
if (s==number[i]){
printf("%d", i+1);
bati=1;}
}
if (bati==0){
    printf("Not Found!");
}
return 0;
}
//search the position
