#include <stdio.h>

void printBinary(int n) {
    if (n > 0) {
        printBinary(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
    } else {
        printBinary(n);
    }

    return 0;
}
