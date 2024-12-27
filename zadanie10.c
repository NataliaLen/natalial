#include <stdio.h>

int main() {
    float a, b, c;

    printf("Podaj dlugosc pierwszego odcinka: ");
    scanf("%f", &a);
    printf("Podaj dlugosc drugiego odcinka: ");
    scanf("%f", &b);
    printf("Podaj dlugosc trzeciego odcinka: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Odcinki moga tworzyc trojkat.\n");
    } else {
        printf("Odcinki nie moga tworzyc trojkat.\n");
    }

    return 0;
}
