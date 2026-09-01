#include<stdio.h>

int main() {
    int K = 1, LOC = 0;
    int DATA[] = {4, 2, 7, 9, 10, 3};
    int ITEM=9;

    while (K < 6) {
         if(ITEM==DATA[K]){
            LOC=K;
         }

        K++;
    }

    printf("%d", LOC);
    return 0;
}
