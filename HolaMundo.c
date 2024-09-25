#include <stdio.h>
int main (){
	int num1 = 0;
	int num2 = 0;
	int operacion = 0;
	float resultado = 0;
	
	printf("Escriba el primer número \n");
	scanf("%d", &num1);
	printf("Escriba el segundo número \n");
	scanf("%d", &num2);
	printf("Seleccione la operación: \n" );
	printf("1 Suma \n" );
	printf("2 Resta \n" );
	printf("3 Multiplicación \n" );
	printf("4 División \n" );
	scanf("%d", &operacion);
	switch (operacion){
		case 1:
			resultado = num1+num2;
			break;
		case 2:
			resultado = num1-num2;
			break;
		case 3:
			resultado = num1*num2;
			break;
		case 4:
			resultado = num1/num2;
			break;
	}
	printf("Resultado: %f", resultado);
	return 0;
}