#include <stdio.h>
int main(){
int a, b, c, small, large, count=0;

scanf("%d %d %d", &a, &b, &c);
if (a<b){
        small=a; large=b;
}
else if(a==0 || b==0 ||c==0){
    printf("Program not okay!");
}
else{
        small=b; large=a;
}

for(int i=small; i<=large; i++){
  if (c%i==0){
        count++;
  }
}
printf("%d\n", count);
return 0;
//2103116
//find out the divisible numbers of c between a and b
}
