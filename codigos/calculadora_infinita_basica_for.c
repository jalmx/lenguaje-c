#include <stdio.h>
int main(){

    for(int opt = 0; opt != 3;){
        printf("Calculadora \n");
        printf("1) Suma \n");
        printf("2) Resta \n");
        printf("3)Salir \n");
        scanf("%d", &opt);

        if (opt == 1){
            printf("==== SUMA ====\n");
            float a = 0.0;
            float b = 0.0;
            printf("Dar el primer numero: ");
            scanf("%f", &a);
            printf("Dar el primer numero: ");
            scanf("%f", &b);
            printf("La suma es %f\n", a + b);
        }
        else if (opt == 2){
            printf("==== RESTA ====\n");
            float a = 0.0;
            float b = 0.0;
            printf("Dar el primer numero: ");
            scanf("%f", &a);
            printf("Dar el primer numero: ");
            scanf("%f", &b);
            printf("La resta es %f\n", a - b);
        }else if (opt == 3){
            printf("Saliendo\n");
        }else{
            printf("Error!!! Opcion no existe!!!\n");
        }
    }

    return 0;
}
