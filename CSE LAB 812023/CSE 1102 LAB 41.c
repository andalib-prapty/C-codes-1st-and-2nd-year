#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30], s2[30];
    int i,j,a,b;
    scanf("%s %s", s1, s2);

     a = strlen(s1);
     b = strlen(s2);

    int count = 0;
    for (int i = 0; i <= a-b; i++) {
        for (j = 0; j < b; j++) {
            if (s1[i+j] != s2[j]) {
                break;
            }
        }
        if (j == b) {
            count++;
        }
    }

    printf("Number of times s2 is a subsequence of s1: %d\n", count+1);

    return 0;
}





