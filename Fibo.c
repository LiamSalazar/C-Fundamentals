#include <stdio.h>

// Funcion recursiva de fibonancci
int fibo(int n){
	if (n <= 2){
		return 1;
	}else{
		return fibo(n-1)+fibo(n-2);
	}
}

// Funcion Principal
int main(){
	int n = 0;
	int resultado = -1;
	printf("Escriba un numero n: \n");
	scanf("%d", &n);
	(n > 0) ? resultado = fibo(n) : printf("Numero invalido \n");
	printf("Resultado: %d", resultado);
	return 0;
}

