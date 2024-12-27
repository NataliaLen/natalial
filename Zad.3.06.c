#include <stdio.h>

char pobierzZnak(const char *s, int i) {
    if (i < 0 || s[i] == '\0') {
        printf("Blad: indeks poza zakresem!\n");
        return '\0'; // Zwraca znak pusty w przypadku błędu
    }
    return s[i];
}

int main() {
    char napis[100];
    int indeks;

    printf("Podaj napis: ");
    fgets(napis, sizeof(napis), stdin);

    printf("Podaj indeks znaku do pobrania: ");
    scanf("%d", &indeks);

    char znak = pobierzZnak(napis, indeks);
    if (znak != '\0') {
        printf("Znak na pozycji %d: %c\n", indeks, znak);
    }

    return 0;
}
