#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Podaj dlugosc pierwszego odcinka: ");
    scanf("%f", &a);
    printf("Podaj dlugosc drugiego odcinka: ");
    scanf("%f", &b);
    printf("Podaj dlugosc trzeciego odcinka: ");
    scanf("%f", &c);

    if (a > b) {
        float temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        float temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        float temp = a;
        a = b;
        b = temp;
    }

    if (a * a + b * b == c * c) {
        printf("Odcinki moga tworzyc trojkat prostokatny.\n");
    } else {
        printf("Odcinki nie moga tworzyc trojkat prostokatny.\n");
    }

    return 0;
}
