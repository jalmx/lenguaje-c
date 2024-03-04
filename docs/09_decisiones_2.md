# Decisiones (if-else)

Vimos la estructura `if` básica, ahora conoceremos quien lo complementa, y este es el bloque `else`. 

La estructura `if-else` (`si - de lo contrario`) o estructura de decision `if-else`.

## Estructura `if-else`

La sintaxis de la estructura `if-else` es la siguiente:

```c
if (comparacion_a_true){
   // bloque "if" que se ejecutara si la companion resulta verdadera
}else{ 
   // bloque "else" que se ejecutara si la companion resulta verdadera
}
```

El anterior código que hicimos lo podemos mejorar con la siguiente modificación:


```c
int edad = 18;

if (edad >= 18){ // comparamos si la variable edad es mayor o igual a 18, en caso que sea verdadero se mostrara el texto
    printf("Eres mayor de edad");
}else{ // comparamos la variable
    printf("Eres menor de edad");
}
```

## `if-else` anidados

```c
if (comparacion_a_true){
   // bloque "if" que se ejecutara si la companion resulta verdadera
   if (comparacion_a_true){
   // bloque "if" que se ejecutara si la companion resulta verdadera
        if (comparacion_a_true){
        // bloque "if" que se ejecutara si la companion resulta verdadera
        }else{ 
        // bloque "else" que se ejecutara si la companion resulta verdadera
        }
    }else{ 
    // bloque "else" que se ejecutara si la companion resulta verdadera
    }
}else{ 
   // bloque "else" que se ejecutara si la companion resulta verdadera
   if (comparacion_a_true){
   // bloque "if" que se ejecutara si la companion resulta verdadera
    }else{ 
    // bloque "else" que se ejecutara si la companion resulta verdadera
    }
}
```


```c
    if(comparacion_a_true){
        // bloque "if" que se ejecutara si la companion resulta verdadera de lo contrario va al siguiente
    }else if (comparacion_a_true){
        // bloque "if" que se ejecutara si la companion resulta verdadera de lo contrario va al siguiente
    }else if (comparacion_a_true){
        // bloque "if" que se ejecutara si la companion resulta verdadera de lo contrario va al siguiente
    }else if (comparacion_a_true){
        // bloque "if" que se ejecutara si la companion resulta verdadera de lo contrario va al siguiente
    }else{
        // en caso que no entro en ningún if previo entra y se ejecuta este código
    }
```

## Ejercicios

## Ejemplos

- Solicitar un numero al usuario e imprimir si el numero es "**par**" o "**impar**"
- Calculadora de Ley de ohm. Dar las 3 opciones al usuario
- Calculo de resistencia en serie y paralelo, 2 valores