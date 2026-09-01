#include <stdio.h>
int main(){
int N, large=0;
scanf("%d", &N);
int element[N];
for (int i=0; i<N; i++){
scanf("%d", &element[i]);
if (element[i]>large){
large=element[i];
}
}
printf("%d", large);
return 0;
//take N input and find out the largest
}
