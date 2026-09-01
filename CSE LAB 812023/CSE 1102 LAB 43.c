#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

void Students_Marks(struct student s[], int n) {
    int i, j;
    struct student temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (s[i].marks < s[j].marks) {

                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main() {
    struct student s[5];
    int i, j, n = 5;


    for (i = 0; i < n; i++) {

        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    Students_Marks(s, n);

    for (i = 0; i < n; i++) {
        printf("%s\t%d\t%.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
