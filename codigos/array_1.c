#include <stdio.h>

int main(){

  int arr[5]; // Array de 5 espacios

  arr[0] = 4;  // Agredo el valor 4 a la posicion 0
  arr[1] = -2; // Agredo el valor -2 a la posicion 1
  arr[2] = 10; // Agredo el valor 10 a la posicion 2
  arr[3] = 22; // Agredo el valor 22 a la posicion 3
  arr[4] = 7;  // Agredo el valor 7 a la posicion 4

  int valor1 = arr[0];
  int valor2 = arr[1];
  int valor3 = arr[2];
  int valor4 = arr[3];
  int valor5 = arr[4];

  printf("El valor 1 es %d\n", valor1);
  printf("El valor 2 es %d\n", valor2);
  printf("El valor 3 es %d\n", valor3);
  printf("El valor 4 es %d\n", valor4);
  printf("El valor 5 es %d\n", valor5);

  return 0;
}
