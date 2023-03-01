/* 
12.Tendo uma matriz 3 x 3 lida do teclado, calcule a soma dos elementos da diagonal 
principal. Mostre o resultado da soma. Exemplo, na matriz abaixo, o resultado da soma da 
diagonal principal é 22. A soma deve ser realizada utilizando função / modularização.
*/

#include <stdio.h>

// Linhas
const int L = 3;
// Colunas
const int C = 3;

void ler_matriz(int matriz[L][C]);
void mostrar_matriz(int matriz[L][C]);
int somar_diagonal_principal(int matriz[L][C]);

int main(void) 
{
    int matriz[L][C];

    ler_matriz(matriz);
    mostrar_matriz(matriz);
    int soma = somar_diagonal_principal(matriz);
    printf("Soma da diagonal principal desta matriz vale: %i", soma);
    
}

void ler_matriz(int matriz[L][C])
{
    int elemento;
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("Elemento (%i, %i) = ", i, j);
            scanf("%d", &elemento);
            matriz[i][j] = elemento;
        }
    }
}

int somar_diagonal_principal(int matriz[L][C])
{
    int soma = 0;
    for (int i = 0; i < L; i++)
    {
        soma += matriz[i][i];
    }
    return soma;
}

void mostrar_matriz(int matriz[L][C])
{

    // para cada linha na matriz
    for (int i = 0; i < L; i++)
    {
        printf("[");
        // para cada coluna na matriz
        for (int j = 0; j < C; j++)
        {
            printf("%i -> ", matriz[i][j]);
        }
        printf("]\n");
    }
}