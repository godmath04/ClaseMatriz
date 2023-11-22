/* Realice una matriz inicializada en cero*/
#include<stdio.h>
int main()
{
    // Matriz inicializada en cero 
    int Matriz[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            Matriz[i][j] = 0;
            printf("%4d |", Matriz[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}
