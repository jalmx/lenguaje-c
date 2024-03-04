# Operaciones Matemáticas

## Operadores aritméticos

En esta sección veremos los operadores aritméticos básicos que podemos encontrar en la mayoría de lenguajes.

| Nombre           | Símbolo | Descripción                                                                        |
| :--------------- | :-----: | :--------------------------------------------------------------------------------- |
| Agrupación       |    `()`   | Realiza la operación de agrupación de una operación. (NO MULTIPLICA)              |
| Suma             |    `+`    | Realiza la operación de suma aritmética                                            |
| Resta            |    `-`    | Realiza la operación de resta aritmética                                           |
| Multiplicación   |    `*`    | Realiza la operación de multiplicación aritmética                                  |
| División         |    `/`    | Realiza la operación de razón aritmética                                           |
| Residuo o Módulo |    `%`    | Realiza la operación de división aritmética y devuelve el residuo de ésta división |

*Cuando somos nuevos en el mundo de la programación queremos aplicar conocimiento que tenemos con relación a matemáticas, aquí existen algunas cuestiones que no se aplican de la misma manera o solo se puede aplicar de cierta forma.*

*Precauciones que debemos tener en cuenta son:*

- El único símbolo que podemos ocupar para la **división** es la diagonal o slash (/), no existe otro símbolo ni tampoco se puede ocupar los tradicionales que conocemos.
- El único símbolo para **multiplicación** es el asterisco (\*), no existe algún otro ni ninguno más sirve para multiplicar.
- **Los paréntesis** "( )" solo agrupan y nada mas. **No sirven para multiplicar**. 


```c
int valor1 = 4;
int valor2 = 3;

int suma = valor1 + valor2;
int resta = valor1 - valor2;
int multiplicacion = valor1 * valor2;
int division = valor1 / valor2;
int modulo = valor1 % valor2;

printf("La suma es %i \n", suma);
printf("La resta es %i \n", resta);
printf("La multiplicación es %i \n", multiplicacion);
printf("La división es %i \n", division);
printf("El residuo es %i \n", modulo);
```
Resultado:

```
La suma es 7 
La resta es 1 
La multiplicación es 12 
La división es 1 
El residuo es 1 
```

## Operador unitario (-)

Existe el operador unitario el cual no necesita hacer una operación entre dos valores o variables, con agregarlo estaría realizando la operación de multiplicar por -1.

```c
int valor = 4;
int inverso = -valor; // aquí aplicamos el operador unitario

printf("valor: %d\n", valor);
printf("valor negativo: %d\n", inverso);
```
Resultado:

```
valor: 4
valor negativo: -4
```



## Operador de asignación (=)

El operador de asignación (`=`), el cual **asigna** un valor a una variable.

!!! danger
    No es lo mismo **asignar** que **igualar**; es decir, en programación se guardar un dato en una dirección de memoria, e igualar se usa en matemáticas.


## Precedencia de operadores

En C, la expresiones son normalmente evaluador de izquierda a derecha. Sin embargo, cuando una expresión contiene multiples operadores, la precedencia de decide el orden en el cual serán evaluados. Este orden es aplicable a otros muchos lenguajes como C++, C#, Java.


| Orden | Operador                                  |
| :---: | ----------------------------------------- |
|   1   | `()`, `[]`, `.`, `-`, `>`, `x++`, `x--`   |
|   2   | `!`, `~`,`++x`,`--x`, `(type) sizeof * &` |
|   3   | `*`,`/`,`%`                               |
|   4   | `+`,`-`                                   |
|   5   | `<<`,`>>`                                 |
|   6   | `<`,`<=`,`>`, `>=`                        |
|   7   | `==`,`!=`                                 |
|   8   | `&`                                       |
|   9   | `^`                                       |
|  10   | `|`                                       |
|  11   | `&&`                                      |
|  12   | `|| `                                     |
|  13   | `=`                                       |
|  14   | `,`                                       |

!!! Nota
    Con respecto a las operaciones matemáticas que conoces, sigue funcionando igual, ahora debes añadir las relacionadas al lenguaje.

## Funciones matemáticas

El lenguaje C tiene de manera nativa una librería que nos facilita el calculo con funciones matemáticas. Para esto existe la librería `math.h`.

```c
// la importación de la librería

#include <math.h>
```

De la funciones que nos pidiesen interesar son:

- `sqrt(x)`: Calculo de raíz cuadrada
- `pow(b,e)`: Calculo de potencia
- `fabs(x)`: valor absoluto
- `ceil(x)`: redondeo hacia abajo
- `floor(x)`: redondeo hacia arriba
- `cos(x)`: identidad trigonometría `coseno`, en radianes
- `sin(x)`: identidad trigonometría `seno`, en radianes
- `tan(x)`: identidad trigonometría `tangente`, en radianes

Tiene muchas otras mas.

```c
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

```

## Ejemplos con operadores aritméticos

- Calcular el área de un cuadrado
- calcular el área y perímetro de un circulo

```c

```

## Ejercicios con operadores aritméticos

 