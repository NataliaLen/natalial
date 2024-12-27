#include <stdio.h>

int* przekroj_odcinkow(int a1, int b1, int a2, int b2) {
    static int wynik[2];
    int a3 = (a1 > a2) ? a1 : a2;
    int b3 = (b1 < b2) ? b1 : b2;

    if (a3 <= b3) {
        wynik[0] = a3;
        wynik[1] = b3;
        return wynik;
    } else {
        return NULL;
    }
}

int main() {
    int* wynik = przekroj_odcinkow(1, 5, 3, 7);
    if (wynik != NULL) {
        printf("Przekrój: [%d, %d]\n", wynik[0], wynik[1]);
    } else {
        printf("Brak przekroju\n");
    }
    return 0;
}
