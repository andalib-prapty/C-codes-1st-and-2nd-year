#include<stdio.h>
int main(void){
unsigned int i;
int j,k;
i=1;
for(j=0; j<4; j++){
    i=i<<1;
    k=i>>1;
    printf("%d %d\n", k, i);

}
return 0;}

