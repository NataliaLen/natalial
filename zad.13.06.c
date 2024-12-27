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

int days_elapsed(int d, int m, int r) {
    int days = 0;
    for (int i = 1; i < m; i++) {
        days += days_in_month(i, r);
    }
    days += d;
    return days;
}

int total_days(int d, int m, int r) {
    int days = 0;
    for (int i = 1; i < r; i++) {
        days += (is_leap_year(i)) ? 366 : 365;
    }
    days += days_elapsed(d, m, r);
    return days;
}

int compare_dates(int d1, int m1, int r1, int d2, int m2, int r2) {
    int total_days1 = total_days(d1, m1, r1);
    int total_days2 = total_days(d2, m2, r2);

    if (total_days1 < total_days2) {
        return 1; // Pierwsza data jest wcześniejsza
    } else if (total_days1 > total_days2) {
        return 2; // Druga data jest wcześniejsza
    } else {
        return 0; // Obie daty są takie same
    }
}

int main() {
    int d1, m1, r1, d2, m2, r2;
    printf("Podaj pierwsza date (dzien, miesiac, rok): ");
    scanf("%d %d %d", &d1, &m1, &r1);
    printf("Podaj druga date (dzien, miesiac, rok): ");
    scanf("%d %d %d", &d2, &m2, &r2);

    int result = compare_dates(d1, m1, r1, d2, m2, r2);
    if (result == 1) {
        printf("Pierwsza data jest wczesniejsza.\n");
    } else if (result == 2) {
        printf("Druga data jest wczesniejsza.\n");
    } else {
        printf("Obie daty sa takie same.\n");
    }

    return 0;
}
