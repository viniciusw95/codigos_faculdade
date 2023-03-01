/*
3.Desenvolva um programa em C que tenha a data (em struct, no formato - dd/mm/yyyy) de 
5 pessoas (em um vetor) e imprima quantos dias de idade tem cada pessoa, desde que 
nasceu. Considere cada ano 365 dias.
*/

#include <stdio.h>


const int TOT_PESSOAS = 2;
struct data {
    int dia;
    int mes;
    int ano;
};

void ler_nascimento(struct data matriz[TOT_PESSOAS]);
int calcular_dias_idade(struct data nascimento);
void imprimir_idade(struct data pessoas[TOT_PESSOAS]);

int main(void)
{
    struct data lista[TOT_PESSOAS];

    /*
    nascimento[0].dia = 8;
    nascimento[0].mes = 12;
    nascimento[0].ano = 1995;
    */
    ler_nascimento(lista);
    //printf("%.2i/%.2i/%i\n", lista[0].dia, lista[0].mes, lista[0].ano);
    //int dias_idade = calcular_dias_idade(lista[0]);
    //printf("%i dia(s) de idade\n", dias_idade);
    imprimir_idade(lista);


}

void ler_nascimento(struct data matriz[TOT_PESSOAS])
{
    for (int i = 0; i < TOT_PESSOAS; i++)
    {
        printf("Dia nascimento: ");
        scanf("%i", &matriz[i].dia);
        printf("Mês nascimento: ");
        scanf("%i", &matriz[i].mes);
        printf("Ano nascimento: ");
        scanf("%i", &matriz[i].ano);
    }
}

// calcula a quantidade de dias de idade de uma pessoa
int calcular_dias_idade(struct data nascimento)
{
    // relação de dias para cada mês do ano (janeiro: 31, fevereiro: 28, ...)
    int dias_no_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    struct data hoje;
    hoje.dia = 1;
    hoje.mes = 3;
    hoje.ano = 2023;

    // considerando que hoje é o aniversário da pessoa..
    int dias_idade = (hoje.ano - nascimento.ano) * 365;
    
    if (hoje.mes < nascimento.mes)
    {
        // Exemplo: nasceu em Dezembro (12), mas ainda é Março (precisa descontar 9 meses da conta, pois
        // ela ainda não fez aniversário na realidade)
        for (int i = hoje.mes; i <= nascimento.mes - 1; i++)        
        {
            dias_idade -= dias_no_mes[i-1];
        }
    }
    else if (hoje.mes > nascimento.mes) 
    {
        // Exemplo: nasceu em Fevereiro/2023, e hoje é Março/2023 (precisa adiciona 1 mês)
        for (int i = nascimento.mes; i <= hoje.mes - 1; i++)        
        {
            dias_idade += dias_no_mes[i-1];
        }
    }
    // por fim, descontando os dias que sobraram OU que adicionado os dias que faltaram.
    dias_idade += hoje.dia - nascimento.dia;
    return dias_idade;

}

void imprimir_idade(struct data pessoas[TOT_PESSOAS])
{
    for (int i = 0; i < TOT_PESSOAS; i++)
    {
        int idade = calcular_dias_idade(pessoas[i]);
        printf("Pessoa %i tem %i dia(s) de idade.\n", i, idade);
    }
}