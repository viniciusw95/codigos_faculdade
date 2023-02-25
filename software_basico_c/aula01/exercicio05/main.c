/* 
5) Faça um programa que leia dois números inteiros e calcule a soma, multiplicação, divisão 
e subtração, utilizando função para cada um dos cálculos. O programa deve garantir que 
não há zero e nem números negativos digitados.
*/

#include <stdio.h>

int ler_int_positivo();
int somar(int a, int b);
int multiplicar(int a, int b);
double dividir(int a, int b);
int subtrair(int a, int b);

int main()
{
    // Entrada de valores para a e b.
    int a, b;
    printf("Valor de a: \n");
    a = ler_int_positivo();
    printf("Valor armazenado em a: %i \n\n", a);

    printf("Valor de b: \n");
    b = ler_int_positivo();
    printf("Valor armazenado em b: %i \n\n", b);

    // Resultado:
    int soma = somar(a, b);
    int produto = multiplicar(a, b);
    double divisao = dividir(a, b);
    int subtracao = subtrair(a, b);

    printf("%i + %i: %i   \n", a, b, soma);
    printf("%i x %i: %i   \n", a, b, produto);
    printf("%i / %i: %.2f \n", a, b, divisao);
    printf("%i - %i: %i   \n", a, b, subtracao);
}

// Lê um número inteiro positivo e diferente de zero.
int ler_int_positivo()
{
    int numero;
    do
    {
        printf("Digite um número: ");
        scanf("%i", &numero);
    } while (numero <= 0);
        
    return numero;
}

int somar(int a, int b)
{
    int soma = a + b;
    return soma;
}

int multiplicar(int a, int b)
{
    int produto = a * b;
    return produto;
}

double dividir(int a, int b)
{
    double quociente = a / (double) b;
    return quociente;
}

int subtrair(int a, int b)
{
    int resto = a - b;
    return resto;
}