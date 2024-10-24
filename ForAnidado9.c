#include <stdio.h>
int main(){
    int num = 0, num2 = 0;
    printf("Introduce los lados del rectangulo: \n");
    scanf("%d %d", &num, &num2);

    for(int i=0; i < num; i++){
        for(int j=0; j < num2; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}