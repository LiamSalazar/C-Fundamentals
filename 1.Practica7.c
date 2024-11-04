# include <stdio.h>
#define N 7
#define M 3

int main(){
    float maiz[N][M] = {0};
    int i = 0, j = 0;
    float cantidad = 0;
    // Entrada de temperaturas
    for(i=0;i<N;i++){
        printf("DIA NUMERO: %d\n", i+1);
        for(j=0;j<M;j++){
            printf("Ingrese la temperatura del turno numero: %d\n",j+1);
            scanf("%f",&cantidad);
            maiz[i][j]=cantidad;
        }
        printf("\n");
    }
    // Impresion de matriz
    puts("Impresion de la Matriz:");
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%.1f ",maiz[i][j]);
        }
        printf("\n");
    }
    // Promedio diario
    for(i=0;i<N;i++){
        float totalDiario = 0;
        float promedioD = 0;
        for(j=0;j<M;j++){
            totalDiario += maiz[i][j];
            promedioD = totalDiario/3;
        }
        printf("Promedio de Dia: %d = %.1f ",i+1, promedioD);
        printf("\n");
    }
    // Promedio semanal
    float totalS = 0;
    float promedioS = 0;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            totalS += maiz[i][j];
        }
        
    }
    promedioS = totalS/21;
    printf("Promedio de Semana: %.1f\n", promedioS);
    
    return 1;
}