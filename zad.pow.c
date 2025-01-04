#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int n = 0; // Zmienna globalna informująca o liczbie elementów w tablicy

// Funkcja do wypisywania elementów tablicy
void printArray(char array[]) {
    if (n == 0) {
        printf("Tablica jest pusta.\n");
    } else {
        printf("Zawartość tablicy: ");
        for (int i = 0; i < n; i++) {
            printf("%c ", array[i]);
        }
        printf("\n");
    }
}

// Funkcja do dodawania elementu do tablicy
void addElement(char array[]) {
    if (n >= MAX_SIZE) {
        printf("Brak miejsca w tablicy na nowy element.\n");
        return;
    }

    printf("Podaj cyfrę do dodania: ");
    char input;
    scanf(" %c", &input);

    if (isdigit(input)) {
        array[n++] = input;
        printf("Element '%c' został dodany do tablicy.\n", input);
    } else {
        printf("Podany znak nie jest cyfrą.\n");
    }
}

// Funkcja do usuwania elementu z tablicy
void removeElement(char array[]) {
    if (n == 0) {
        printf("Tablica jest pusta, nie można usunąć elementu.\n");
        return;
    }

    printf("Podaj indeks elementu do usunięcia (0-%d): ", n - 1);
    int index;
    scanf("%d", &index);

    if (index < 0 || index >= n) {
        printf("Nieprawidłowy indeks.\n");
        return;
    }

    for (int i = index; i < n - 1; i++) {
        array[i] = array[i + 1];
    }
    n--;
    printf("Element na indeksie %d został usunięty.\n", index);
}

// Funkcja do obliczania sumy cyfr
int calculateSum(char array[]) {
    if (n == 0) {
        return -1; // Kod błędu dla pustej tablicy
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i] - '0';
    }
    return sum;
}

// Funkcja do wypisywania tablicy jako drzewa binarnego
void printAsTree(char array[]) {
    if (n == 0) {
        printf("Tablica jest pusta.\n");
        return;
    }

    int level = 0;
    int index = 0;

    while (index < n) {
        int elementsInLevel = 1 << level; // 2^level

        // Wyśrodkowanie wiersza
        int spaces = (1 << (5 - level)) - 1;
        for (int i = 0; i < spaces; i++) {
            printf(" ");
        }

        // Wypisanie elementów poziomu
        for (int i = 0; i < elementsInLevel && index < n; i++) {
            printf("%c", array[index++]);
            if (i < elementsInLevel - 1) {
                printf(" ");
            }
        }
        printf("\n");
        level++;
    }
}

int main() {
    char array[MAX_SIZE]; // Tablica znaków o maksymalnym rozmiarze 100

    while (1) {
        printf("\nWybierz opcję:\n");
        printf("0 - Wyjście\n");
        printf("1 - Wypisz elementy tablicy\n");
        printf("2 - Dodaj element do tablicy\n");
        printf("3 - Usuń element z tablicy\n");
        printf("4 - Oblicz sumę cyfr w tablicy\n");
        printf("5 - Wyświetl tablicę jako drzewo binarne\n");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                printf("Kończenie programu.\n");
                return 0;
            case 1:
                printArray(array);
                break;
            case 2:
                addElement(array);
                break;
            case 3:
                removeElement(array);
                break;
            case 4: {
                int sum = calculateSum(array);
                if (sum == -1) {
                    printf("Tablica jest pusta, suma nie może być obliczona.\n");
                } else {
                    printf("Suma cyfr w tablicy: %d\n", sum);
                }
                break;
            }
            case 5:
                printAsTree(array);
                break;
            default:
                printf("Nieprawidłowy wybór, spróbuj ponownie.\n");
        }
    }
}
