#include <stdio.h>
int main(){
int N, avg=0;
scanf("%d", &N);
int student[N];
for (int i=0; i<N; i++){
scanf("%d", &student[i]);
}
for (int i=0; i<N; i++){
avg=avg+student[i];
}
avg=(float)avg/N;
printf("The average mark: %d\n", avg);
return 0;
//take the class test marks of N student and show the average mark
}
