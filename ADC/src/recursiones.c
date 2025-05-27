#include <stdio.h>

// R01 - Factorial de n
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return factorial(n - 1) * n;
}

// R02 - Suma de a y b
int suma(int a, int b) {
    if (b == 0)
        return a;
    return suma(a + 1, b - 1);
}

// R03 - Multiplicación de a y b
int multiplicacion(int a, int b) {
    if (b == 0)
        return 0;
    return suma(a, multiplicacion(a, b - 1));
}

// R04 - Potencia de a^b
int potencia(int a, int b) {
    if (b == 0)
        return 1;
    return multiplicacion(a, potencia(a, b - 1));
}

// R05 - Conteo progresivo hasta n
void conteoProgresivoHasta(int n, int actual) {
    if (actual > n)
        return;
    printf("%d\n", actual);
    conteoProgresivoHasta(n, actual + 1);
}

// R06 - Conteo regresivo hasta 0
void conteoRegresivo(int n) {
    if (n < 0)
        return;
    printf("%d\n", n);
    conteoRegresivo(n - 1);
}

int main() {
    // Pruebas de los métodos
    printf("Factorial de 5: %d\n", factorial(5));
    printf("Suma de 3 y 4: %d\n", suma(3, 4));
    printf("Multiplicación de 3 y 4: %d\n", multiplicacion(3, 4));
    printf("Potencia de 2^3: %d\n", potencia(2, 3));
    
    printf("\nConteo progresivo hasta 5:\n");
    conteoProgresivoHasta(5, 0);

    printf("\nConteo regresivo desde 5:\n");
    conteoRegresivo(5);

    return 0;
}