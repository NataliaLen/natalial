#include <stdio.h>

int NWD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return NWD(b, a % b);
}

int main() {
    int a, b;

    printf("Podaj dwie liczby całkowite, aby obliczyć ich NWD:\n");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Błąd danych wejściowych.\n");
        return 1;
    }

    printf("Wynik NWD: %d\n", NWD(a, b));
    return 0;
}
