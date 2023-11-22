/* Realice una matriz inicializada en cero y que el usuario ingrese el tamaño de la matriz*/
#include <stdio.h>
int main()
{
    // Tamaño de la matriz
    int fila = 0, columna = 0;
    printf("Ingrese las dimensiones para su matriz. \n");
    printf("Ingrese el numero de fila: \n");
    scanf("%d", &fila);
    printf("Ingrese la dimension de su columna: \n");
    scanf("%d", &columna);

    // Matriz inicializada en cero
    int Matriz[fila][columna];
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            // A cada elemento de la matriz se asigna el cero
            Matriz[i][j] = 0;
            // Aprovechar el bucle para la impresión
            printf("%4d |", Matriz[i][j]);
        }
        printf("\n");
    }

    // Cambio de 0 a 1 en la diagonal
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            if (i == j)
            {
                Matriz[i][j] = 1;
            }
        }
    }

    printf("\n");
    printf("Se mostrara la matriz con diagonal de 1.\n");
    // Mostrar la matriz
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            printf("%4d |", Matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
