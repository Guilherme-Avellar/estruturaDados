#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista.h"

int main(){

    srand(time(NULL));
    int i;

    lista *lista1 = criar_lista(30);

    for(i = 0; i < capacidade(lista1); i++){
        inserir_fim(lista1, (-10 + rand()%21));
    }

    printf("\n\nlista: ");
    exibir(lista1);

    printf("\nQtde de valores impares: %d\n\n", qtde_impares_lst(lista1));

    return 0;
}