/*
4. Faça um programa em C que imprima os números pares entre 1 a 100 na tela. Faça com
as três estruturas de repetição oferecidas pela linguagem C/C++.
*/

#include <stdio.h>

void impares_1_a_100();

int main()
{
    impares_1_a_100();
}

void impares_1_a_100()
{
    
    printf("Usando For: \n");
    printf("Início: ");
    int inicio = 2;
    for (int i = inicio; i <= 100; i += 2)
    {
        printf("%i -> ", i);       
    }
    
    printf("Fim \n\n");
    

    printf("Usando while: \n");
    printf("Início: ");
    int i = 2;
    while (i <= 100)
    {
        printf("%i -> ", i);
        i += 2;
    }
    printf("Fim \n\n");

    printf("Usando Do while: \n");
    printf("Início: \n");
    i = 2;
    do {
        printf("%i -> ", i);
        i += 2;
    } while (i <= 100);
    
    printf("Fim. \n");

}