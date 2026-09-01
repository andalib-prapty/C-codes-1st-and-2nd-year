#include <stdio.h>
int main(){
int x[10], i, count=0;
for (i=0; i<10; i++){
    scanf("%d", &x[i]);
    if (x[i]==0){
        break;
    }
    count++;
}
for (i=0; i<count; i++){
    printf("Case %d: %d\n", i+1, x[i]);
}
//2103116
//asked to take so many inputs and show them in format case i: x

return 0;
}
