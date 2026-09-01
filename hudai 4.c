#include <stdio.h>
int main(){
int R, C;
scanf("%d %d", &R, &C);
int matrix[R][C];
for (int row=0; row<R; row++){
for (int column=0; column<C; column++){
scanf("%d", &matrix[row][column]);
}}
printf("The matrix is:\n");
for (int row=0; row<R; row++){
for (int column=0; column<C; column++){
printf("%d ", matrix[row][column]);
}
printf("\n");
}
return 0;
}
