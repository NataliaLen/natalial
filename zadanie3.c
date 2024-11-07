#include <stdio.h>

int main() {
    double liczba1, liczba2;

    printf("Podaj pierwsza liczbe: ");
    scanf("%lf", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%lf", &liczba2);

    if (liczba1 > liczba2) {
        printf("Wieksza liczba to: %.2lf\n", liczba1);
    } else if (liczba2 > liczba1) {
        printf("Wieksza liczba to: %.2lf\n", liczba2);
    } else {
        printf("Obie liczby sa rowne.\n");
    }

    return 0;
}
