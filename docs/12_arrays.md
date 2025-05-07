# Arrays (Arreglos)

Los arreglos son estructuras de datos que consisten en elementos de datos relacionados del mismo tipo.

Los arreglos y las estructuras son entidades “estáticas” que mantienen el mismo tamaño durante la ejecución del programa, por lo tanto, crearse y destruirse cada vez que se entra y se sale de los bloques en los que se definen.

**Un arreglo es un grupo consecutivo de localidades de memoria relacionadas por el hecho de que tienen el mismo nombre y el mismo tipo. Para hacer referencia a una localidad o a un elemento del arreglo en particular, especificamos el nombre del arreglo y la posición numérica del elemento en particular dentro del arreglo.**

Podemos ver como se representaría un array:

- Nombre del array: **arr**
- Tamaño: **6**
- Posiciones: **0 al 5**
- Tipo: **int** (Enteros)

![arr](assets/array_1.png)

## Declaración de un array

Debemos recordar que un array solo puede contener un solo tipo de dato, por lo tanto, primero se indica el tipo de dato que tendrá, seguido de corchetes cuadrados y dentro de los corchetes indicamos la cantidad de espacio que tendrá para almacenar datos `[ size ]`, esto indica que es un array.

Los arreglos ocupan espacio en memoria. El programador especifica el tipo de cada arreglo y el número de elementos que necesita el arreglo, de manera que la computadora pueda reservar la cantidad adecuada de memoria.

### Estructura de declaración de un array

![estructura](assets/declarando_array_1.png)

### Ejemplo de declaración de un array

![ejemplo de declaración](assets/declarando_array_2.png)

> Nota: Esta forma es para arrays vacíos; es decir, solo se define el espacio que tendrá.

## Agregando datos en el array

Para agregar datos a un array debemos indicar la posición y asignar el valor que queremos.

![agregando](assets/agregando_valor_array.png)

```c
#include <stdio.h>

int main(){

    int arr[5]; // Array de 5 espacios
    arr[0] = 4;  // Agredo el valor 4 a la posición 0
    arr[1] = -2; // Agredo el valor -2 a la posición 1
    arr[2] = 10; // Agredo el valor 10 a la posición 2
    arr[3] = 22; // Agredo el valor 22 a la posición 3
    arr[4] = 7;  // Agredo el valor 7 a la posición 4

  return 0;
}

```

## Obteniendo datos de un array

Para obtener los datos de un array se indica la posición y este valor es devuelto; con esto ya podemos guardarlo en una variable o usarlo.

### De manera manual

```c
#include <stdio.h>

int main(){

  int arr[5]; // Array de 5 espacios

  arr[0] = 4;  // Agredo el valor 4 a la posición 0
  arr[1] = -2; // Agredo el valor -2 a la posición 1
  arr[2] = 10; // Agredo el valor 10 a la posición 2
  arr[3] = 22; // Agredo el valor 22 a la posición 3
  arr[4] = 7;  // Agredo el valor 7 a la posición 4

  int valor1 = arr[0]; // obtengo o saco el valor de la posición 0
  int valor2 = arr[1]; // obtengo o saco el valor de la posición 1
  int valor3 = arr[2]; // obtengo o saco el valor de la posición 2
  int valor4 = arr[3]; // obtengo o saco el valor de la posición 3
  int valor5 = arr[4]; // obtengo o saco el valor de la posición 4

  printf("El valor 1 es %d\n", valor1);
  printf("El valor 2 es %d\n", valor2);
  printf("El valor 3 es %d\n", valor3);
  printf("El valor 4 es %d\n", valor4);
  printf("El valor 5 es %d\n", valor5);

  return 0;
}

```

**Salida:**

```text
El valor 1 es 4
El valor 2 es -2
El valor 3 es 10
El valor 4 es 22
El valor 5 es 7
```

### Usando un `for`

```c
#include <stdio.h>

int main(){

  int arr[5]; // Array de 5 espacios

  arr[0] = 4;  // Agredo el valor 4 a la posición 0
  arr[1] = -2; // Agredo el valor -2 a la posición 1
  arr[2] = 10; // Agredo el valor 10 a la posición 2
  arr[3] = 22; // Agredo el valor 22 a la posición 3
  arr[4] = 7;  // Agredo el valor 7 a la posición 4

  for (int i = 0; i < 5; i++){
    int valor = arr[i]; //obtengo el valor de la posición indicada
    printf("El valor en la posicion %d es : %d\n", i, valor );
  }

  return 0;
}
```

**Salida:**

```text
El valor en la posicion 0 es : 4
El valor en la posicion 1 es : -2
El valor en la posicion 2 es : 10
El valor en la posicion 3 es : 22
El valor en la posicion 4 es : 7
```

## Arrays inicializados con datos

## Arrays multidimensionales

## Ejercicios

- Calculo de la media, la desviación estándar y varianza

```c
```
