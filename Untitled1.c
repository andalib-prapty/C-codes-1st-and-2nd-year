#include<stdio.h>
int main(){
 int t,n, k;
 scanf("%d", &t);
 for (int i=0; i<t; i++){
    scanf("%d %d", &n, &k);
    int result= (n+k-1)/k;
    if(n%k>1 || n%k==0 && k>1){
        result++;
    }
    printf("%d\n", result);
 }
 return 0;
 //andalibprapty
}
