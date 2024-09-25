#include <stdio.h>
int main(){
    int num;
    printf("Introduce un numero entero: \n");
    scanf("%d", &num);

    if (num < 0) num = -num;
    printf("el valor absoluto es: %d\n", num);
    return 0;
}