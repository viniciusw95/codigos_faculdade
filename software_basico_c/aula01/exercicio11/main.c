/*
    11.Elabore um código em C que, lendo uma matriz 3 x 3 do teclado, calcule a soma das 
    linhas e das colunas dessa matriz utilizando função modularizada.
*/

#include <stdio.h>

int main(void)
{
    int matriz[3][3];
    int soma = 0;
    // para cada linha em matriz
    for (int i = 0; i < 3; i++)
    {
        // para cada coluna em matriz
        for (int j =0; j < 3; j++) 
        {
            printf("Elemento (%i x %i): ");
            matriz[i][j] = 1;
            soma += matriz[i][j];
        }
    }
    printf("%i\n", soma);

}
