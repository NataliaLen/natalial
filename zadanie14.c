#include <stdio.h>
#include <math.h>

int main() {
    float degrees, radians;

    printf("Podaj kat w stopniach: ");
    scanf("%f", &degrees);

    radians = degrees * M_PI / 180;

    printf("%.2f stopni to %.2f radianow\n", degrees, radians);

    return 0;
}
