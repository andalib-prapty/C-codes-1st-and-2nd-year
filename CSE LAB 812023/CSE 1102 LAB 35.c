#include <stdio.h>
int main(){
int N, count=0;
scanf("%d", &N);
int number[N];
for (int i=0; i<N; i++){
scanf("%d", &number[i]);
if (number[i]%2!=0){
count++;
}
}
printf("%d", count);
return 0;
//count the number of odd numbers in an array
}
