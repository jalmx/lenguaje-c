
#include <stdio.h>

int main(void)
{
    float side = 0.0;
    int option = 0;
    printf("CALCULADORA DEL CUADRADO\n");
    printf("1) Area\n");
    printf("2) Perimetro\n");
    scanf("%d", &option);

    if (option == 1){
        printf("Area\n");
        printf("Dar el lado: ");
        scanf("%f", &side);
        printf("El area es %.2f\n", (side * side));
    }
    if (option == 2){
        printf("Perimetro\n");
        printf("Dar el lado: ");
        scanf("%f", &side);
        printf("El perimetro es %.2f\n", (side * 4));
    }

    char* frase = "opcion no existe\n";
    if(option >2){
        printf("%s", frase);
    }

    if(option < 1){
        printf("%s", frase);
    }
    return 0;
}
