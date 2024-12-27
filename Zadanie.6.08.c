#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

int n = 0;

void wypiszTablice(char tab[]) {
    if (n == 0) {
        printf("Tablica jest pusta!\n");
    } else {
        for (int i = 0; i < n; i++) {
            printf("%c ", tab[i]);
        }
        printf("\n");
    }
}

void dodajCyfre(char tab[]) {
    if (n >= MAX_SIZE) {
        printf("Brak miejsca w tablicy!\n");
        return;
    }

    char znak;
    printf("Podaj cyfrę: ");
    scanf(" %c", &znak);
    if (isdigit(znak)) {
        tab[n] = znak;
        n++;
    } else {
        printf("To nie jest cyfra!\n");
    }
}

void usunElement(char tab[]) {
    int indeks;
    printf("Podaj indeks do usunięcia (0 do %d): ", n - 1);
    scanf("%d", &indeks);

    if (indeks < 0 || indeks >= n) {
        printf("Nieprawidłowy indeks!\n");
    } else {
        for (int i = indeks; i < n - 1; i++) {
            tab[i] = tab[i + 1];
        }
        n--;
        printf("Element został usunięty.\n");
    }
}

int sumaCyfr(char tab[]) {
    if (n == 0) {
        return -1;
    }

    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += tab[i] - '0';
    }
    return suma;
}

void wypiszDrzewo(char tab[]) {
    if (n == 0) {
        printf("Tablica jest pusta!\n");
        return;
    }

    int poziom = 1;
    int i = 0;
    while (i < n) {
        int liczbaElementow = 1 << (poziom - 1);
        int szerokosc = 2 * (1 << (poziom - 1));

        for (int j = 0; j < (szerokosc - 1) / 2; j++) {
            printf(" ");
        }

        for (int j = 0; j < liczbaElementow && i < n; j++) {
            printf("%c", tab[i]);
            i++;
            if (j < liczbaElementow - 1) {
                for (int k = 0; k < szerokosc - 1; k++) {
                    printf(" ");
                }
            }
        }
        poziom++;
        printf("\n");
    }
}

int main() {
    char tablica[MAX_SIZE];

    while (1) {
        printf("\nWybierz opcję:\n");
        printf("0 - Zakończ program\n");
        printf("1 - Wyświetl elementy tablicy\n");
        printf("2 - Dodaj cyfrę do tablicy\n");
        printf("3 - Usuń element z tablicy\n");
        printf("4 - Suma cyfr w tablicy\n");
        printf("5 - Wyświetl tablicę jako drzewo binarne\n");

        int wybor;
        scanf("%d", &wybor);

        switch (wybor) {
            case 0:
                printf("Zakończenie programu.\n");
                return 0;

            case 1:
                wypiszTablice(tablica);
                break;

            case 2:
                dodajCyfre(tablica);
                break;

            case 3:
                usunElement(tablica);
                break;

            case 4:
                {
                    int suma = sumaCyfr(tablica);
                    if (suma == -1) {
                        printf("Tablica jest pusta, suma wynosi 0.\n");
                    } else {
                        printf("Suma cyfr: %d\n", suma);
                    }
                }
                break;

            case 5:
                wypiszDrzewo(tablica);
                break;

            default:
                printf("Błędny wybór! Spróbuj ponownie.\n");
                break;
        }
    }

    return 0;
}
