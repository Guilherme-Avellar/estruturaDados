#include <stdio.h>
#include <stdlib.h>

#include "fila_enc.h"
#include "abb.h"

// IMPLEMENTAÇÃO DA FILA ENCADEADA

#define VERDADEIRO 1
#define FALSO 0

typedef struct cel celula;
struct cel {
    no* conteudo;
    celula *prox;
};

struct fila {
    celula *prim;
    int qtde;
};

fila* criar_f() {
    fila *l = (fila*) calloc(1, sizeof(fila));

    return l;
}

static celula* criar_celula(int valor) {
    celula *nova = (celula*) malloc(sizeof(celula));
    if(nova != NULL) {
        nova->conteudo = criar(valor);
        nova->prox = NULL;
    }

    return nova;
}

int vazia_f(fila* l) {
    if(l == NULL)
        return VERDADEIRO;
    
    return l->qtde == 0;
}

no* frente_f(fila* L) {
    return L->prim->conteudo;
}

int inserir_f(fila* L, no* n) {
    if(L == NULL)
        return FALSO;

    celula *cel = (celula*) calloc(1, sizeof(celula));
    cel->conteudo = n;
    cel->prox = NULL;

    if(vazia_f(L))
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

void liberar_f(fila* *l) {
    if(vazia_f(*l))
        return;

    int r;    
    while(!vazia_f(*l))
        remover_f(*l);
    
    free(*l);
    *l = NULL;
}

int remover_f(fila *L) {
    if(vazia_f(L))
        return FALSO;
    
    celula *removida = L->prim;
    L->prim = L->prim->prox;
    free(removida);
    L->qtde--;

    return VERDADEIRO;
}

int tamanho_f(fila* l) {
    if(l == NULL)
        return 0;

    return l->qtde;
}