/*
2. Faça uma função em C/C++ que leia um valor inteiro e escrever se é positivo ou negativo
(considere o valor zero como nulo).
*/

#include <stdio.h>
#include <stdlib.h>

void analisar_sinal();

int main()
{
    analisar_sinal();
    return 0;
}

void analisar_sinal()
{
    int valor;
    printf("Valor: ");
    scanf("%i", &valor);

    if (valor > 0)
    {
        printf("Valor %i é positivo", valor);
    }
    else if (valor < 0)
    {
        printf("Valor %i é negativo", valor);
    }
    else
    {
        printf("Valor %i é nulo", valor);
    }
}



