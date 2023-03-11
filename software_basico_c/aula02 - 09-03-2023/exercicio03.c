#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// exercicio 03 
int main(void)
{
    int n;
    printf("Quantos números quer gerar? ");
    scanf("%d", &n);
    
    printf("Lendo %d números..:", n);
    
    int *vetor = malloc(n * sizeof(int));
    
    srand(time(NULL));
    
    for (int i = 0; i < n; i++)
    {
        printf("\nDigitar o %dº elemento: ", i+1);
        scanf("%d", &vetor[i]);
        printf("-> %d \n", vetor[i]);
    }
    free(vetor);
    return 0;

}
