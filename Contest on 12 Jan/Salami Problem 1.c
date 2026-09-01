#include <stdio.h>
int main(){
int T, N;
scanf("%d", &T);
for(int i=1; i<=T; i++){
        int count=0;
    scanf("%d", &N);

    count=count+N/100;
    N=N%100;
    count=count+N/50;
    N=N%50;
    count=count+N/10;
    N=N%10;
    count=count+N/5;
    N=N%5;
    count=count+N/2;
    N=N%2;
    count=count+N/1;
    N=N%1;

//2103116
//Getting the lowest number of taka for given amount
        printf("%d\n", count);


}
return 0;
}
