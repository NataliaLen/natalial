#include <stdio.h>

int is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    }
    return 0;
}

int days_in_month(int month, int year) {
    int days_in_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month < 1 || month > 12) {
        return -1;
    }

    if (month == 2 && is_leap_year(year)) {
        return 29;
    }

    return days_in_months[month - 1];
}

int days_in_year(int year) {
    if (is_leap_year(year)) {
        return 366;
    } else {
        return 365;
    }
}

int days_elapsed(int d, int m, int r) {
    int days = 0;
    for (int i = 1; i < m; i++) {
        days += days_in_month(i, r);
    }
    days += d;
    return days;
}

int days_remaining(int d, int m, int r) {
    int total_days = days_in_year(r);
    int elapsed_days = days_elapsed(d, m, r);
    return total_days - elapsed_days;
}

int main() {
    int d, m, r;
    printf("Podaj dzien, miesiac i rok: ");
    scanf("%d %d %d", &d, &m, &r);

    int remaining = days_remaining(d, m, r);
    printf("Pozostalo %d dni do konca roku %d.\n", remaining, r);

    return 0;
}
