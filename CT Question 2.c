#include<stdio.h>
#include<string.h>

int main() {
    int boro = 0, choto = 0, special = 0, digit = 0;
    char password[20];
    scanf("%s", password);

    for (int i = 0; i < strlen(password); i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            boro++;
        }
    }

    for (int i = 0; i < strlen(password); i++) {
        if (password[i] >= 'a' && password[i] <= 'z') {
            choto++;
        }
    }

    for (int i = 0; i < strlen(password); i++) {
        if ((password[i] >= '!' && password[i] <= '/') || (password[i] >= ':' && password[i] <= '@') ||
            (password[i] >= '[' && password[i] <= '`') || (password[i] >= '{' && password[i] <= '~')) {
            special++;
        }
    }

    for (int i = 0; i < strlen(password); i++) {
        if (password[i] >= '0' && password[i] <= '9') {
            digit++;
        }
    }

    if (strlen(password)>=8&& boro > 0 && choto > 0 && special > 0 && digit > 0) {
        printf("Strong Password");
    } else {
        printf("It is not a strong password");
    }

    return 0;
}

