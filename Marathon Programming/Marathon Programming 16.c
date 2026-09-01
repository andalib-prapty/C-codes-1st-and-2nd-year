#include <stdio.h>
int main(){
int a, b, x, y, sum=0;
scanf("%d %d", &a, &b);
if (a<b){x=a;y=b;}
else{x=b;y=a;}
for (int i=x; i<=y; i+=2){
if (i%2==0){i+=1;}
            sum=sum+i;
        }

printf("%d\n", sum);
return 0;
//2103116-Noobest
}
