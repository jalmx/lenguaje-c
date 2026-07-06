// Solicitar un número de entre 0 al 20, si el número es menor a 10 Y par, indicar que el "número es par y menor a 10"; si es menor a 10, pero NO es par dar el mensaje "Número menor a 10", de lo contrario que indique que es mayor a 10. 
#include <stdio.h>

int main(){
    int numero = 0;

    printf("Dar un numero de entre 0 a 20: ");
    scanf("%d", &numero);

    if((numero < 10) && (numero %2 == 0)){
        printf("El numero es par y menor a 10\n");
    }else if(numero < 10){
        printf("Es menor a 10 y no es par\n");
    }else{
        printf("Es mayor a 10\n");
    }

    return 0;
}
