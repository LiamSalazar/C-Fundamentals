#include <stdio.h>

#define N 5 

void menu();
void introducirDatos(int arr[]);
int sumar(int arr[]);
int restar();
void multiplicar(int arr[]);
void dividir();

int *arreglo = NULL;

int main() {
    menu();
    return 0;
}

void menu() {
    int datos[N]; 
    arreglo = datos; 
    int opcion;
    int suma, resta;

    do {
        printf("\nMenú:\n");
        printf("1) Introducir datos a un arreglo\n");
        printf("2) Sumar datos del arreglo\n");
        printf("3) Restar datos del arreglo\n");
        printf("4) Multiplicar datos del arreglo\n");
        printf("5) Dividir datos del arreglo\n");
        printf("6) Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                introducirDatos(datos);
                break;
            case 2:
                suma = sumar(datos);
                printf("SUMA: %d\n", suma);
                break;
            case 3:
                resta = restar();
                printf("RESTA: %d\n", resta);
                break;
            case 4:
                multiplicar(datos);
                break;
            case 5:
                dividir();
                break;
            case 6:
                printf("SALIDA\n");
                break;
        }
    } while (opcion != 6);
}

void introducirDatos(int *arr) {
    printf("Introduzca %d datos para el arreglo:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Dato %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int sumar(int *arr) {
    int suma = 0;
    for (int i = 0; i < N; i++) {
        suma += arr[i];
    }
    return suma;
}

int restar() {
    int *arr = arreglo; 
    int resta = arr[0]; 
    for (int i = 1; i < N; i++) {
        resta -= arr[i];
    }
    return resta;
}

void multiplicar(int *arr) {
    int mult = 1;
    for (int i = 0; i < N; i++) {
        mult *= arr[i];
    }
    printf("MULTIPLICACION: %d\n", mult);
}

void dividir() {
    int *arr = arreglo; 
    float division = arr[0]; 
    for (int i = 1; i < N; i++) {
        division /= arr[i];
    }
    printf("DIVISION: %.2f\n", division);
}

