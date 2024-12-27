#include <stdio.h>

int is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    }
    return 0;
}

int is_valid_date(int d, int m, int r) {
    if (m < 1 || m > 12) {
        return 0;
    }

    int days_in_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (is_leap_year(r)) {
        days_in_months[1] = 29;
    }

    if (d < 1 || d > days_in_months[m - 1]) {
        return 0;
    }

    return 1;
}

int main() {
    int d, m, r;
    printf("Podaj dzien, miesiac i rok: ");
    scanf("%d %d %d", &d, &m, &r);

    if (is_valid_date(d, m, r)) {
        printf("To jest poprawna data.\n");
    } else {
        printf("To nie jest poprawna data.\n");
    }

    return 0;
}
