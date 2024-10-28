#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // Declaración de variables
    char cadena[1000] = "";
    int bandera = 0;
    // Entrada de datos
    printf("Ingresa la cadena a evaluar: \n");
    scanf(" %[^\n]", cadena);
    // Formato de cadena
    int j = 0;
    for (int k = 0; cadena[k] != '\0'; k++) {
        if (cadena[k] != ' ') {  // Eliminar espacios
            if (cadena[k] >= 65 && cadena[k] <= 90){
                cadena[j] = cadena[k]+32; // Pasar a minúsculas
            }else{
                cadena[j] = cadena[k];  // Dejar igual
            }
            j++;
        }
    }
    cadena[j] = '\0'; 
    // Longitud de la cadena
    size_t longitud = strlen(cadena); 
    // Evaluacion de si es palindromo
    for(int i = 0; cadena[i] != '\0'; i++){
        if(cadena[i] != cadena[longitud-(i+1)]){
            bandera = 0;
            break;
        }else{
            bandera = 1;
        }
    }
    if (bandera == 1){
        puts("Es palindromo");
    }else{
        puts("No es palindromo");
    }
    // Cantidad de vocales
    int contadorA = 0, contadorE = 0, contadorI = 0, contadorO = 0, contadorU = 0;
    for (int l = 0; l < longitud; l++) {
        if (cadena[l] == 'a'){
            contadorA++;
        }
        if (cadena[l] == 'e'){
            contadorE++;
        }
        if (cadena[l] == 'i'){
            contadorI++;
        }
        if (cadena[l] == 'o'){
            contadorO++;
        }
        if (cadena[l] == 'u'){
            contadorU++;
        }
    }
    printf("Cantidad de A: %d\n", contadorA);
    printf("Cantidad de E: %d\n", contadorE);
    printf("Cantidad de I: %d\n", contadorI);
    printf("Cantidad de O: %d\n", contadorO);
    printf("Cantidad de U: %d\n", contadorU);
    return 0;
}