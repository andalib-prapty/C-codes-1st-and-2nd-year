#include <stdio.h>

#define bool int
#define true 1
#define false 0

int isPrime(int a) {
    if (a < 2) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int count(int number) {
    int count = 0;

    for (int i = 2; i <= number; i++) {
        if (isPrime(i) && number % i == 0) {
            count++;
            while (number % i == 0) {
                number /= i;
            }
        }
    }

    return count;
}

int isequal(int num1, int num2) {
    return count(num1) == count(num2);
}

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);


    if (isequal(num1, num2)) {
        printf(" equal\n");
    } else {
        printf("Not equal\n");
    }

    return 0;
}
