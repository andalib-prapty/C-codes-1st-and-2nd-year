#include <stdio.h>
//Reads
int main() {
    int n, i, j, max_len = 1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], lis[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        lis[i] = 1;
    }

    for (i = 1; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
            }
        }
        if (lis[i] > max_len) {
            max_len = lis[i];
        }
    }

    printf("Length of longest increasing subsequence is: %d\n", max_len);
    return 0;
}
