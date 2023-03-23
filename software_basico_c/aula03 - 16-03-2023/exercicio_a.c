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

void ler_datas(Data *datas, int tot);
void mostrar(Data *datas, int tot);

int main() {
    int tot;
    printf("Quantas datas deseja armazenar: ");
    scanf("%d", &tot);
    
    Data *datas = (Data *) malloc(tot * sizeof(Data));
    
    ler_datas(datas, tot);
    mostrar(datas, tot);
    
    free(datas);
    return 0;
}

void ler_datas(Data *datas, int tot) {
    for (int i = 0; i < tot; i++) {
        printf("Dia: ");
        scanf("%d", &datas[i].dia);
        
        printf("Mês: ");
        scanf("%d", &datas[i].mes);
        
        printf("Ano: ");
        scanf("%d", &datas[i].ano);
    }
    fflush(stdout);
}

void mostrar(Data *datas, int tot) {
    printf("Mostrando datas armazenadas..: ");
    for (int i = 0; i < tot; i++) {
        printf("\nDia: ");
        printf("%d\n", datas[i].dia);
        
        printf("Mês: ");
        printf("%d\n", datas[i].mes);
        
        printf("Ano: ");
        printf("%d\n", datas[i].ano);
    }
}

