#include<stdio.h>
#include<string.h>
int main(){
    int N, digit=0;
scanf("%d", &N);
while(1){
    N=N/10;
    digit++;
    if(N==0){
        break;
    }
}
printf("%d", digit);
return 0;
}
