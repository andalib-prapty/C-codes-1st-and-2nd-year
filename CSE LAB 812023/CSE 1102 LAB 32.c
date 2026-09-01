#include <stdio.h>
int main(){
int N;
printf("Enter the Number of elements:");
scanf("%d", &N);
int number[N];
for (int i=0; i<N; i++){
scanf("%d", &number[i]);
}
printf("The elements in reverse order:\n");
for (int i=N-1; i>=0;i--){
printf("Element[%d]: %d\n", i, number[i]);
}
return 0;
getch();
//Take N elements in an array and show them in reverse
}
