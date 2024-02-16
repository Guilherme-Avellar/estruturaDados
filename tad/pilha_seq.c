#include <stdlib.h>
#include <stdio.h>
#include "pilha_seq.h"

// ------------------ Implemtação da pilha ------------------

#define FALSO 0
#define VERDADEIRO 1

// Tipos
struct lst {
    int *dados;
    int cap, qtde;
};

// ------------------ Operações da pilha ------------------

int capacidade(pilha *L) {
    if(L == NULL)
        return 0;
    
    return L->cap;
}

int cheia(pilha *L) {    // 0 => falso; != 0 => verdadeiro
    if(L == NULL)
        return FALSO;

    if(L->qtde == L->cap)
        return VERDADEIRO;
    
    return FALSO;
}

pilha* criar_pilha(int capacidade) {
    pilha *nova = (pilha*) malloc(sizeof(pilha));
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

int topo(pilha *L) {
    return L->dados[L->qtde-1];
}

int inserir(pilha *L, int e) {  // PUSH
    if(L == NULL || cheia(L))
        return FALSO;
    
    L->dados[L->qtde] = e;
    L->qtde++;
    
    return VERDADEIRO;
}

void liberar(pilha *L) {
    if(L == NULL)
        return;
    
    free(L->dados);
    free(L);
}

int remover(pilha *L) {
    if(vazia(L))
        return FALSO;
    
    L->qtde--;

    return VERDADEIRO;
}

int tamanho(pilha *L) {
    if(L == NULL)
        return 0;
    
    return L->qtde;
}

int vazia(pilha *L)  {
    if(L == NULL)
        return FALSO;
    
    return L->qtde == 0;
}