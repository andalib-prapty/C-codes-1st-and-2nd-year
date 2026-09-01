#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_WORD_LENGTH 100

int main() {
    int N;
    scanf("%d", &N);

    if (N <= 0) {
        fprintf(stderr, "Invalid input: N must be a positive integer\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        char word[MAX_WORD_LENGTH + 1];
        scanf("%s", word);

        size_t word_length = strlen(word);

        if (word_length > MAX_WORD_LENGTH) {
            fprintf(stderr, "Invalid input: word is too long (max length is %d)\n", MAX_WORD_LENGTH);
            return 1;
        }

        if (word_length > 10) {
            printf("%c%ld%c\n", word[0], word_length - 2, word[word_length - 1]);
        } else {
            printf("%s\n", word);
        }
    }

    return 0;
}
