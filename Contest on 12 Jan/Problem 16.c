#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int number[n], large=-1000000, small=1000000;
    long long int sum=0;
    for(int i=0; i<n; i++){
        scanf("%d", &number[i]);
        if (number[i] < small) {
            small = number[i];
        }
         if (number[i] > large) {
            large= number[i];
        }
        sum += number[i];
    }
    printf("%d %d %lld\n", small, large, sum);
    return 0;
    //2103116
    //asked to find out smallest, largest and sum of n numbers
    //the problem was I put large=100000 instead of 10000000.Also a first I didn't use array and lld
    }
