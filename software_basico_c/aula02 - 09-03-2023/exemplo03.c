#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a;
    a = malloc(sizeof(int));
    
    printf("-> %p", a);
    printf("\n-> %ld", sizeof(int));
    free(a);
    return 0;

}