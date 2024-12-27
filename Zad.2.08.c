#include <stdio.h>

int main() {
    int tablica[10];
    int *ptr = tablica;

    // Wczytanie elementów tablicy od użytkownika
    printf("Podaj 10 liczb:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", ptr + i);
    }

    // Wypisanie elementów tablicy
    printf("Elementy tablicy:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
