#include <stdio.h>

int main() {
    int n, rank[4][13] = {};
    scanf("%d", &n);
    while (n--) {
        char suit;
        int r;
        scanf(" %c %d", &suit, &r);
        switch (suit) {
            case 'S': rank[0][r-1] = 1; break;
            case 'H': rank[1][r-1] = 1; break;
            case 'C': rank[2][r-1] = 1; break;
            case 'D': rank[3][r-1] = 1; break;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            if (rank[i][j] == 0) {
                switch (i) {
                    case 0: printf("S %d\n", j+1); break;
                    case 1: printf("H %d\n", j+1); break;
                    case 2: printf("C %d\n", j+1); break;
                    case 3: printf("D %d\n", j+1); break;
                }
            }
        }
    }
    return 0;
    //finding out the missing cards from the 52 cards. The user has given the cards he/she have. Now I have to find out the missing cards.
}
