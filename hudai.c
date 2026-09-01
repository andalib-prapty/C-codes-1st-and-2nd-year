#include <stdio.h>
int main(){
    int x, n, j;
for(x=1; x<=3 ; x++){
    for (n=1; n<=3; n++){
        for (j=1; j<=3; j++)
        if ( n!=x && j!=n && j!=x)
            {printf("%d, %d, %d\n", x, n, j);}
    }
}

int fibo[30], sum=0;
fibo[0]=0;
fibo[1]=1;
printf("%d %d ",fibo[0], fibo[1] );
for (int i=2; i<20; i++){
    fibo[i]=fibo[i-1]+fibo[i-2];
    printf("%d ", fibo[i]);
}
int p, pos;
int a[5]={10, 13, 14, 16, 17};
scanf("%d", &p);
for ( int i=0; i<5; i++){
    if (p==a[i]){
        pos=i+1;
    }

}
printf("%d", pos);

int array1[5]={10, 20, 30, 40, 60}, array2[5],i;
array2[i]=array1[i];
for ( i=0; i<5; i++){
        printf("%d\n", array2[i]);}


return 0;
}
