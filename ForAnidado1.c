#include <stdio.h>
int main(){
    int num;
    printf("Introduce el lado del cuadrado: \n");
    scanf("%d", &num);

    for(int i=0; i < num; i++){
        for(int j=0; j < num; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}