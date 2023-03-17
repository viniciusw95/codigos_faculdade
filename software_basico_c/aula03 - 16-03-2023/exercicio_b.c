/*
b) Faça um programa em C que, tendo o nome, a matrícula, o salário de
um usuário (em struct), calcule e informe o novo salário aumentado
em 15%.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
a) Faça uma struct que armazene uma data (dd/mm/yyyy) e que o
usuário informa quantas datas ele deseja informar.
*/
typedef struct {
    char *nome; 
    int matricula;
    float salario;
} Usuario;

int main()
{
    
    Usuario *u = malloc(sizeof(Usuario));
    u->nome = "Vinicius";
    u->matricula = 1234567890;
    u->salario = 1750.25;
    
    u->salario *= 1.15;
    
    printf("%s\n", u->nome);
    printf("%d\n", u->matricula);
    printf("%f\n", u->salario);
    free(u);
    return 0;
}