#include <stdio.h>
#include <string.h>
#include <ctype.h>

int czyPalindrom(char *slowo, int poczatek, int koniec) {
    if (poczatek >= koniec) {
        return 1;
    }
    if (tolower(slowo[poczatek]) != tolower(slowo[koniec])) {
        return 0;
    }
    return czyPalindrom(slowo, poczatek + 1, koniec - 1);
}

int main() {
    char slowo[100];
    printf("Podaj słowo: ");
    scanf("%s", slowo);

    int dlugosc = strlen(slowo);
    if (czyPalindrom(slowo, 0, dlugosc - 1)) {
        printf("Słowo jest palindromem.\n");
    } else {
        printf("Słowo nie jest palindromem.\n");
    }

    return 0;
}
