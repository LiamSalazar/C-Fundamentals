#include <stdio.h>

int main() {
    // Variable de control
    int opcion = 0;
	int i = 0, suma = 0;
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
				i = 2;
                printf("Numeros pares:\n");
                while (i <= 100) {
                    if (i % 2 == 0) {
                        printf("%d\n", i);
                    }
                    i++;
                }
                break;
            case 2:
				i = 1;
                printf("Numeros impares:\n");
                while (i <= 100) {
                    if (i % 2 != 0) {
                        printf("%d\n", i);
                    }
                    i++;
                }
                break;
            case 3:
				i = 0;
                while (i <= 100) {
                    suma += i;
                    i++;
                }
                printf("Suma total: %d\n", suma);
                break;
        }
    }
    return 0;
}
