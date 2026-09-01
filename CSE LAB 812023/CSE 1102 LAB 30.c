#include <stdio.h>
//perfect number or not?
int main(){
int N, sum=0;
scanf("%d", &N);
for (int i=1; i<N; i++){
    if (N%i==0){
       sum=sum+i;
    }
}
if (sum==N){
    printf("Perfect Number!");
}
else {printf("Not a Perfect Number :(");}
return 0;
}
