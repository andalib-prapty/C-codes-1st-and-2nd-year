#include <stdio.h>
int main(){
int N,n, min;
scanf("%d", &N);
scanf("%d", &min);
n=min;
for (int i=1; i<N; i++){
    scanf("%d", &min);
    if (min<n){
        n=min;
    }
}
printf("%d", n);
return 0;
}
