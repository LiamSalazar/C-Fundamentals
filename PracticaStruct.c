# include <stdio.h>

int main(){
    struct Persona{
        char nombre[20];
        int edad;
    };
    struct Persona persona;
    printf("Ingrese el nombre de la persona: ");
    gets(persona.nombre);
    printf("Ingrese la edad de la persona: ");
    scanf("%d", &persona.edad);
    printf("La persona se llama %s y tiene %d años.\n", persona.nombre, persona.edad);
    return 0;
}