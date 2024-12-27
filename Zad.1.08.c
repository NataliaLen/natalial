#include <stdio.h>

int zmiennaGlobalna = 42;

void wypiszAdresy(int a, int b) {
    printf("Adres zmiennej a: %p\n", (void*)&a);
    printf("Adres zmiennej b: %p\n", (void*)&b);
}

int main() {
    int zmiennaLokalna = zmiennaGlobalna;

    printf("Adres zmiennej globalnej: %p\n", (void*)&zmiennaGlobalna);
    printf("Adres zmiennej lokalnej: %p\n", (void*)&zmiennaLokalna);

    wypiszAdresy(zmiennaGlobalna, zmiennaLokalna);

    return 0;
}
