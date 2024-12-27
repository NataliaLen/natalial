#include <stdio.h>
#include <math.h>

int main() {
    float radian, degree;
    int choice;

    printf("Dla 0 radianow wybierz 1\n");
    printf("Dla 1/6 Pi rad wybierz 2\n");
    printf("Dla 1/4 Pi rad wybierz 3\n");
    printf("Dla 1/3 Pi rad wybierz 4\n");
    printf("Dla 1/2 Pi rad wybierz 5\n");

    printf("Wybierz opcje: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            radian = 0;
            break;
        case 2:
            radian = M_PI / 6;
            break;
        case 3:
            radian = M_PI / 4;
            break;
        case 4:
            radian = M_PI / 3;
            break;
        case 5:
            radian = M_PI / 2;
            break;
        default:
            printf("Niepoprawny wybór.\n");
            return 1;
    }

    degree = radian * 180 / M_PI;
    printf("%.2f radianów to %.2f stopni\n", radian, degree);

    return 0;
}
