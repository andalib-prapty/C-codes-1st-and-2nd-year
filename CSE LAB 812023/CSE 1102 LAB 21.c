#include <stdio.h>
int main(){
int N,i, sum=0;
scanf("%d", &N);
for (i=N+1; i>=1; i--){
        sum=sum+(i)*(i+1);
        printf("%d*%d+", i, i-1);

}
printf("=%d\n",sum);
return 0;
}
