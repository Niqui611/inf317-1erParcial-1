#include <stdio.h>

void suma(int *a, int *b, int *resultado) {
    *resultado = *a + *b;
}

void resta(int *a, int *b, int *resultado) {
    *resultado = *a - *b;
}

void multiplicacion(int *a, int *b, int *resultado) {
    *resultado = 0;
    int contador = 0;
    while (contador < *b) {
        *resultado += *a;
        contador++;
    }
}

void division(int *a, int *b, int *resultado) {
    *resultado = 0;
    int acumulador = *a;
    while (acumulador >= *b) {
        acumulador -= *b;
        (*resultado)++;
    }
}

int main() {
    int num1, num2;
    int resultado;

    num1 = 10;
    num2 = 5;
    suma(&num1, &num2, &resultado);
    printf("Suma: %d + %d = %d\n", num1, num2, resultado);

    num1 = 10;
    num2 = 5;
    resta(&num1, &num2, &resultado);
    printf("Resta: %d - %d = %d\n", num1, num2, resultado);

    num1 = 4;
    num2 = 3;
    multiplicacion(&num1, &num2, &resultado);
    printf("Multiplicación: %d * %d = %d\n", num1, num2, resultado);

    num1 = 10;
    num2 = 2;
    division(&num1, &num2, &resultado);
    printf("División: %d / %d = %d\n", num1, num2, resultado);

    return 0;
}

