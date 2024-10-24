#include <stdio.h>
int main(){
    int num;
    printf("Introduce la altura del triangulo: \n");
    scanf("%d", &num);
    for(int i=1; i <= num; i++){
        for(int j=1; j <= num; j++){
            if(j<i){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}