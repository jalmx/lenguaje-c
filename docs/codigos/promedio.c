#include <stdio.h>

int main(int argc, char const *argv[])
{
    float cal1 = 0;
    float cal2 = 0;
    float cal3 = 0;

    printf("Dar la calificacion 1: ");
    scanf("%f", &cal1);
    printf("Dar la calificacion 2: ");
    scanf("%f", &cal2);
    printf("Dar la calificacion 3: ");
    scanf("%f", &cal3);

    float promedio = (cal1 + cal2 + cal3) / 3;

    printf("Tu promedio es %.2f\n", promedio);
    return 0;
}
