#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 1000

int main() {
    char str[MAX_DIGITS];
    while (1) {
        scanf("%s", str);
        if (strcmp(str, "0") == 0) {
            break;
        }
        int length = strlen(str);
        int sum = 0;
        for (int i = 0; i < length; i++) {
            sum += str[i] - '0';//we convert character string element to a digit by subtracting the ASCII value of '0'.
}
        printf("%d\n", sum);
    }
    return 0;
//2103116
//asked to calculate the sum of the digit of given number. But it will take so large numbers that cannot be solved by long long integer
}
