#include <stdio.h>

// funcion: es un bloque de código que realiza una tarea específica y devuelve un valor.
int saludar()
{
    printf("Hola, bienvenido al programa!\n");
    return -100; // Devuelve un valor entero
}

// usando parametros para mostrar el uso de una función
int sumar(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    int nro1 = 0, nro2 = 0, resultado = 0;
    printf("Ingrese el primer numero: ");
    scanf("%d", &nro1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &nro2);
    // Llamada a la función
    resultado = sumar(nro1, nro2);
    printf("La suma de %d + %d es: %d\n", nro1, nro2, resultado);
    
    // Llamada al procedimiento
    printf("La suma de %d y %d es: %d\n", 5, 10, sumar(5, 10));
    saludar();
    return 0;
}
