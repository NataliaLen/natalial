#include <stdio.h>

void zamienMiejscami(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Przed zamianą: x = %d, y = %d\n", x, y);

    zamienMiejscami(&x, &y);

    printf("Po zamianie: x = %d, y = %d\n", x, y);

    return 0;
}
