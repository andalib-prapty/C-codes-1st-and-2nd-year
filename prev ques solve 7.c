#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100

int main() {
    char str[] = "We are the students of cse, ruet, Bangladesh.";
    char* words[MAX_WORDS];
    char* word;
    int n = 0;

    // Split string into words
    word = strtok(str, " ,.");
    while (word != NULL && n < MAX_WORDS) {
        words[n++] = word;
        word = strtok(NULL, " ,.");
    }

    // Sort words using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(words[j], words[j+1]) > 0) {
                char* temp = words[j];
                words[j] = words[j+1];
                words[j+1] = temp;
            }
        }
    }

    // Print sorted words
    printf("The sorted string is:\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}
