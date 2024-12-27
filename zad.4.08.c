#include <stdio.h>

int znajdzNajwiekszyIZamienNaZero(int *tablica, int rozmiar) {
    int max = tablica[0];
    int indexMax = 0;

    for (int i = 1; i < rozmiar; i++) {
        if (tablica[i] > max) {
            max = tablica[i];
            indexMax = i;
        }
    }

    tablica[indexMax] = 0;

    return max;
}

int main() {
    int tablica[] = {3, 5, 2, 8, 6};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    int max = znajdzNajwiekszyIZamienNaZero(tablica, rozmiar);

    printf("Największy element: %d\n", max);
    printf("Tablica po zamianie na 0: ");
    for (int i = 0; i < rozmiar; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");

    return 0;
}
