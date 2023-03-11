#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// exercicio 01 
int main(void)
{
    srand(time(NULL));
    int t = 10;
    int v[t];
    
    for (int i = 0; i < t; i++)
    {
        v[i] = rand() % 100;
        printf("%d\n", v[i]);
    }
    
    
    return 0;

}
