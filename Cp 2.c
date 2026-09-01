#include <stdio.h>
#include <string.h>

int main() {
    char original[100], reversed[100];
    int i, j, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", original);

    // Reverse the string
    j = 0;
    for (i = strlen(original) - 1; i >= 0; i--, j++) {
        reversed[j] = original[i];
    }
    reversed[j] = '\0';  // Add null-terminator to the reversed string

    printf("Original string: %s\n", original);
    printf("Reversed string: %s\n", reversed);

    // Check if the reversed string is a palindrome
    for (i = 0; i < strlen(original); i++) {
        if (original[i] != reversed[i]) {
            isPalindrome = 0;
            break;
        }
    }

    // Print the result
    if (isPalindrome) {
        printf("Yes, it's a palindrome.\n");
    } else {
        printf("No, it's not a palindrome.\n");
    }

    return 0;
}
