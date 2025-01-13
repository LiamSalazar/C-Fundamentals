#include<stdio.h>
#include<string.h>

struct Person {
    char name[50]; // Arreglo en lugar de puntero
    int age;
};

int main() {
    struct Person people[5];

    // Captura de datos
    for(int i = 0; i < 5; i++) {
        printf("Enter name of person %d: ", i+1);
        scanf("%49s", people[i].name); // Limita la entrada a 49 caracteres
        printf("Enter age of person %d: ", i+1);
        scanf("%d", &people[i].age);
    }

    // Impresión de datos
    for(int i = 0; i < 5; i++) {
        printf("Person %d\n", i+1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
    }

    return 0;
}
