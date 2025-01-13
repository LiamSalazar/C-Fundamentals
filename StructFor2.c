# include<stdio.h>
# define N 5

struct Estudiante{
    char nombre[50];
    int edad;
};

int main(){
    struct Estudiante estudiantes[N];
    for(int i=0; i<N; i++){
        printf("Ingrese el nombre del estudiante %d\n", i+1);
        scanf("%s", estudiantes[i].nombre);
        printf("Ingrese la edad del estudiante %d\n", i+1);
        scanf("%d", &estudiantes[i].edad);
    }
    for(int i=0; i<N; i++){
        printf("Nombre del estudiante %d: %s\n", i+1, estudiantes[i].nombre);
        printf("Edad del estudiante %d: %d\n", i+1, estudiantes[i].edad);
    }
    return 0;
}