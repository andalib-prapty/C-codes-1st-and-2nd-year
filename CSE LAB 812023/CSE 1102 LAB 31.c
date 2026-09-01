#include <stdio.h>
//find perfect numbers in given range
int main(){
int N1, N2,n, sum=0;
scanf("%d %d", &N1, &N2);
for (int i=N1; i<=N2; i++){
    for (n=1; n<i; n++){
            if(i%n==0){
                    sum=sum+n;
    }
       }

       if (sum==i){
    printf("%d ", i);

 }
sum=0;
}

return 0;
}
