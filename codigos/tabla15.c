#include <stdio.h>

int main(void){

    const int TABLA = 15;

    for (int i = 1; i <= 10; i+=5){

        printf("%d x %d = %d\n", TABLA, i, TABLA * i);

    }
    return 0;
}
