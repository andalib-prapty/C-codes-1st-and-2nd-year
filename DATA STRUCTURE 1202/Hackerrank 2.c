#include<stdio.h>
int main(){
    int n;
 scanf("%d", &n);
 for(int i=1; i<=(n*2)-1;i++){
    for (int j=1; j<=(n*2)-1; j++){

            for(int m=1; m<=n; m++){
                if(i==m||j==m||i==(n*2)-m||j==(n*2)-m){
                    printf("%d ", n-m+1);
                }
                else{
                    printf("%d ", n-m);
                }

            }
    }
    printf("\n");

 }

 return 0;
}
