#include <stdio.h>

int main(){
    int edad = 0;

    printf("Dar el valor de la tu edad: ");
    scanf("%d", &edad); //recibo el dato y lo almaceno en la variable edad

    int edadNueva = edad + 5; // hago una operación con este valor 

    printf("Tu edad en 5 anios sera de: %d anios\n", edadNueva);// Recuerda que los símbolos del abecedario ingles no tiene la eñe, y no podemos poner de manera directa ese símbolo especial
}