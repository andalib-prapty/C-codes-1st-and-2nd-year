#include<stdio.h>
int factorial(int x){
return x*factorial(x-1);
}
int per(int a, int b){
 int result = factorial(a)/factorial(a-b);
 return result;
}
int comb (int m, int n){
int result =factorial (m)/(factorial(m-n)*factorial(n));
return result;
}
int main(){
int num1, num2;

scanf("%d %d", &num1, &num2);
printf("%d ", per(num1, num2));
printf("%d", comb(num1, num2));
return 0;
}
