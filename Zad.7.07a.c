#include <stdio.h>

int przeszukajTabliceLewaPrawa(int *tablica, int rozmiar, int liczba, int indeks) {
    if (indeks == rozmiar) {
        return 0;  // Liczba nie została znaleziona
    }
    if (tablica[indeks] == liczba) {
        return 1;  // Liczba znaleziona
    }
    return przeszukajTabliceLewaPrawa(tablica, rozmiar, liczba, indeks + 1);
}

int main() {
    int tablica[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
    int liczba = 5;

    if (przeszukajTabliceLewaPrawa(tablica, rozmiar, liczba, 0)) {
        printf("Liczba %d znajduje się w tablicy.\n", liczba);
    } else {
        printf("Liczba %d nie znajduje się w tablicy.\n", liczba);
    }

    return 0;
}
