/*
3. Para doar sangue é necessário ter entre 18 e 60 anos. Faça uma função na linguagem C
que pergunte a idade de uma pessoa e diga se ela pode doar sangue ou não.
*/

#include <stdio.h>

void pode_doar_sangue();

int main()
{
    pode_doar_sangue();
}

void pode_doar_sangue()
{
    int idade;
    printf("Idade: ");
    scanf("%i", &idade);
    
    if (idade >= 18 && idade <= 60)
    {
        printf("Pode doar (%i está entre 18 e 60 anos)", idade);
    }
    else
    {
        printf("Não pode doar (%i NÃO está entre 18 e 60 anos)", idade);
    }
}
