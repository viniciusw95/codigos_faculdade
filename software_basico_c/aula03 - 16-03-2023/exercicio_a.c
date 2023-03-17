#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
a) Faça uma struct que armazene uma data (dd/mm/yyyy) e que o
usuário informa quantas datas ele deseja informar.
*/
typedef struct {
    int dia, mes, ano;
} Data;

void lerDatas(Data *datas, int tot) {
    
    for (int i = 0; i < tot; i++) {
        printf("Dia: ");
        scanf("%i", &datas[i].dia);
        
        printf("Mês: ");
        scanf("%i", &datas[i].mes);
        
        printf("Ano: ");
        scanf("%i", &datas[i].ano);
    }
    fflush(stdout);
}

int main()
{
    int tot;
    printf("Quantas datas deseja armazenar: ");
    scanf("%d", &tot);
    
    Data *datas = (Data *) malloc(tot * sizeof(Data));
    
    lerDatas(datas, tot);
    
    printf("Mostrando datas armazenadas..: ");
    for (int i = 0; i < tot; i++) {
        printf("\nDia: ");
        printf("%i\n", datas[i].dia);
        
        printf("Mês: ");
        printf("%i\n", datas[i].mes);
        
        printf("Ano: ");
        printf("%i\n", datas[i].ano);
    }
    
    free(datas);
    return 0;
}