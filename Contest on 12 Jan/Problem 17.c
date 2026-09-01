#include <stdio.h>

int main() {
    int n,c;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int rev[n];
    for(int i=0;i<n;i++) {
        rev[n-i-1] = arr[i];
    }
    for(int i=0;i<n;i++) {
        printf("%d",rev[i]);
        if(i < n-1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
