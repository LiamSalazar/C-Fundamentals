#include <stdio.h>
#include <string.h>

int main() {
    // Variables de control
    int opcion = 0;
    char cadena[100];
    int contador = 0;
    int contador2 = 0;
    puts("Escribe una cadena:");
    scanf(" %[^\n]", cadena); 
    size_t longitud = strlen(cadena); 

    while (opcion != 4) {
        // Menú
        printf("Seleccione una opcion:\n");
        printf("1- Contar palabras (basado en espacios)\n");
        printf("2- Mostrar cada palabra en una línea\n");
        printf("3- Contar vocales\n");
        printf("4- Salir\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: 
                contador = 0; 
                if (longitud > 0) {
                    contador = 1; 
                    for (int i = 0; i < longitud; i++) {
                        if (cadena[i] == ' ' && cadena[i+1] != ' ' && cadena[i+1] != '\0') {
                            contador++;
                        }
                    }
                }
                printf("Cantidad de palabras: %d\n", contador);
                break;

            case 2: 
                for (int i = 0; i < longitud; i++) {
                    if (cadena[i] != ' ') {
                        printf("%c", cadena[i]); 
                    } else {
                        printf("\n"); 
                    }
                }
                printf("\n"); 
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
        }
    }
    return 0;
}
