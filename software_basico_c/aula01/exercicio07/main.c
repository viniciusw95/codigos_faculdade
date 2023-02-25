/*
7. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, 
real e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada 
variável usando os ponteiros. Imprima os valores das variáveis antes e após a 
modificação.
*/

#include <stdio.h>

void imprimir(int x, double y, char c);

int main()
{
    int x = 10;
    double y = 20.5;
    char c = 'V';

    int *ptr_x = &x; 
    double *ptr_y = &y;
    char *ptr_c = &c;

    printf("Valores antigos: \n");
    imprimir(x, y, c);

    // Modificando valores usando ponteiros.
    *ptr_x = *ptr_x * 2;
    *ptr_y = *ptr_y * 4;
    *ptr_c = *ptr_c + 1;

    printf("Novos valores: \n");
    imprimir(x, y, c);

}

void imprimir(int x, double y, char c)
{
    printf("x = %i \n", x);
    printf("y = %f \n", y);
    printf("c = %c \n", c);
}