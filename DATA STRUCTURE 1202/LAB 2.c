#include<stdio.h>
int gcd(int a, int b){
if(b==0){
    return a;
    return gcd(b, a%b);
}
}
int main(){
    int N;
scanf("%d", &N);
for (int i=0; i<N; i++){
    if (gcd(N, i)==1){
        printf("%d ", i);
    }
}
return 0;
}
