#include<stdio.h>
int main(){
    int N,Actual, even=0, odd=0, digit=0;
scanf("%d", &N);
Actual=N;
while(1){
    N=N/10;
    digit++;
    if(N==0){
        break;
    }
}
for (int i=0; i<digit; i++){

if ((Actual%10)%2==0){
    even++;

}
else{
    odd++;
}

Actual=Actual/10;
if(Actual%10==0){
        even--;
    }
}
if(even==odd){
    printf("Shushomo Number");
}
else{
    printf("Oshomo Number");
}
return 0;
}
