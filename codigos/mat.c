#include <math.h>
#include <stdio.h>

int main(){
    int valor1 = 4;
    int valor2 = 3;

    int suma = valor1 + valor2;
    int resta = valor1 - valor2;
    int multiplicacion = valor1 * valor2;
    float division = valor1 / (float) valor2;
    int modulo = valor1 % valor2;

    printf("La suma es %i \n", suma);
    printf("La resta es %i \n", resta);
    printf("La multiplicación es %d \n", multiplicacion);
    printf("La división es %f \n", division);
    printf("El residuo es %i \n", modulo);

    return 0;
}
