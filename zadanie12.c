#include <stdio.h>

int main() {
    int num;

    printf("Podaj liczbe: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Liczba jest podzielna przez 2.\n");
    } else if (num % 3 == 0) {
        printf("Liczba jest podzielna przez 3.\n");
    } else if (num % 4 == 0) {
        printf("Liczba jest podzielna przez 4.\n");
    } else if (num % 5 == 0) {
        printf("Liczba jest podzielna przez 5.\n");
    } else if (num % 6 == 0) {
        printf("Liczba jest podzielna przez 6.\n");
    } else {
        printf("Liczba nie jest podzielna przez zadna z liczb 2, 3, 4, 5, 6.\n");
    }

    return 0;
}
