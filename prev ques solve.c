#include <stdio.h>
#include <string.h>

void check(char *a, char *b, int (*cmp)(const char*, const char*)) {
    if (cmp(a, b)) {
        printf("Equal\n");
    }
    else {
        printf("Not Equal\n");
    }
}

int main() {
    char s1[1000], s2[1000];
    int (*p)(const char*, const char*);
    p = strcmp;
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    check(s1, s2, p);
    return 0;
}

