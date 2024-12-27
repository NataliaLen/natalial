#include <stdio.h>

int przekroj_b3(int a1, int b1, int a2, int b2) {
    int a3 = (a1 > a2) ? a1 : a2;
    int b3 = (b1 < b2) ? b1 : b2;

    if (a3 <= b3) {
        return b3;
    } else {
        return -1;
    }
}

int main() {
    printf("%d\n", przekroj_b3(1, 5, 3, 7));
    printf("%d\n", przekroj_b3(1, 3, 4, 7));
    return 0;
}
