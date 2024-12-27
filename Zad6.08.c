#include <stdio.h>

void wypelnijTablice(int *poczatek, int *koniec) {
    int n = koniec - poczatek + 1;
    for (int i = 0; i < n; i++) {
        poczatek[i] = i + 1;
    }
}

int main() {
    int tablica[10];
    int *poczatek = tablica;
    int *koniec = tablica + 9;

    wypelnijTablice(poczatek, koniec);

    for (int i = 0; i < 10; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");

    return 0;
}
