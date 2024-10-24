#include <stdio.h>

int main() {
    int altura;
    printf("Introduce la altura del rombo\n");
    scanf("%d", &altura);

    if (altura % 2 == 0) {
        int mitad = altura / 2;

        for(int i = 0; i < mitad; i++) {
            for(int j = 0; j < mitad - i; j++) {
                printf(" ");
            }
            for(int k = 0; k < 2 * i + 1; k++) {
                printf("*");
            }
            printf("\n");
        }

        for(int i = mitad-1; i >= 0; i--) {
            for(int j = 0; j < mitad - i; j++) {
                printf(" ");
            }
            for(int k = 0; k < 2 * i + 1; k++) {
                printf("*");
            }
            printf("\n");
        }

    }
    else {
        int mitad = altura / 2;

        for(int i = 0; i <= mitad; i++) {
            for(int j = 0; j < mitad - i; j++) {
                printf(" ");
            }
            for(int k = 0; k < 2 * i + 1; k++) {
                printf("*");
            }
            printf("\n");
        }
        for(int i = mitad - 1; i >= 0; i--) {
            for(int j = 0; j < mitad - i; j++) {
                printf(" ");
            }
            for(int k = 0; k < 2 * i + 1; k++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
