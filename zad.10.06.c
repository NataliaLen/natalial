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

int main() {
    int month, year;
    printf("Podaj miesiąc i rok: ");
    scanf("%d %d", &month, &year);

    int days = days_in_month(month, year);
    if (days == -1) {
        printf("Niepoprawny miesiąc.\n");
    } else {
        printf("Miesiąc %d w roku %d ma %d dni.\n", month, year, days);
    }

    return 0;
}
