#include <stdlib.h>
#include <stdio.h>
#include "lista_seq_ord.h"

// ------------------ Implemtação da lista ------------------

#define FALSO 0
#define VERDADEIRO 1

// Tipos
struct lst {
    int *dados;
    int cap, qtde;
};

// ------------------ Operações da lista ------------------

int buscar_seq(lista *L, int e) {
    if(vazia(L))
        return FALSO;

    for(int i = 0; i < tamanho(L) && L->dados[i] <= e; i++)
        if(L->dados[i] == e)
            return VERDADEIRO;

    return FALSO;
}

int busca_binaria(lista *L, int valor, int e, int d) {
    int cont = 0;
    while(e <= d) {
        int m = (e + d)/2;
        cont++;
        if(valor == L->dados[m]) {
            printf("%d %d\n", valor, cont);
            return VERDADEIRO;
        }
        else if(valor > L->dados[m])
            e = m + 1;
        else
            d = m - 1;
    }

    return FALSO;
}

int capacidade(lista *L) {
    if(L == NULL)
        return 0;
    
    return L->cap;
}

int cheia(lista *L) {    // 0 => falso; != 0 => verdadeiro
    if(L == NULL)
        return FALSO;

    if(L->qtde == L->cap)
        return VERDADEIRO;
    
    return FALSO;
}

lista* criar_lista(int capacidade) {
    lista *nova = (lista*) malloc(sizeof(lista));
    if(nova == NULL) {
        return NULL;
    }
    nova->dados = (int*) malloc(capacidade*sizeof(int));
    if(nova->dados == NULL) {
        free(nova);
        return NULL;
    }
    nova->qtde = 0;
    nova->cap = capacidade;

    return nova;
}

void exibir(lista *L) {
    if(L == NULL || vazia(L))
        return;

    for(int i = 0; i < tamanho(L); i++)
        printf("%d ", L->dados[i]);
}

int inserir(lista *L, int e) {
    if(L == NULL || cheia(L))
        return FALSO;

    if(tamanho(L) == 0)
        L->dados[0] = e;
    else {
        int i;
        for(i = tamanho(L); i > 0; i--) {
            if(L->dados[i-1] <= e)
                break;
            L->dados[i] = L->dados[i-1];
        }
        L->dados[i] = e;
    }

    L->qtde++;
    return VERDADEIRO;
}

void liberar(lista *L) {
    if(L == NULL)
        return;
    
    free(L->dados);
    free(L);
}

int remover(lista *l, int k) {
    return FALSO;
}

int tamanho(lista *L) {
    if(L == NULL)
        return 0;
    
    return L->qtde;
}

int vazia(lista *L)  {
    if(L == NULL)
        return FALSO;
    
    return L->qtde == 0;
}