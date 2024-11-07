#include <stdio.h>

int main() {
    double liczba1, liczba2;

    printf("Podaj pierwsza liczbe: ");
    scanf("%lf", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%lf", &liczba2);

    double dodawanie = liczba1 + liczba2;
    double odejmowanie = liczba1 - liczba2;
    double mnozenie = liczba1 * liczba2;

    if (liczba2 != 0) {
        double dzielenie = liczba1 / liczba2;
        int reszta = (int)liczba1 % (int)liczba2;
        printf("Wynik dodawania: %.2lf\n", dodawanie);
        printf("Wynik odejmowania: %.2lf\n", odejmowanie);
        printf("Wynik mnozenia: %.2lf\n", mnozenie);
        printf("Wynik dzielenia: %.2lf\n", dzielenie);
        printf("Reszta z dzielenia: %d\n", reszta);
    } else {
        printf("Nie mozna dzielic przez zero!\n");
    }

    return 0;
}
