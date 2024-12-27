#include <stdio.h>

int main() {
    int secret_number = 3;
    int guess;
    int attempts = 4;
    int wrong_guesses[4];

    printf("Zgadnij liczbe z zakresu 1-5! Masz 4 szanse.\n");

    while (attempts > 0) {
        printf("Podaj swoja liczbe: ");
        scanf("%d", &guess);

        if (guess < 1 || guess > 5) {
            printf("Liczba poza zakresem! Sprobuj ponownie.\n");
        } else {
            printf("Zla liczba!\n");
            wrong_guesses[4 - attempts] = guess;
            attempts--;
        }
    }

    for (int i = 1; i <= 5; i++) {
        int is_wrong = 0;
        for (int j = 0; j < 4; j++) {
            if (wrong_guesses[j] == i) {
                is_wrong = 1;
                break;
            }
        }
        if (!is_wrong) {
            printf("Poprawna liczba to %d.\n", i);
            break;
        }
    }

    return 0;
}
