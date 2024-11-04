# include <stdio.h>
#define N 5

int main(){
    int maiz[N][N];
    int i, j;
    int cantidad = 1;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            maiz[i][j]=cantidad;
            cantidad*=2;
            printf("%10d ",cantidad);
        }
        printf("\n");
    }
    return 1;
}