/*
15.Faça um programa que gerencie o estoque de um mercado e crie e leia um vetor de struct
de 5 produtos, com os dados: código (inteiro), nome (máximo 15 letras), preço e 
quantidade. Imprima na tela os elementos cadastrados. De preferência use função para 
as atividades
*/

#include <stdio.h>

const int TOT_PRODUTOS = 2;

struct produto {
    int codigo;  // 4 bytes
    char nome[16];  // 16 * 1 bytes
    float preco;  //  4 byts
    int quantidade;  // 4 bytes
};

void cadastrar_produtos(struct produto lista[], int tamanho);
void imprimir_produtos(struct produto lista[], int tamanho);

int main(void)
{
    struct produto lista[TOT_PRODUTOS];
    cadastrar_produtos(lista, TOT_PRODUTOS);
    imprimir_produtos(lista, TOT_PRODUTOS);
}

void cadastrar_produtos(struct produto lista[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Código: ");
        scanf("%i", &lista[i].codigo);

        printf("Nome do produto: ");
        scanf("%s", &lista[i].nome);

        printf("Preço: R$ ");
        scanf("%f", &lista[i].preco);

        printf("Quantidade do produto: ");
        scanf("%i", &lista[i].quantidade);
        printf("-----------------------\n");
    }
    
}

void imprimir_produtos(struct produto lista[], int tamanho)
{
    printf("-------------------\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Código do produto: ");
        printf("%i\n", lista[i].codigo);

        printf("Nome do produto: ");
        printf("%s\n", lista[i].nome);

        printf("Preço: R$ ");
        printf("%f\n", lista[i].preco);

        printf("Quantidade do produto: ");
        printf("%i\n", lista[i].quantidade);
        printf("-------------------\n");
    }
}