#include<stdio.h>
int main(){
int row;
scanf("%d", &row);
for (int i=row; i>=1; i--){
 for (int line=1; line<=i; line++){
         printf("* ");
}
printf("\n");
}
return 0;
}
