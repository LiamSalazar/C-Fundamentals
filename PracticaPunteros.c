#include <stdio.h>

int main() {
    int a, b, c, *p1, *p2;

    p1 = &a;     // Paso 1: p1 apunta a la dirección de 'a'.
    *p1 = 1;     // Paso 2: Se asigna el valor 1 a 'a' a través de p1.

    p2 = &b;     // Paso 3: p2 apunta a la dirección de 'b'.
    *p2 = 2;     // Paso 4: Se asigna el valor 2 a 'b' a través de p2.

    p1 = p2;     // Paso 5: p1 ahora apunta a la dirección de 'b' (la misma que p2).
    *p1 = 0;     // Paso 6: Se asigna el valor 0 a 'b' a través de p1 (como apunta a 'b').

    p2 = &c;     // Paso 7: p2 ahora apunta a la dirección de 'c'.
    *p2 = 3;     // Paso 8: Se asigna el valor 3 a 'c' a través de p2.

    printf("%d %d %d\n", a, b, c); // Paso 9: Se imprime el valor de 'a', 'b' y 'c'.

    return 0;
}

// p = &variable - Almacena en el puntero la dirección en memoria.
// *p = valor - Usa la dirección de la variable para modificar su valor.
// & - Hace referencia a la direccion de memoria de una variable.
// *p - Permite acceder a la variable referenciada, no al puntero en sí.
// p - Accede directamente al puntero, es decir, modifica hacia qué apunta.
// * para acceder a lo que apunta el puntero y p para acceder al valor del puntero.
