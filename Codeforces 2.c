#include <stdio.h>
int main(){
int N, even=0, odd=0, negative=0, positive=0;
scanf("%d", &N);
int arr[N];
for(int i=0; i<N; i++){
    scanf("%d", &arr[i]);
    if(arr[i]<0){
        negative++;
    }
    else if(arr[i]>0){
        positive++;
    }
    if(arr[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
}
printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);
return 0;}
