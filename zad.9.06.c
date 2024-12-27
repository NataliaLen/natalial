#include <stdio.h>

int is_leap_year(int r) {
    if ((r % 4 == 0 && r % 100 != 0) || r % 400 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int r;
    printf("Podaj rok: ");
    scanf("%d", &r);

    if (is_leap_year(r)) {
        printf("Rok %d jest rokiem przestępnym.\n", r);
    } else {
        printf("Rok %d nie jest rokiem przestępnym.\n", r);
    }

    return 0;
}
