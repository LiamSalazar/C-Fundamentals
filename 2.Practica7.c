# include <stdio.h>
#define N 3

int main(){
    int maiz[N][N] ={0};
    int i = 0, j = 0;
    int cantidad = 0;
    // Entrada de datos
    for(i=0;i<N;i++){
        if (i == 0){
            puts("Ubicacion: ALMACEN");
        }
        if (i == 1){
            puts("Ubicacion: PISO VENTAS");
        }
        if (i == 2){
            puts("Ubicacion: REPARACION");
        }
        for(j=0;j<N;j++){
            if (j == 0){
                puts("Categoria: ELECTRONICA");
            }
            if (j == 1){
                puts("Categoria: ROPA");
            }
            if (j == 2){
                puts("Categoria: ALIMENTOS");
            }
            puts("Ingrese la cantidad de productos: ");
            scanf("%d",&cantidad);
            maiz[i][j]=cantidad;
        }
        printf("\n");
    }
    // Impresion de matriz
    puts("Impresion del inventario:");
    puts("           ELECTRONICA | ROPA | ALIMENTOS");
    for(i=0;i<N;i++){
        if (i == 0){
            printf("ALMACEN     ");
        }
        if (i == 1){
            printf("PISO VENTAS ");
        }
        if (i == 2){
            printf("REPARACION  ");
        }
        for(j=0;j<N;j++){
            printf("%8d ",maiz[i][j]);
        }
        printf("\n");
    }
    // Total del inventario
    int total = 0;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            total += maiz[i][j];
        }
        
    }
    printf("Total: %d\n", total);
    return 1;
}
