#include <stdio.h>

int main() {
    unsigned int a, b;
    long long wynik = 1;

    while (printf("Podaj dwie liczby naturalne: "), scanf("%u %u", &a, &b) != 2) {
        printf("Błąd danych wejściowych!\n");
        while (getchar() != '\n');
    }

    for (unsigned int i = 0; i < b; i++) {
        wynik *= a;
    }

    printf("%lld\n", wynik);
    return 0;
}
