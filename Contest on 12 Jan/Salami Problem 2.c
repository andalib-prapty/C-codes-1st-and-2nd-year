#include<stdio.h>
int main(){
int A, B, count=0;
scanf("%d %d", &A, &B);
while(1){
    A*=3;
    B*=2;
    count++;
    if (A>B){
        break;
    }

}
printf("%d\n", count);
//2103116
//Thor only can defeat Thanos when he is stronger.
return 0;
}
