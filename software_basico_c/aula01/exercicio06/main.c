/*
6. Faça um programa que leia dois valores x e y inteiros do teclado e faça a troca do 
conteúdo das variáveis usando função e ponteiro.
*/

#include <stdio.h>

void troca_valores(int *x, int *y);

int main()
{
    int x, y;


    printf("Digitar um valor para x: ");
    scanf("%i", &x);
    printf("x = %i \n", x);

    printf("Agora, digitar um valor para y: ");
    scanf("%i", &y);
    printf("y = %i \n", y);

    printf("Valor atual de x: %i \n", x);
    printf("Valor atual de y: %i \n", y);

    troca_valores(&x, &y);
    printf("Trocando valores..:\n");
    printf("Novo valor de x = %i\n", x);
    printf("Novo valor de y = %i\n", y);
}

// Troca valores das variáveis x e y usando seus respectivos ponteiros.
void troca_valores(int *ptr_x, int *ptr_y)
{
    int temp = *ptr_x;
    *ptr_x = *ptr_y;
    *ptr_y = temp;
}