#include <stdio.h>
int main(){
int N, small=99999;
scanf("%d", &N);
int element[N];
for (int i=0; i<N; i++){
scanf("%d", &element[i]);
if (element[i]<small){
small=element[i];}
}
printf("%d", small);
return 0;
}
