#include <stdio.h>

int main(){

    int edad = 0;

    printf("Dar el valor de la tu edad: ");
    scanf("%d", &edad); //recibo el dato y lo almaceno en la variable edad

    if (edad >= 18){ // comparamos si la variable edad es mayor o igual a 18, en caso que sea verdadero se mostrara el texto
        printf("Eres mayor de edad");
    }else{ // comparamos la variable
        printf("Eres menor de edad");
    }
    return 0;
}