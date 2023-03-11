#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// exercicio 02 
int main(void)
{
    int t;
    printf("Quantos números quer gerar? ");
    scanf("%d", &t);
    
    printf("Vai gerar..: %d números.", t);
    
    int *vetor = malloc(t * sizeof(int));
    
    srand(time(NULL));
    
    printf("\n\nNúmeros gerados..: \n");
    for (int i = 0; i < t; i++)
    {
        vetor[i] = (rand() % 100) - 100;
        printf("-> %d \n", vetor[i]);
    }
    
    return 0;

}
