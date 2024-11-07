#include <stdio.h>
#include <ctype.h>

int main() {
    char znak;
    int kod_ascii;

    printf("Wybierz metodę wejścia:\n");
    printf("1. Podaj znak ASCII (char)\n");
    printf("2. Podaj kod ASCII (int)\n");
    printf("Wybór: ");
    int wybor;
    scanf("%d", &wybor);

    if (wybor == 1) {
        printf("Podaj znak: ");
        scanf(" %c", &znak);

        if (isalpha(znak)) {
            printf("'%c' jest literą alfabetu.\n", znak);
        } else {
            printf("'%c' nie jest literą alfabetu.\n", znak);
        }

    } else if (wybor == 2) {
        printf("Podaj kod ASCII (liczba całkowita): ");
        scanf("%d", &kod_ascii);

        if ((kod_ascii >= 65 && kod_ascii <= 90) || (kod_ascii >= 97 && kod_ascii <= 122)) {
            printf("Kod ASCII %d odpowiada literze alfabetu.\n", kod_ascii);
        } else {
            printf("Kod ASCII %d nie odpowiada literze alfabetu.\n", kod_ascii);
        }

    } else {
        printf("Nieprawidłowy wybór.\n");
    }

    return 0;
}
