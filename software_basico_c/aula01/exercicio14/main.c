/*
14.Desenvolva uma struct de cadastro, que contenha nome, idade, altura de uma pessoa e 
que verifique se a pessoa é apta para concorrer a um campeonato de triatlo, onde as 
condições são ser maior de 18 anos e altura acima de 1,70.
*/

#include <stdio.h>
#include <string.h>

struct cadastro {
    char *nome;
    int idade;
    float altura;
};

void cadastrar_dados(struct cadastro *p);
void pode_competir(int idade, float altura);


int main(void)
{
    struct cadastro pessoa;

    pessoa.idade = 20;

    cadastrar_dados(&pessoa);

    printf("%s\n", pessoa.nome);
    printf("%i\n", pessoa.idade);
    printf("%f\n", pessoa.altura);
    
    printf("Portanto..: \n");
    pode_competir(pessoa.idade, pessoa.altura);
}

void cadastrar_dados(struct cadastro *pessoa)
{
    printf("Seu nome: ");
    scanf("%s", (*pessoa).nome);

    printf("Sua idade: ");
    scanf("%i", &pessoa->idade);

    printf("Sua altura: ");
    scanf("%f", &pessoa->altura);

}

void pode_competir(int idade, float altura) 
{
    if (idade > 18 && altura > 1.70)
    {
        printf("Pode competir!");
    }
    else
    {
        printf("Não pode competir...");
    }
}