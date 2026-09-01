#include <stdio.h>
int main(){
int x1,x2,start;
long long int sum=0;
scanf("%d %d", &x1, &x2);
if (x1%3==0){
    start=x1;
}
else{start=x1+(x1-x1%3);}
for(int i=start; i<=x2; i+=3){
    sum=sum+i;
}
printf("%lld", sum);
return 0;
//2103116-yoo
}
