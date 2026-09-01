#include <stdio.h>

int main() {
    int n, i, j, sum, is_prime, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            sum = arr[i] + arr[j];
            is_prime = 1;
            if (sum < 2) {
                is_prime = 0;
            }
            for (int k = 2; k*k <= sum; k++) {
                if (sum % k == 0) {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime) {
                count++;
            }
        }
    }

    printf("Number of pairs whose sum is a prime: %d\n", count);

    return 0;
}
