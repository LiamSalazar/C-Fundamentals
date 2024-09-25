#include <stdio.h>
#include <string.h>

// Funcion Principal
int main(){
	// Declaración de variables
	char nombre[] = "";
	int tiempo = 0;
	int asistencias = 0;
	int pagos = 0;
	int aumentoActividad = 0;
	int solicitudDescuento = 0;
	
	// Entrada de valores
	printf("Ingrese su nombre: \n");
    scanf("%s", &nombre);
	printf("Ingrese los años de membresia: \n");
    scanf("%d", &tiempo);
	printf("Ingrese el numero de asistencias mensuales: \n");
    scanf("%d", &asistencias);
	printf("Ingrese el numero de pagos puntuales en el ultimo año: \n");
    scanf("%d", &pagos);
	printf("Ha aumentado su actividad fisica recientemente? 1-SI, 0-NO: \n");
    scanf("%d", &aumentoActividad);
	printf("Ha solicitado un descuento por pago adelantado? 1-SI, 0-NO: \n");
    scanf("%d", &solicitudDescuento);
	
	// Operadores Unarios
	(aumentoActividad > 0) ? asistencias ++: (void)0;
	printf("Asistencias: %d\n", asistencias);
	(pagos < 12) ? pagos--: (void)0;
	printf("Pagos Puntuales: %d\n", pagos);
	solicitudDescuento = !solicitudDescuento;
	printf("Negacion de solicitud de descuento: %d\n", solicitudDescuento);
	
	// Evaluaciones logicas y condicionales:
	int condiciones = 0;
	(tiempo > 2) ? printf("Tiempo de membresia: SI\n"): printf("Tiempo de membresia: NO\n");
	(tiempo > 2) ? condiciones++ : (void)0;
	(asistencias > 11) ? printf("Asistencias mensuales: SI\n"): printf("Asistencias mensuales: NO\n");
	(asistencias > 11) ? condiciones++ : (void)0;
	(pagos > 9) ? printf("Pagos puntuales: SI\n") : printf("Pagos puntuales: NO\n");
	(pagos > 9) ? condiciones++ : (void)0;
    	// Cuantas condiciones cumple
	(condiciones > 1) ? printf("Cuple al menos dos condiciones: SI\n") : printf("Cuple al menos dos condiciones: NO\n");
	(condiciones < 1) ? printf("No cumple ninguna condicion: SI\n") : printf("No cumple ninguna condicion: NO\n");
	
	// Asignaciones Condicionales
	int estatus = (condiciones > 1) ? 1 : 0;
	(estatus > 0) ? printf("Estatus: ELEGIBLE\n") : printf("Estatus: NO ELEGIBLE\n");
	int beneficios = (estatus > 0) ? 1: 0;
	(beneficios > 0) ? printf("Beneficios: Acceso ilimitado a clases especiales, descuentos en productos y asesoramiento personalizado\n"):printf("Beneficios: Sin beneficios\n");
	
	// Calculo de descuento
	int descuento = 0;
    	int bandera = 0;
    	solicitudDescuento = !solicitudDescuento;
	(condiciones > 1 && solicitudDescuento > 0) ? descuento = 15 : bandera++;
    	((condiciones < 2 && solicitudDescuento < 1) && bandera == 1) ? descuento = 0: bandera ++;
    	(bandera == 2) ? descuento = 5: printf("Invalido");
	printf("Descuento de: %d\n", descuento);
	
	return 0;
}
