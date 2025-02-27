#include <stdio.h>

int main() {
    int n;
    long long suma = 0;

    printf("Podaj liczbę n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Błąd: wprowadź liczbę całkowitą większą niż 0.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }

    printf("Suma kwadratów liczb od 1 do %d wynosi: %lld\n", n, suma);

    return 0;
}
