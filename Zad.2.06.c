#include <stdio.h>

int czyIdentyczne(char znak1, char znak2) {
    if (znak1 == znak2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char a, b;

    printf("Podaj pierwszy znak: ");
    scanf(" %c", &a);
    printf("Podaj drugi znak: ");
    scanf(" %c", &b);

    if (czyIdentyczne(a, b)) {
        printf("Znaki sa identyczne.\n");
    } else {
        printf("Znaki nie sa identyczne.\n");
    }

    return 0;
}
