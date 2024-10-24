#include <stdio.h>
int main(){
    int num;
    printf("Introduce la altura del triangulo: \n");
    scanf("%d", &num);
    for(int i=0; i < num+1; i++){
        for(int j=num;j>i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}