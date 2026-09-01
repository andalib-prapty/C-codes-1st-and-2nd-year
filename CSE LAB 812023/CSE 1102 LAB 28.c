#include<stdio.h>
int main(){
int row;
scanf("%d", &row);
for (int i=1; i<=row; i++){
 for (int line=1; line<=i; line++){
         printf("%d ", i);
}
printf("\n");
}
return 0;
}
