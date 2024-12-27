#include <stdio.h>

int sumaCyfr(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + sumaCyfr(n / 10);
}

int main() {
    int liczba;
    printf("Podaj liczbę: ");
    scanf("%d", &liczba);

    printf("Suma cyfr liczby %d to: %d\n", liczba, sumaCyfr(liczba));

    return 0;
}
