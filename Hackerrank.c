#include<stdio.h>
int main(){
scanf("%d", &n);
int sum=0, arr[n];
for (int i=0; i<n; i++){
    scanf("%d", &arr[i]);
    sum=sum+arr[i];
}
printf("%d", sum);
return 0;
}

