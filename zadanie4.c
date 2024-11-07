#include <stdio.h>

int main() {
    double liczba1, liczba2, liczba3;

    printf("Podaj pierwsza liczbe: ");
    scanf("%lf", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%lf", &liczba2);
    printf("Podaj trzecia liczbe: ");
    scanf("%lf", &liczba3);

    if (liczba1 >= liczba2 && liczba1 >= liczba3) {
        printf("Najwieksza liczba to: %.2lf\n", liczba1);
    } else if (liczba2 >= liczba1 && liczba2 >= liczba3) {
        printf("Najwieksza liczba to: %.2lf\n", liczba2);
    } else {
        printf("Najwieksza liczba to: %.2lf\n", liczba3);
    }

    return 0;
}
