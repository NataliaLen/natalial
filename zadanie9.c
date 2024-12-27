#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;
    float width, height, area, perimeter;

    printf("Podaj wspolrzedne pierwszego wierzcholka (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Podaj wspolrzedne drugiego wierzcholka (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    width = fabs(x2 - x1);
    height = fabs(y2 - y1);

    area = width * height;
    perimeter = 2 * (width + height);

    printf("Pole prostokata: %.2f\n", area);
    printf("Obwod prostokata: %.2f\n", perimeter);

    return 0;
}
