#include <stdio.h>
#include "lista_circular.h"



int main(){

    int i, valor;

    lista *L = criar_lc(30);

    for(i = -10; i <= 20; i++){
        inserir_fim_lc(L, i);
    }

    for(i = 0; i < 5; i++){
        remover_inicio_lc(L, &valor);
    }

    printf("\nLista circular:");
    exibir_lc(L);

    dobrar_pares(L);

    printf("\n\nLista circular:");
    exibir_lc(L);
    printf("\n\n");

    //A:> Não liberou a lista

    return 0;
}