#include <stdio.h>
#include <string.h>

int main() {
    // Variables de control
    int opcion = 0;
    char cadena[100];
    int contador = 0;
    int contador2 = 0;
    
    // Escribir cadena (se solicita una sola vez)
    puts("Escribe una cadena:");
    scanf(" %[^\n]", cadena); // Leer la cadena completa incluyendo espacios
    size_t longitud = strlen(cadena); // Calcular la longitud de la cadena

    while (opcion != 4) {
        // Menú
        printf("Seleccione una opcion:\n");
        printf("1- Contar palabras (basado en espacios)\n");
        printf("2- Mostrar cada palabra en una línea\n");
        printf("3- Contar vocales\n");
        printf("4- Salir\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: // Contar palabras basándose solo en los espacios
                contador = 0; // Iniciar contador en 0
                if (longitud > 0) {
                    contador = 1; // Al menos hay una palabra si la longitud es mayor que 0
                    for (int i = 0; i < longitud; i++) {
                        if (cadena[i] == ' ' && cadena[i+1] != ' ' && cadena[i+1] != '\0') {
                            contador++; // Aumenta el contador por cada espacio entre palabras
                        }
                    }
                }
                printf("Cantidad de palabras (basado en espacios): %d\n", contador);
                break;

            case 2: // Mostrar cada palabra en una nueva línea
                for (int i = 0; i < longitud; i++) {
                    if (cadena[i] != ' ') {
                        printf("%c", cadena[i]); // Imprime la letra
                    } else {
                        printf("\n"); // Salto de línea cuando encuentra un espacio
                    }
                }
                printf("\n"); // Salto de línea al final
                break;

            case 3: // Contar vocales
                contador2 = 0;
                for (int i = 0; i < longitud; i++) {
                    if (cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' ||
                        cadena[i] == 'o' || cadena[i] == 'u' || cadena[i] == 'A' ||
                        cadena[i] == 'E' || cadena[i] == 'I' || cadena[i] == 'O' || cadena[i] == 'U') {
                        contador2++;
                    }
                }
                printf("Cantidad de vocales: %d\n", contador2);
                break;

            case 4: // Salir
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion no valida.\n");
        }
    }

    return 0;
}
