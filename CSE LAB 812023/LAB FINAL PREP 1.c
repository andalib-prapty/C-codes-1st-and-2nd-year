//prime or not
#include<stdio.h>
int main(){
    int n;
scanf("%d", &n);
int count;
for (int i=2; i*i<n; i++){
        count=0;
    if (n%i==0){
        printf("Not Prime");
count=1;
break;
    }
}
if (count==0){
printf("The number is prime");
}

return 0;
}
