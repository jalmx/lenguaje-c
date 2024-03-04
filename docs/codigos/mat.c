#include <math.h>
#include <stdio.h>

int main()
{
    int potencia = pow(2,3);
    int raiz = sqrt(25);
    int redondeoArriba = floor(25.3);
    int redondeoAbajo = ceil(25.7);
    float coseno = cos(45);
    float seno = sin(45);
    float tangente = tan(45);

    
    printf("2 al cubo es: %d \n", potencia);
    printf("la raiz de 25 es: %d \n", raiz);
    printf("redondeo arriaba de 25.3 es: %d \n", redondeoArriba);
    printf("redondeo abajo de 25.7 es: %d \n", redondeoAbajo);
    printf("coseno de 45 es: %.2f \n", coseno);
    printf("seno de 45 es: %.2f \n", seno);
    printf("tangente de 45 es: %.2f \n", tangente);
    return 0;
}
