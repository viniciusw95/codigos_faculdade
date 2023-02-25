/*
8. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função 
que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro 
de A na própria variável A e o dobro de B na própria variável B.
*/

#include <stdio.h>

int ler_inteiro();
int soma_do_dobro(int *a, int *b);

int main()
{
    int a, b;

    printf("Digite um valor para a: ");
    a = ler_inteiro();

    printf("Digite um valor para b: ");
    b = ler_inteiro();

    printf("Soma do dobro das variáveis A (%1i) e B (%i) = ", a, b);
    int soma = soma_do_dobro(&a, &b);
    
    printf("%i + %i = %i\n", a, b, soma);

}

int ler_inteiro()
{
    int numero;
    scanf("%i", &numero);
    return numero;
}

// Dobra o valor de 2 variáveis por ponteiros, e depois retorna a soma dessas variáveis.
int soma_do_dobro(int *ptr_a, int *ptr_b)
{
    *ptr_a = *ptr_a * 2;
    *ptr_b = *ptr_b * 2;
    int novo_valor = *ptr_a + *ptr_b;
    return novo_valor;
}
