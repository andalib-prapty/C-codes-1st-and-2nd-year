#include <stdio.h>
int main(){
int N,x, large=0, small=999999, add=0;

scanf("%d\n", &N);
if (N>0){

for (int i=0; i<N; i++){

   scanf("%d", &x);
   if (large<x){
    large=x;
   }
   if (small>x){
    small=x;
   }
   add=+x;
}
printf("%d %d %d\n", small, large, add);
}
else{printf("You have put wrong piece of input.");}
return 0;
//2103116
//asked to find out the smallest and the largest number and the addition of all number
}
