#include <stdlib.h>
#include <stdio.h>
#include "lista_circular.h"

int main() {
    lista *l1 = criar_lc(5);
    printf("\nl1 esta vazia? %s", (vazia_lc(l1) ? "Sim" : "Nao") );
    printf("\nl1 esta cheia? %s", (cheia_lc(l1) ? "Sim" : "Nao") );
    printf("\nTamanho de l1: %d", tamanho_lc(l1));
    printf("\nCapacidade de l1: %d\n", capacidade_lc(l1));

    lista *l2 = criar_lc(10);
    printf("\nl2 esta vazia? %s", (vazia_lc(l2) ? "Sim" : "Nao") );
    printf("\nl2 esta cheia? %s", (cheia_lc(l2) ? "Sim" : "Nao") );
    printf("\nTamanho de l2: %d", tamanho_lc(l2));
    printf("\nCapacidade de l2: %d\n", capacidade_lc(l2));
    
    int i;
    for(i = 5; i >= 0; i--) {
        if(inserir_fim_lc(l1, i))
            printf("\ninsercao do valor %d com sucesso", i);
        else
            printf("\nvalor %d nao inserido", i);
        printf(" - tamanho: %d", tamanho_lc(l1));
    }
    
    printf("\n\nl1: "); exibir_lc(l1); printf("\n");

    int valor_removido;
    for(i = 1; i <= 2; i++) {
        if(remover_inicio_lc(l1, &valor_removido))
            printf("\nremocao efetuada com sucesso - valor removido: %d", valor_removido);
        else
            printf("\nremocao nao efetuada");
        printf(" - tamanho: %d", tamanho_lc(l1));
    }
    
    printf("\n\nl1: "); exibir_lc(l1); printf("\n");

    for(i = 10; i <= 30; i += 10) {
        if(inserir_fim_lc(l1, i))
            printf("\ninsercao do valor %d com sucesso", i);
        else
            printf("\nvalor %d nao inserido", i);
        printf(" - tamanho: %d", tamanho_lc(l1));
    }

    printf("\n\nl1: "); exibir_lc(l1); printf("\n");
    
    if(remover_inicio_lc(l1, &valor_removido))
            printf("\nremocao efetuada com sucesso - valor removido: %d", valor_removido);
        else
            printf("\nremocao nao efetuada");
    printf(" - tamanho: %d", tamanho_lc(l1));
    
    printf("\n\nl1: "); exibir_lc(l1); printf("\n");

    for(i = 100; i <= 103; i++) {
        if(inserir_fim_lc(l1, i))
            printf("\ninsercao do valor %d com sucesso", i);
        else
            printf("\nvalor %d nao inserido", i);
        printf(" - tamanho: %d", tamanho_lc(l1));
    }

    printf("\n\nl1: "); exibir_lc(l1); printf("\n\n");

    int valor = 102;
    printf("Buscar %d: %s\n", valor, (buscar_lc(l1, valor)==-1) ? ":(" : "OK");
    valor = 2; printf("Buscar %d: %s\n", valor, (buscar_lc(l1, valor)==-1) ? ":(" : "OK");
    valor = 1; printf("Buscar %d: %s\n", valor, (buscar_lc(l1, valor)==-1) ? ":(" : "OK");
    valor = 10; printf("Buscar %d: %s\n", valor, (buscar_lc(l1, valor)==-1) ? ":(" : "OK");
    valor = 20; printf("Buscar %d: %s\n", valor, (buscar_lc(l1, valor)==-1) ? ":(" : "OK");
    valor = 100; printf("Buscar %d: %s\n", valor, (buscar_lc(l1, valor)==-1) ? ":(" : "OK");

    liberar_lc(&l1);

    return 0;
}