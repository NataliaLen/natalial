#include <stdio.h>

int main() {
    int secret_number = 3;
    int guess;
    int attempts = 3;

    printf("Zgadnij liczbe z zakresu 1-5! Masz 3 szanse.\n");

    while (attempts > 0) {
        printf("Podaj swoja liczbe: ");
        scanf("%d", &guess);

        if (guess < 1 || guess > 5) {
            printf("Liczba poza zakresem! Straciles szanse.\n");
        } else if (guess == secret_number) {
            printf("Brawo! Zgadles liczbe.\n");
            return 0;
        } else {
            printf("Nie zgadles. Pozostalo %d szans.\n", --attempts);
        }
    }

    printf("Nie zgadles liczby. Koniec gry.\n");

    return 0;
}
