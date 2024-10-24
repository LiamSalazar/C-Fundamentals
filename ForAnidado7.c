#include <stdio.h>

int main() {
    int num;
    printf("Introduce la altura del triangulo: \n");
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            if(j < i){
                printf(" ");
            } else {
                printf("*");
            }
        }
        for(int j = num - 1; j > i; j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
