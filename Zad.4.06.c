#include <stdio.h>
#include <string.h>

char pobierzZnak(const char *s, int i) {
    if (i < 0 || s[i] == '\0') {
        return '\0';
    }
    return s[i];
}

int czyIdentyczne(char znak1, char znak2) {
    return znak1 == znak2;
}

int czyPalindrom(const char *s) {
    int dlugosc = strlen(s);
    for (int i = 0; i < dlugosc / 2; i++) {
        if (!czyIdentyczne(pobierzZnak(s, i), pobierzZnak(s, dlugosc - i - 1))) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char slowo[100];

    printf("Podaj slowo: ");
    fgets(slowo, sizeof(slowo), stdin);

    slowo[strcspn(slowo, "\n")] = '\0';

    if (czyPalindrom(slowo)) {
        printf("Podane slowo jest palindromem.\n");
    } else {
        printf("Podane slowo nie jest palindromem.\n");
    }

    return 0;
}
