#include <stdio.h>

int main(void){
    float side = 4.31;

    printf("CALCULADORA DEL CUADRADO\n");
    printf("El valor del lado es %f\n", side);
    float perimetro = side * 4;
    printf("El perimetro es %f u\n", perimetro);

    float area = side * side;
    printf("El area es %f u2\n", area);
    
    return 0;
}
