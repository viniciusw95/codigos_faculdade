#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    srand(time(NULL));
    
    for (i = 0; i < 10; i++)
    {
        printf("%d ", (rand() % 100) - 100);
    }
    return 0;

}
