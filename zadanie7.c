#include <stdio.h>

int main() {
    int dzien, miesiac, rok;

    printf("Podaj dzien: ");
    scanf("%d", &dzien);
    printf("Podaj miesiac: ");
    scanf("%d", &miesiac);
    printf("Podaj rok: ");
    scanf("%d", &rok);

    if (miesiac < 1 || miesiac > 12) {
        printf("Niepoprawny miesiac.\n");
    } else {
        int dni_w_miesiacu;

        switch (miesiac) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                dni_w_miesiacu = 31;
                break;
            case 4: case 6: case 9: case 11:
                dni_w_miesiacu = 30;
                break;
            case 2:
                if ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)) {
                    dni_w_miesiacu = 29;
                } else {
                    dni_w_miesiacu = 28;
                }
                break;
        }

        if (dzien < 1 || dzien > dni_w_miesiacu) {
            printf("Niepoprawny dzien.\n");
        } else {
            printf("Podana data: %02d-%02d-%d jest poprawna.\n", dzien, miesiac, rok);
        }
    }

    return 0;
}
