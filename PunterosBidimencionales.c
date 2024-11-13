# include <stdio.h>
# define N 10

int main(){
    int matriz[N][N];
    int *p;
    int *q;
    int asignar = 0;
    int suma = 0;
    int apoyo = 0;
    // Asignación de números a la matriz
    for(p = &matriz[0][0]; p < &matriz[0][0] + N*N; p++ ){
        asignar ++;
        *p = asignar;
    }
    puts("-------------------------------------");
    puts("Matriz original");
    puts("-------------------------------------");
    // Impresión de la matriz
    for(p = &matriz[0][0]; p < &matriz[0][0] + N*N; p++ ){
        if(*p%N == 0){
            printf("%d\t\n", *p);
        }else{
            printf("%d \t", *p);
        }
    }
    // Modificación de elementos
    for(p = &matriz[0][0]; p < &matriz[0][0] + N*N; p++ ){
        *p = *p*2;
    }
    puts("-------------------------------------");
    puts("Matriz con elementos modificacdos (x2)");
    puts("-------------------------------------");
    // Impresión matriz modificada
    for(p = &matriz[0][0]; p < &matriz[0][0] + N*N; p++ ){
        if(*p%(N*2) == 0){
            printf("%d\t\n", *p);
        }else{
            printf("%d \t", *p);
        }
    }
    puts("-------------------------------------");
    puts("Suma de la diagonal principal");
    puts("-------------------------------------");
    // Suma de diagonal principal
    p = &matriz[0][0];
    for (int i = 0; i < N; i++){
        suma += *p;
        p += N+1;
    }
    printf("SUMA: %d\n", suma);
    puts("-------------------------------------");
    puts("Intercambio de primera y ultima fila");
    puts("-------------------------------------");
    // Intercambio de filas
    p = &matriz[0][0];
    for (int i = 0; i < N; i++){
        q = p+(N*(N-1));
        apoyo = *p;
        *p = *q;
        *q = apoyo;
        p++;
    }
        for(p = &matriz[0][0]; p < &matriz[0][0] + N*N; p++ ){
        if(*p%(N*2) == 0){
            printf("%d\t\n", *p);
        }else{
            printf("%d \t", *p);
        }
    }
    return 0;
}