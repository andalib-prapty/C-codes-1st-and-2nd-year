#include<stdio.h>

int main() {
    int N, originalN, even = 0, odd = 0, digit = 0;
    scanf("%d", &N);
    originalN = N;

    while (1) {
        N = N / 10;
        digit++;
        if (N == 0) {
            break;
        }
    }

    for (int i = 0; i < digit; i++) {
        if (originalN % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        originalN = originalN / 10;
    }

    if (even == odd) {
        printf("Shushomo Number");
    } else {
        printf("Oshomo Number");
    }

    return 0;
}
