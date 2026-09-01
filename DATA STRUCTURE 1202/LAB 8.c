 #include <stdio.h>
 int main(){

 float A, B, C, D;
 scanf("%f %f %f", &A, &B, &C);
 D= (B*B)-4*A*C;
 if (D>0 && D!=0){
    float X1=(-B+sqrt(D))/(2*A);
    float X2=(-B-sqrt(D))/(2*A);

    printf("%d %d",X1, X2 );
 }
 else if(D==0){
    int X=-B/2*A;
    printf("UNIQUE SOLUTION %d", X );

 }
 else{
    printf("No Real Solution");
 }
 return 0;
 }
