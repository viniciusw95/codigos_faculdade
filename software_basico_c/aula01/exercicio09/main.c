/* 
9. Elabore um programa em C que tendo o seguinte vetor [23, 10, 45, 0, -9, 7, 89, -4, 2, 102, 
14, 0, 36], leia um número inteiro 𝑥 e procure esse número no vetor. Imprima uma 
mensagem informando se o número está no vetor.
*/

#include <stdio.h>

int ler_inteiro();
void busca_linear(int buscado, int vetor[], int tamanho_vetor);

int main(void)
{
    int vetor[] = {23, 10, 45, 0, -9, 7, 89, -4, 2, 102, 14, 0, 36};
    int tamanho_vetor = sizeof(vetor) / sizeof(int);

    int x = ler_inteiro();
    
    busca_linear(x, vetor, tamanho_vetor);
}

int ler_inteiro()
{
    int inteiro;
    printf("Digite um número inteiro..: ");
    scanf("%d", &inteiro);
    return inteiro;
}

void busca_linear(int buscado, int vetor[], int tamanho_vetor)
{
    for (int i = 0; i < tamanho_vetor; i++)
    {
        if (vetor[i] == buscado)
        {
            printf("Elemento %i encontrado no vetor (na posição %i)", buscado, i);
            return;
        }
    }
    printf("Elemento %i não foi encontrado em nenhuma posição do vetor.");
}