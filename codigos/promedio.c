#include <stdio.h>

int main(){
    // float cal1 = 0;
    // float cal2 = 0;
    // float cal3 = 0;

    // printf("Dar la calificacion 1: ");
    // scanf("%f", &cal1);
    // printf("Dar la calificacion 2: ");
    // scanf("%f", &cal2);
    // printf("Dar la calificacion 3: ");
    // scanf("%f", &cal3);

    // float promedio = (cal1 + cal2 + cal3) / 3;

    // printf("Tu promedio es %.2f\n", promedio);

    float suma = 0.0;

    for(int n = 0; n < 3; n++) {
        float calificacion =0;
        printf("Dar la calificacion %d: ", n+1);
        scanf("%f", &calificacion);
        suma += calificacion;
    }
    float total = suma / 3;
    printf("El promedio es: %.2f\n", total);

    return 0;
}
