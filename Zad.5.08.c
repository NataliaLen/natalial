#include <stdio.h>

void sortujLiczby(int *a, int *b, int *c) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c) {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int a = 5, b = 2, c = 8;
    sortujLiczby(&a, &b, &c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}
