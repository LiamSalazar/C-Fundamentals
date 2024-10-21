#include <stdio.h>
#include <string.h>

int main() {
    // Variables de control
    int opcion = 0;
    char cadena[100];
    int contador = 0;
    int contador2 = 0;
    
    // Escribir palabra
    puts("Escribe una frase:");
    scanf(" %[^\n]", cadena); // Leer cadena completa incluyendo espacios
    size_t longitud = strlen(cadena); // Calcular longitud de la cadena

    while (opcion != 4) {
        // Menú
        printf("Seleccione una opcion:\n");
        printf("1- Contar palabras\n");
        printf("2- Mostrar cada palabra\n");
        printf("3- Contar vocales\n");
        printf("4- Salir\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: // Contar palabras
                contador = 0;
                int en_palabra = 0; // Variable para saber si estamos dentro de una palabra
                for (int i = 0; i < longitud; i++) {
                    if (cadena[i] != ' ' && !en_palabra) {
                        contador++;
                        en_palabra = 1; // Estamos dentro de una palabra
                    } else if (cadena[i] == ' ') {
                        en_palabra = 0; // Salimos de la palabra
                    }
                }
                printf("Cantidad de palabras: %d\n", contador);
                break;

            case 2: // Mostrar cada palabra en una línea
                for (int i = 0; i < longitud; i++) {
                    if (cadena[i] != ' ') {
                        printf("%c", cadena[i]); // Imprime la letra
                    } else if (i > 0 && cadena[i - 1] != ' ') {
                        printf(" "); // Imprime un espacio entre palabras
                    }
                }
                printf("\n"); // Salto de línea después de imprimir todas las palabras
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
