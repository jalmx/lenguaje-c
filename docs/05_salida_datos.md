# Salida de datos (función printf)

Lo primero que aprenderemos es como mandar mensajes a la consola o terminal, y es utilizando la función `printf();`. Como se muestra en el siguiente ejemplo:

```C
// main.c
#include <stdio.h> // se debe importar la librería estándar de entradas y salidas para poder usar printf, de lo contrario marcara un error al compilar

// función main
int main(void){

    printf("Hola Mundo");

    return 0;
}

```

La función `printf` nos sirve para mandar información a la consola, tiene manera especiales para escribir los tipos de datos y ademas tiene caracteres especiales que se detallan a continuación.

## Secuencias de escape

Las secuencias de escape son caracteres especiales para `printf`, que no se pueden colocar de manera cotidiana porque para C significa otra cosa, por lo tanto, dicho carácter se debe *escapar*; es decir, agregar un back slash al principio `\`.

| Símbolo | Significado                                    |
| ------- | ---------------------------------------------- |
| `\n`    | Linea nueva - Enter                            |
| `\t`    | un tabulador                                   |
| `\r`    | Regresa el cursor al inicio - Retorno de carro |
| `\\`    | Back slash                                     |
| `\"`    | Dobles Comillas                                |
| `\'`    | Comillas simple                                |

### Ejemplos con secuencias de escape

Aplicando las secuencias de escape

```c
printf("Hola\nMundo");
```

```
Hola
Mundo
```

```c
printf("Hola\tMundo");
```

```
Hola    Mundo
```

```c
printf("\"Hola Mundo\"");
```

```
"Hola Mundo"
```

```c
printf("\'Hola Mundo\'");
```

```
'Hola Mundo'
```

## Especificádores de formato

En `C` no se puede mandar a imprimir de manera directa una variable, se de usar un especificador de formato adecuado al tipo de variable que se quiere mandar a la salida.

Se debe utilizar el símbolo de `%` seguido de la letra que le corresponde al tipo de variable:

| Especificador de formato | Tipo de variable                                 | Nombre                      |
| ------------------------ | ------------------------------------------------ | --------------------------- |
| `%i`, `%d`               | `int`, `short`                                   | Número entero               |
| `%f`                     | `float`                                          | Número real                 |
| `%c`                     | `char`                                           | Carácter                    |
| `%o`                     | `int`                                            | Octal                       |
| `%x`                     | `int`                                            | Hexadecimal                 |
| `%i`                     | `char`                                           | El valor ASCII del carácter |
| `%s`                     | `string`.`char*`, `char[]`                       | Cadena de caracteres        |
| `%Lf`                    | `long double`                                    | Flotante doble largo        |
| `%lld`                   | `long long int`                                  | Entero largo                |
| `%u`                     | `unsigned char`,`unsigned short`, `unsigned int` | Enteros sin signo           |
| `%lu`                    | `unsigned long int`                              | Entero sin signo            |
| `%llu`                   | `unsigned long long int`                         | Entero sin signo            |
| `%p`                     | `*`                                              | Dirección de puntero       |

```c
uint8_t valor = 2;
int edad = 13;
float altura = 1.73;
char arroba = '@';
char* frase = "Hola Mundo";

printf("%i \n", edad);
printf("%f \n", altura);
printf("%c \n", arroba);
printf("%s \n", frase);
printf("%d \n", valor);
```

```
13 
1.730000 
@ 
Hola Mundo 
2 
```

### Dando formato

Cuando números `float` o `double`, por default se agregan ceros al final para acompletar los espacios de un numero, es decir, si declaramos `float a = 4.32;` y mandamos a imprimir esta variable el resultado sera `4.320000`.
Pero nosotros no queremos todo esos ceros o simplemente queremos menos decimales, para esto tenemos en los especificadores de formato la forma de indicar que lo acorte:

```c
#include <stdio.h>

int main(void){
    float valor = 21.123456;

    printf("El %.1f\n", valor);
    printf("El %.2f\n", valor);
    printf("El %.3f\n", valor);
    printf("El %.4f\n", valor);
    printf("El %.5f\n", valor);
    printf("El %f\n", valor);
    
    return 0;
}
```

## Ejemplos

- Calcular el perímetro y area del cuadrado, con valores en memoria, dando el siguiente formato, ejemplo "El perímetro del rectángulo es: 43.2 u" y "El area del rectángulo es: 23.2 u2"
-

```c
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
```

## Ejercicios

- Imprimir "Hola mundo"
- Imprimir una frase usando secuencias de escape para que entre palabras se haga un salto de línea
- Sumar 2 números e imprimir el resultado
- **Calcular el perímetro y area del rectángulo**, con valores en memoria, dando el siguiente formato, ejemplo "El perimetro del rectangulo es: 43.2 u" y "El area del rectangulo es: 23.2 u2"
