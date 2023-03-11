#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *v;
    int n = 10;
    v = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d: ", i);
        scanf("%d", &v[i]);
        printf("%d\n", v[i]);
    }
    free(v);  // libera o vetor ou ponteiro
    return 0;

}