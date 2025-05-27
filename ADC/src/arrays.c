#include <stdio.h>

void encerrarArrays(int M[], int sizeM)
{
    for (int i = 0; i < sizeM; i++)
        M[i]=0;
}
void encerrarMatriz(int M[][0], int sizeF, int sizeC)
{
    for (int i = 0; i < sizeF; i++)
        for (int j = 0; j < sizeC; j++)
        M[i][j]=0;   
}
void presentarArrays(char *titulo,int M[], int sizeM)
{
    printf("\n %s: ", titulo);
    for (int i = 0; i < sizeM; i++)
    printf("%d \t, M[i]");
}
void presentarMatriz(char *titulo,int M[][0], int sizeF, int sizeC)
{
    printf("\n %s: ", titulo);
    for (int i = 0; i < sizeF; i++)
    {
        for (int j = 0; j < sizeC; j++)
            printf("%d \t",M[i][j]);
        printf("\n");
    }        
}
void cargarPares(int M[],int sizeM)
{
    int par;
    for (int i = 0; i < sizeM; i++)
    {
        printf("ingrese un numero par: ");
        scanf("%d", &par);
        if (par % 2 ==0);
            M[i] =par;    
    }
}
void arrayUnidemensional(int M[], int sizeM)
{
    //encerar la matriz
    for (int i = 0; i < sizeM; i++)
    {
        M[i]=0;
    }
    //almacenar pares
    for (int i = 0; i < sizeM; i++)
    {
        if (i%2==0)
        M[i]=0;
    }
    //presentando la matriz
    for (int i = 0; i < sizeM; i++)
    {
        printf("%d \t",M[i]);
    }   
}
int main()
{
    int sizeA;
    printf("ingrese el tamaño de la matriz: ");
    scanf("%d", &sizeA);
    // int arrayPares[sizeA];
    // int arrayImpares[sizeA];
    // int encerrarArray(arrayPares,sizeA);
    // int encerrarArray(arrayImpares,sizeA);

    // cargarPares(arraysPares,sizeA);
    // presentarArray("listado de pares: ",arrayPares,sizeA);

    int matriz[sizeA][sizeA];
    encerrarMatriz(matriz,sizeA,sizeA);
    presentarMatriz("Datos de matriz",matriz,sizeA,sizeA);
    return 0;
}