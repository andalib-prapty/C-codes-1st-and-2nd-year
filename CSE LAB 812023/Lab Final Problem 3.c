#include<stdio.h>
int main(){
    int N, Actual[50], even=0, odd=0, arr[50], shushomo[50], boro=0, digit=0;
scanf("%d", &N);

for (int i=0;i<N;i++ ){
    scanf("%d", arr[i]);
    Actual[i]=arr[i];
    digit=0;
    while(1){
        arr[i]=arr[i]/10;
        digit++;
        if(arr[i]==0){
            break;
        }
    }
}
for (int i=0; i<N; i++){
        even=0;
       odd=0;
 for (int j=0; j<digit; j++){
if ((Actual[j]%10)%2==0){
    even++;
}
else{
    odd++;
}
Actual[j]=Actual[j]/10;
}
if(Actual[j]==0){
        even--;
    }
if(even==odd){
   shushomo [i]=Actual[i];
}
}
int x=sizeof(shushomo);
for (int i=0; i<x; i++){
    if (boro<shushomo[i]){
        boro=shushomo[i];
    }
}
printf("Largest Shushomo Number %d\n", boro);
for (int i=0; i<N-1; i++ ){
    if(shushomo[i]==boro){
        printf("The position %d", i+1);
    }
}
return 0;
}

