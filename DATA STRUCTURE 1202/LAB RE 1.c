#include <stdio.h>

int main() {
    int n, t, tsondu, tenzing, monster_tsondu, monster_tenzing;
    long long int sum_tsondu = 0, sum_tenzing = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &tsondu, &tenzing);
        for (int j = 0; j < tsondu; j++) {
            scanf("%d", &monster_tsondu);
            sum_tsondu += monster_tsondu;
        }
        for (int k = 0; k < tenzing; k++) {
            scanf("%d", &monster_tenzing);
            sum_tenzing += monster_tenzing;
        }

        if (sum_tsondu - sum_tenzing < 0) {
            printf("Tenzing\n");
        } else if (sum_tsondu == sum_tenzing) {
            printf("Draw\n");
        } else {
            printf("Tsondu\n");
        }


        sum_tsondu = 0;
        sum_tenzing = 0;
    }
    return 0;
}
