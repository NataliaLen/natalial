#include <stdio.h>

int przeszukiwanieBinarne(int *tablica, int lewy, int prawy, int liczba) {
    if (lewy > prawy) {
        return 0;  // Liczba nie została znaleziona
    }
    int srodek = lewy + (prawy - lewy) / 2;
    
    if (tablica[srodek] == liczba) {
        return 1;  // Liczba znaleziona
    } else if (tablica[srodek] > liczba) {
        return przeszukiwanieBinarne(tablica, lewy, srodek - 1, liczba);
    } else {
        return przeszukiwanieBinarne(tablica, srodek + 1, prawy, liczba);
    }
}

int main() {
    int tablica[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
    int liczba = 5;

    if (przeszukiwanieBinarne(tablica, 0, rozmiar - 1, liczba)) {
        printf("Liczba %d znajduje się w tablicy.\n", liczba);
    } else {
        printf("Liczba %d nie znajduje się w tablicy.\n", liczba);
    }

    return 0;
}
