# include <stdio.h>
# define N 5

int main(){
    int array[N];
    int *p;
    float suma = 0;
    float promedio = 0;
    // Entrada en el array
    for(p = array; p < array + N; p++ ){
        puts("Ingrese las calificaciones: ");
        scanf("%d",p);
    }
    // Promedio
    for(p = array; p < array + N; p++){
        suma += *p;
    }
    promedio = suma / 5;
    printf("El promedio es: %.2f\n", promedio);
    return 0;
}