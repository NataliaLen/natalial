#include <stdio.h>

void print_frame(char arr[]) {
    int i, length = 0;

    while (arr[length] != '\0') {
        length++;
    }

    for (i = 0; i < length + 2; i++) {
        printf("*");
    }
    printf("\n");

    for (i = 0; i < length; i++) {
        printf("*%c*", arr[i]);
        printf("\n");
    }

    for (i = 0; i < length + 2; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    char arr[] = "Hello, World!";
    
    print_frame(arr);
    
    return 0;
}
