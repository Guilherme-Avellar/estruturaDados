#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void apresentacao(lista *L) {
    if(L != NULL) {
        printf("Lista criada agora\n");
        printf("Capacidade: %d\n", capacidade(L));
        printf("Tamanho: %d\n", tamanho(L));
        if(vazia(L))
            printf("Lista vazia\n");
        else
            printf("Nao esta vazia\n");
        if(cheia(L))
            printf("Lista cheia\n");
        else
            printf("Nao esta cheia\n"); 
    } else
        printf("Lista nao foi criada\n");
    exibir(L);
    printf("\n");
}

// Comportamento do sistem (contexto de execução)
int main() {
    lista *l = criar_lista(20);
    apresentacao(l);
    for(int i = 1; i <= 5; i++)
        if(inserir_fim(l, i))
            printf("Valor %d inserido na lista\n", i);
        else
            printf("Valor %d NAO inserido na lista\n", i);
    for(int i = 6; i <= 10; i++)
        if(inserir_inicio(l, i))
            printf("Valor %d inserido na lista\n", i);
        else
            printf("Valor %d NAO inserido na lista\n", i);
    for(int i = 101; i <= 103; i++)
    if(inserir_meio(l, i, 5))
        printf("Valor %d inserido na lista\n", i);
    else
        printf("Valor %d NAO inserido na lista\n", i);
    apresentacao(l);
    printf("%p\n", l);
    liberar(l); l = NULL;
    printf("%p\n", l);

    lista *l1 = criar_lista(20);
    apresentacao(l1);
    liberar(l1); l1 = NULL;

    lista *l2 = criar_lista(25);
    apresentacao(l2);
    liberar(l2); l2 = NULL;
    /*if(l2 != NULL) {
        printf("Lista criada\n");
        printf("Capacidade: %d\n", capacidade(l2));
        printf("Tamanho: %d\n", tamanho(l2));
        if(vazia(l2))
            printf("Lista vazia\n");
        else
            printf("Nao esta vazia\n");
        if(cheia(l2))
            printf("Lista cheia\n");
        else
            printf("Nao esta cheia\n"); 
    } else
        printf("Lista nao foi criada\n");*/

    return 0;
}