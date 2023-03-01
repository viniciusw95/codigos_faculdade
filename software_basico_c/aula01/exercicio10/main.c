/*
10.Elabore um programa em C\C++ que leia um vetor inteiro de tamanho 5 do teclado e 
imprima esse vetor invertido. Exemplo: se o vetor lido é [2, 3, 4, 10, 0] então será 
imprimido na tela o inverso, ou seja, [0, 10, 4, 3, 2].
*/

#include <stdio.h>

// tamanho do vetor a ser armazenado pelo teclado.
const int QUANT = 5;

void armazenar_valores(int quant_valores, int vetor[]);
void imprimir_inverso(int vetor[], int tamanho_vetor);

int main(void)
{
    int vetor[QUANT];
    armazenar_valores(QUANT, vetor);
    imprimir_inverso(vetor, QUANT);
    return 0;
}

void armazenar_valores(int quant_valores, int vetor[])
{
    for (int i = 0; i < quant_valores; i++)
    {
        printf("Digitar valor (%i de %i)..: ", i + 1, quant_valores);
        int valor;
        scanf("%d", &valor);
        vetor[i] = valor;
    }
}

// Imprime o vetor na ordem inversa. Ex.: [1, 2, 3]. Imprimirá: [3, 2, 1].
void imprimir_inverso(int vetor[], int tamanho_vetor)
{
    printf("[");
    for (int i = tamanho_vetor - 1; i >= 0; i--)
    {
        printf("%i, ", vetor[i]);
    }
    printf("fim ]");
}


