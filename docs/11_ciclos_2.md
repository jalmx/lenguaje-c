# Ciclos (for)

Si deseas conocer la teoría básica de ciclos, ve a la documentación de [algoritmos en la sección de ciclos](https://www.alejandro-leyva.com/algoritmos/12_ciclos/)

## Estructura del ciclo `for`

![for](./assets/for_structure.png)

## Ejemplos

- Imprimir 5 veces la palabra "Hola"

```c
#include <stdio.h>

int main(void){

    for (int i = 0; i < 5; i++){
        printf("Hola\n");
    }

    return 0;
}
```

- Imprimir del 1 al 5

```c
#include <stdio.h>

int main(void){

    for (int i = 1; i <= 5; i++){
        printf("%d\n",i);
    }

    return 0;
}
```

- Hacer una calculadora de 2 números, que tenga la opción de sumar, restar y salir, si da una opción que no esta, volver a mostrar el menu inicial y da un mensaje "No existe la opción", el usuario solo podrá salir si elije la opción de salir. Cada que termina de hacer la operación de sumar o restar, volver a mostrar el menú, hasta que elija salir de la aplicación.

```c
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
```

- Imprimir la tabla de multiplicar del 15, del 1 al 10

```c
#include <stdio.h>

int main(void){

    const int TABLA = 15;

    for (int i = 1; i <= 10; i+=5){

        printf("%d x %d = %d\n", TABLA, i, TABLA * i);

    }
    return 0;
}
```

- Obtener el promedio de una materia, solicitando cada parcial (3) (CON UN CICLO), al final imprime el promedio

```c
#include <stdio.h>

int main(){

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
```

- Hacer un programa para calcular un promedio, la cantidad de datos se le preguntara al usuario, después, hará la solicitud de todos esos datos y al final dar el valor del promedio

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    int total = 0;
    int suma = 0;
    printf("CALCULADORA DE MEDIA\n");
    printf("Dame cuantos valores tienes: ");
    scanf("%d", &total);

    int contador = 1;
    for(;;){
        int dato = 0;
        printf("Dame el dato %d: ", contador);
        scanf("%d", &dato);
        suma += dato; // suma = suma + dato
        if(contador >= total){
            break;
        }
        contador++;
    }
    float promedio = suma / (float) total;
    printf("El promedio es %.2f\n", promedio);
    return 0;
}

```

## Ejercicios (*for*)

- Imprimir del 1 al 10
- Realizar una calculadora aritmética básica, es decir, que tenga suma, resta, multiplicación y division; todas estas opciones en el menú. También agregar la opción de salir. Cuando el usuario elija alguna operación, se le solicitaran los datos que se necesitan, al entregar el resultado, vuelve a mostrar el menu. El programa termina hasta que el usuario elije la opción de salir. Si da una opción que no existe, dar el mensaje "Opción no existente" y vuelve a mostrar el menu.
- Imprimir la tabla de multiplicar que el usuario elija, del 1 al 10; es decir, si el usuario desea la tabla del 8, debe salir por pantalla ==8x1=8, 8x2=16, ...==
- Calcular el promedio final, solicita al usuario sus calificaciones parciales una a una, y al final da el mensaje "Aprobado", en caso que haya pasado arriba de 6 y "Estas en repite" si es menor.
- Promedio de 3 parciales (con un ciclo), y si saco entre 0 a menor que 6, indicar que no paso, y se va a recursamiento, si saco entre 6 a 10, indicar que paso. Si da un calificación que no existe, indicar que no existe
- Realizar una calculadora de resistencia serie, el usuario ira introduciendo los valores uno a uno, la solicitud es infinita, hasta que le usuario decide cuando terminar, la opción de salir es -1, después de terminar imprime el resultado
- Realizar una calculadora de resistencia serie y paralelo, el usuario cual elije la opción, el usuario ira introduciendo los valores uno a uno, la solicitud es infinita, hasta que le usuario decide cuando terminar, la opción de salir es -1. después de terminar imprime el resultado
- Calcular el promedio de una materia, (con un ciclo), se solicitan los 3 parciales, si obtuvo un promedio igual o mayor a 9, indicar "Felicidades te vas de vacaciones, tu promedio es %.2f"; de lo contrario pide la calificación del ordinario, calcular este promedio (calificacionFinal = (promedio1 + ordinario)/2), si obtuviste un promedio mayor o igual a 6, dar este el mensaje "La libraste, sacaste %.2f", de lo contrario "Te toca baja, sacaste %.2f"
