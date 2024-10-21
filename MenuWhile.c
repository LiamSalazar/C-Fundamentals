#include <stdio.h>

int main() {
    // Variable de control
    int opcion = 0;
    while (opcion != 4) {
        // Menú
        printf("Seleccione una opcion:\n");
        printf("1-Imprimir los numeros pares\n");
        printf("2-Imprimir los numeros impares\n");
        printf("3-Suma acumulada\n");
        printf("4-Salir\n");
        scanf("%d", &opcion);
        // Procesos
        switch (opcion) {
            case 1:
                printf("Numeros pares:\n");
                for (int i = 2; i <= 100; i++) {
                    if (i % 2 == 0) {
                        printf("%d\n", i);
                    }
                }
                break;
            case 2:
                printf("Numeros impares:\n");
                for (int i = 0; i <= 100; i++) {
                    if (i % 2 != 0) {
                        printf("%d\n", i);
                    }
                }
                break;
            case 3:
                int suma = 0;
                for (int i = 0; i <= 100; i++) {
                    suma += i;
                }
                printf("Suma total: %d\n", suma);
                break;
        }
    }
    return 0;
}
