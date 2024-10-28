#include <stdio.h>
#include <ctype.h>

void procesarCadena(char *cadena) {
    int j = 0;
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] != ' ') {  // Eliminar espacios
            cadena[j] = tolower(cadena[i]);  // Convertir a minúscula
            j++;
        }
    }
    cadena[j] = '\0';  // Terminar la cadena
}

int main() {
    char cadena[] = "Ejemplo de Cadena Con Espacios";
    procesarCadena(cadena);
    printf("Cadena procesada: %s\n", cadena);
    return 0;
}
