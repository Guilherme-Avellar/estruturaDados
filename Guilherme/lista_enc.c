#include <stdlib.h>
#include <stdio.h>
#include "lista_enc.h"

// ------------------ Implemtação da lista ------------------

#define FALSO 0
#define VERDADEIRO 1

typedef struct cel celula;

// Tipos
struct lst {
    celula *prim;
    int qtde;
};

struct cel {
    int conteudo;
    celula *prox;
};

// ------------------ Operações da lista ------------------

int buscar_seq(lista *L, int e) {
    if(L == NULL || vazia(L))
        return FALSO;
    
    celula *temp = L->prim;
    while(temp != NULL) {
        if(e == temp->conteudo)
            return VERDADEIRO;
        temp = temp->prox;
    }
    
    return FALSO;
}

static celula* criar_celula(int ctd) {
    celula *nova = (celula*) malloc(sizeof(celula));
    if(nova != NULL) {
        nova->prox = NULL;
        nova->conteudo = ctd;
    }

    return nova;
}

lista* criar_lista() {
    lista *nova = (lista*) calloc(1,  sizeof(lista));
    //lista *nova = malloc(1 * sizeof(lista));

    return nova;
}

void exibir(lista *L) {
    if(L == NULL || vazia(L))
        return;

    celula *temp = L->prim;
        while(temp != NULL) {
        printf("%d ", temp->conteudo);
        temp = temp->prox;
    }
}

int inserir_fim(lista *L, int ctd) {
    if(L == NULL)
        return FALSO;
    
    celula *cel = criar_celula(ctd);
    if(cel == NULL)
        return FALSO;

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

int inserir_inicio(lista *L, int ctd) {
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

int inserir_meio(lista *L, int e, int k) {
    return FALSO; // STUB DE FUNÇÃO
}

void liberar(lista* *L) {
    if(vazia(*L))
        return;
    
    while(!vazia(*L))
        remover_inicio(*L);
    free(*L);
    *L = NULL; 
}

int remover_fim(lista *L) {
    if(vazia(L))
        return FALSO;
    
    celula *temp;
    if(L->qtde == 1) {
        temp = L->prim;
        L->prim = NULL;
        free(temp);
    } else {
        temp = L->prim;
        while(temp->prox->prox != NULL)
            temp = temp->prox;
        celula* removida = temp->prox->prox;
        temp->prox = NULL;
        free(removida);
    }
    L->qtde--;

    return VERDADEIRO;
}

int remover_inicio(lista *L) {
    if(vazia(L))
        return FALSO;
    
    celula *removida = L->prim;
    L->prim = L->prim->prox;
    free(removida);

    L->qtde--;

    return VERDADEIRO;
}

int remover_meio(lista *l, int k) {
    return FALSO; // STUB DE FUNÇÃO
}

int tamanho(lista *L) {
    if(vazia(L))
        return 0;
    
    return L->qtde;
}

int vazia(lista *L)  {
    if(L == NULL)
        return VERDADEIRO;
    
    return L->qtde == 0;
}