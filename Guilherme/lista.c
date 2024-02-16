#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

// ------------------ Implemtação da lista ------------------

#define FALSO 0
#define VERDADEIRO 1

// Tipos
struct lst {
    int *dados;
    int cap, qtde;
};

// ------------------ Operações da lista ------------------

// STUB DE FUNÇÃO
int buscar_seq(lista *L, int e) {
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

int inserir_fim(lista *L, int e) {
    if(L == NULL || cheia(L))
        return FALSO;
    
    L->dados[L->qtde] = e;
    L->qtde++; // L->qtde = L->qtde + 1;
    
    return VERDADEIRO;
}

int inserir_inicio(lista *L, int e) {
    if(L == NULL || cheia(L))
        return FALSO;
    
    for(int i = tamanho(L); i >= 1; i--)
        L->dados[i] = L->dados[i-1];
    L->dados[0] = e;

    L->qtde++;

    return VERDADEIRO;
}

int inserir_meio(lista *L, int e, int k) {
    if(L == NULL || cheia(L))
        return FALSO;
    for(int i = L->qtde; i >= k; i--)
        L->dados[i] = L->dados[i-1];
    L->dados[k-1] = e;
    L->qtde++;
    
    return VERDADEIRO;
}

void liberar(lista *L) {
    if(L == NULL)
        return;
    
    free(L->dados);
    free(L);
}

int remover_fim(lista *l) {
    return FALSO;
}

int remover_inicio(lista *l) {
    return FALSO;
}

int remover_meio(lista *l, int k) {
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

int qtde_impares_lst(lista *L){
    int i, impares = 0;

    for(i = 0; i < tamanho(L); i++){
        if(L->dados[i] % 2 != 0)
            impares += 1;
    }

    return impares;
}