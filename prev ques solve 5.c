#include<stdio.h>
int main(void){
int i, j;
for (i=1, j=5; i<=5, j>=1; i=i+1, j=j+1){
    if (i==2 && j==2){
        break;
    }
    if (i==3 && j==3){
        continue;
    }
    if (i%2==0){
        printf("%d\n", j*i);
    }
    else if(i%2==1){
        printf("%d\n", i-j);
    }
    if (i/4==1){
        break;
    }
}
return 0;
}
