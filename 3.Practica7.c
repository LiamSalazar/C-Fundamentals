#include <stdio.h>
#include <string.h>

#define N 5

int main() {
    char horario[N][N][4]; 
    char agregar[4] = "";
    // Entrada de datos
    puts("Ingrese las materias correspondientes:");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            switch (i) {
                case 0:
                    printf("LUNES, Bloque %d: ", j + 1);
                    break;
                case 1:
                    printf("MARTES, Bloque %d: ", j + 1);
                    break;
                case 2:
                    printf("MIERCOLES, Bloque %d: ", j + 1);
                    break;
                case 3:
                    printf("JUEVES, Bloque %d: ", j + 1);
                    break;
                case 4:
                    printf("VIERNES, Bloque %d: ", j + 1);
                    break;
            }
            scanf("%3s", agregar);
            strcpy(horario[i][j], agregar);
        }
    }

    // Impresión de matriz
    printf("\nHorario Semanal:\n");
    printf("         Bloque 1  | Bloque 2 | Bloque 3 | Bloque 4 | Bloque 5 |\n");
    for (int i = 0; i < N; i++) {
        // Imprimir el nombre del día de la semana según el valor de i
        switch (i) {
            case 0:
                printf("LUN      ");
                break;
            case 1:
                printf("MAR      ");
                break;
            case 2:
                printf("MIE      ");
                break;
            case 3:
                printf("JUE      ");
                break;
            case 4:
                printf("VIE      ");
                break;
        }
        for (int j = 0; j < N; j++) {
            printf(" %8s |", horario[i][j]);
        }
        printf("\n");
    }

    return 0;
}
