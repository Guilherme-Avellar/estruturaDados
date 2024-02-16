#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

#define VERDADEIRO 1
#define FALSO 0
#define ERRO -1

// Implementação do tipo
struct lst {
    int *dados,
        cap,
        qtde;
};

/*
Entrada: lista L, elemento e a ser procurado na lista
Saída: sucesso (verdadeiro) ou falha (falso) na operação
*/
int buscar_seq(lista *L, int e) {
    if(L==NULL || vazia(L))
        return FALSO;
    
    for(int i = 0; i < tamanho(L); i++)
        if(L->dados[i] == e)
            return VERDADEIRO;
    
    return FALSO;
}

int capacidade(lista *L) {
    if(L == NULL)
        return 0;
    
    return L->cap;
}

/*
Entrada: lista L
Saída: verdadeiro se estiver cheia; falso caso contrário
*/
int cheia(lista *L) {
    if(L == NULL)
        return ERRO;
    
    /*if(L->qtde == L->cap)
        return VERDADEIRO;
    
    return FALSO;*/
    return L->qtde == L->cap;
}

/*
Entrada: capacidade da lista
Saída: endereço da lista criada
*/
lista* criar(int capacidade) {
    if(capacidade <= 0)
        return NULL;
    
    lista *l = (lista*) malloc(sizeof(lista));
    if(l == NULL)
        return NULL;
    
    l->dados = (int*) calloc(capacidade, sizeof(int));
    if(l->dados == NULL) {
        free(l);
        return NULL;
    }

    l->qtde = 0;
    l->cap = capacidade;

    return l;
}

/*
Entrada: lista L
Saída: Não tem
*/
void exibir(lista *L) {
    if(L==NULL || vazia(L))
        return;
    
    for(int i = 0; i < tamanho(L); i++)
        printf("%d ", L->dados[i]);
}

/*
Entrada: lista L, elemento e a ser inserido
Saída: sucesso (verdadeiro) ou falha (falso) na operação
*/
int inserir_fim(lista *L, int e) {
    if(L == NULL || cheia(L))
        return FALSO;
    
    L->dados[L->qtde] = e;
    L->qtde++;

    return VERDADEIRO;
}

/*
Entrada: lista L, elemento e a ser inserido
Saída: sucesso ou falha na operação
*/
int inserir_inicio(lista *L, int e) {
    if(L == NULL || cheia(L))
        return FALSO;
    
    for(int i = L->qtde; i >= 1; i--)
        L->dados[i] = L->dados[i-1];
    L->dados[0] = e;
    L->qtde++;
    
    return VERDADEIRO;
}

/*
Entrada: lista L, elemento e a ser inserido, k-ésima posição onde o
elemento e será inserido
Saída: sucesso (verdadeiro) ou falha (falso) na operação
*/
int inserir_meio(lista *L, int e, int k) {
    if(L == NULL || cheia(L))
        return FALSO;

    for(int i = L->qtde; i >= k; i--)
        L->dados[i] = L->dados[i-1];
    L->dados[k-1] = e;
    L->qtde++;
    
    return VERDADEIRO;
}

/*
Entrada: lista L
Saída: Não tem
*/
void liberar(lista *L) {
    if(L != NULL)
        free(L);
}

/*
Entrada: lista L
Saída: sucesso ou falha na operação
*/
int remover_fim(lista *L) {
    if(L == NULL || vazia(L))
        return FALSO;
    
    L->qtde--;

    return VERDADEIRO;
}

/*
Entrada: lista L
Saída: sucesso ou falha na operação
*/
int remover_inicio(lista *L) {
    if(L == NULL || vazia(L))
        return FALSO;

    for(int i = 1; i < tamanho(L); i++)
        L->dados[i-1] = L->dados[i];
    L->qtde--;
    
    return VERDADEIRO;
}

/*
Entrada: lista L, k-ésima posição na qual um elemento será removido
Saída: sucesso (verdadeiro) ou falha (falso) na operação
*/
int remover_meio(lista *L, int k) {
    if(L == NULL || vazia(L))
        return FALSO;

    for(int i = k-1; i <= tamanho(L)-1; i++)
        L->dados[i] = L->dados[i+1];
    L->qtde--;

    return VERDADEIRO;
}

/*
Entrada: lista L
Saída: tamanho da lista, ou seja, a quantidade de itens válidos
presentes na lista
*/
int tamanho(lista *L) {
    if(L == NULL)
        return 0;
    
    return L->qtde;
}

/*
Entrada: lista L
Saída: verdadeiro se estiver vazia; falso caso contrário
*/
int vazia(lista *L) {
    if(L == NULL)
        return ERRO;
    
    return L->qtde == 0;
}