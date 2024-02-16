#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista_seq.h"

#define N 10

int main(){

    srand(time(NULL));

    lista *L = criar_lista();

    for(int i = 0; i < N; i++){
        inserir_fim(L, (-12 + rand()%23));
    }

    printf("\n\nLista: ");
    exibir(L);
    oposto_lst(L);
    printf("\nLista: ");
    exibir(L);


    return 0;
}