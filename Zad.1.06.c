#include <stdio.h>

// Funkcje wykonujące działania arytmetyczne
float dodaj(float a, float b) {
    return a + b;
}

float odejmij(float a, float b) {
    return a - b;
}

float mnoz(float a, float b) {
    return a * b;
}

float dziel(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Blad: dzielenie przez zero!\n");
        return 0;
    }
}

int main() {
    float liczba1, liczba2, wynik;
    int wybor;

    printf("Podaj pierwsza liczbe: ");
    scanf("%f", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%f", &liczba2);

    printf("Wybierz dzialanie:\n");
    printf("1. Dodawanie\n");
    printf("2. Odejmowanie\n");
    printf("3. Mnozenie\n");
    printf("4. Dzielenie\n");
    printf("Twoj wybor: ");
    scanf("%d", &wybor);

    switch (wybor) {
        case 1:
            wynik = dodaj(liczba1, liczba2);
            printf("Wynik dodawania: %.2f\n", wynik);
            break;
        case 2:
            wynik = odejmij(liczba1, liczba2);
            printf("Wynik odejmowania: %.2f\n", wynik);
            break;
        case 3:
            wynik = mnoz(liczba1, liczba2);
            printf("Wynik mnozenia: %.2f\n", wynik);
            break;
        case 4:
            wynik = dziel(liczba1, liczba2);
            printf("Wynik dzielenia: %.2f\n", wynik);
            break;
        default:
            printf("Nieprawidlowy wybor!\n");
            break;
    }

    return 0;
}
