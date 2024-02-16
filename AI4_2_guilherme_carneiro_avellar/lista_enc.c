#include <stdio.h>
#include <stdlib.h>

#include "lista_enc.h"

// IMPLEMENTAÇÃO DA LISTA ENCADEADA

#define VERDADEIRO 1
#define FALSO 0

typedef struct cel celula;
struct cel {
    int conteudo;
    celula *prox;
};

struct lista {
    celula *prim;
    int qtde;
};

int buscar_seq(lista *l, int valor) {
    if(vazia(l))
        return FALSO;
    
    celula *temp = l->prim;
    while(temp != NULL) {
        if(valor == temp->conteudo)
            return VERDADEIRO;
        temp = temp->prox;
    }

    return FALSO;
}

lista* criar() {
    lista *l = (lista*) calloc(1, sizeof(lista));

    return l;
}

static celula* criar_celula(int valor) {
    celula *nova = (celula*) malloc(sizeof(celula));
    if(nova != NULL) {
        nova->conteudo = valor;
        nova->prox = NULL;
    }

    return nova;
}

int vazia(lista* l) {
    if(l == NULL)
        return VERDADEIRO;
    
    return l->qtde == 0;
}

void exibir(lista* L) {
    if(L == NULL || vazia(L))
        return;
    
    celula *temp = L->prim;
    while(temp != NULL) {
        printf("%d ", temp->conteudo);
        temp = temp->prox;
    }
}

int inserir_fim(lista* L, int ctd) {
    if(L == NULL)
        return FALSO;

    celula *cel = criar_celula(ctd);

    if(vazia(L))
        L->prim = cel;
    else {
        celula *temp = L->prim;
        while(temp->prox != NULL)
            temp = temp->prox;
        temp->prox = cel;
    }
    L->qtde++;

    return VERDADEIRO;
}

int inserir_meio(lista* L, int ctd, int k) {
    if(L == NULL || vazia(L) || k < 1 || k > tamanho(L)+1)
        return FALSO;
    
    if(k == 1)
        return inserir_inicio(L, ctd);
    else {
        celula *cel = criar_celula(ctd);
        if(cel == NULL)
            return FALSO;
        celula *temp = L->prim;
        for(int i = 1; i <= k-2; i++)
            temp = temp->prox;
        cel->prox = temp->prox;
        temp->prox = cel;
        L->qtde++;
    }

    return FALSO;
}

int inserir_inicio(lista* L, int ctd) {
    if(L == NULL)
        return FALSO;
    
    celula *cel = criar_celula(ctd);
    if(cel == NULL)
        return FALSO;

    cel->prox = L->prim;
    L->prim = cel;

    L->qtde++;
    
    return VERDADEIRO;
}

void liberar(lista* *l) {
    if(vazia(*l))
        return;

    int r;    
    while(!vazia(*l))
        remover_fim(*l, &r);
    
    free(*l);
    *l = NULL;
}

int remover_fim(lista* l, int *valor_removido) {
    if(vazia(l))
        return FALSO;
    
    celula *temp = l->prim;
    if(tamanho(l) == 1)
        return remover_inicio(l, valor_removido);
        
    while(temp->prox->prox != NULL) { // ???
        temp = temp->prox;
    }
    *valor_removido = temp->prox->conteudo;
    celula *removida = temp->prox;
    temp->prox = NULL;
    free(removida);
    
    l->qtde--;
    return VERDADEIRO;
}

int remover_meio(lista* l, int k, int *valor_removido) {
    if(vazia(l) || k < 1 || k > tamanho(l))
        return FALSO;
    
    celula *temp = l->prim;
    if(tamanho(l) == 1)
        return remover_inicio(l, valor_removido);
    
    for(int i = 1; i <= k-2; i++)
        temp = temp->prox;
    celula *removida = temp->prox;
    temp->prox = temp->prox->prox;
    *valor_removido = removida->conteudo;
    free(removida);
    l->qtde--;

    return VERDADEIRO;    
}

int remover_inicio(lista *L, int *valor) {
    if(vazia(L))
        return FALSO;
    
    celula *removida = L->prim;
    *valor = removida->conteudo;
    L->prim = L->prim->prox;
    free(removida);
    L->qtde--;

    return VERDADEIRO;
}

int tamanho(lista* l) {
    if(l == NULL)
        return 0;

    return l->qtde;
}

int grau_entrada(lista* vetor[], int N, int tam){
    int soma = 0;
    if(vetor == NULL)
        return 0;

    celula* temp;

    for(int i = 0; i < tam; i++){
        temp = vetor[i]->prim;
        while(temp != NULL){
            if(temp->conteudo == N){
                soma += 1;
            }
            temp = temp->prox;
        }
    }
    free(temp);
    
    return soma;
}
