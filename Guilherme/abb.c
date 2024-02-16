#include <stdlib.h>
#include <stdio.h>
#include "abb.h"
#include "fila_enc.h"


int soma;

void limpar_soma(){
    soma = 0;
}

struct no {
    int info;
    no *sae;    // sub-árvore a esquerda
    no *sad;    // sub_árvore a direita
};

int buscar(no* a, int valor) {
    if(a == NULL)
        return FALSO;
    
    if(valor == a->info)
        return VERDADEIRO;
    else if(valor < a->info)
        return buscar(a->sae, valor);
    else
        return buscar(a->sad, valor);
}

no* criar(int valor) {
    no *novo = (no*) calloc(1, sizeof(no));
    if(novo == NULL)
        return NULL;
    
    novo->info = valor;
    novo->sae = NULL;
    novo->sad = NULL;

    return novo;
}

no* inserir(no* n, int valor) {
    if(n == NULL)
        return criar(valor);

    if(valor < n->info)
        n->sae = inserir(n->sae, valor);
    else
        n->sad = inserir(n->sad, valor);
    
    return n;
}

void largura(no* n) {
    fila* f = criar_f();
    inserir_f(f, n);
    while(!vazia_f(f)) {
        no* atual = frente_f(f);
        printf("%d ", atual->info);
        remover_f(f);
        if(atual->sae)
            inserir_f(f, atual->sae);
        if(atual->sad)
            inserir_f(f, atual->sad);
    }
}

void liberar(no** n) {
    if(n == NULL || *n == NULL)
        return;
    
    no* temp = *n;
    liberar(&((*n)->sae));
    liberar(&((*n)->sad));
    free(temp);
}

void percorrer(no *n) {
    if(n == NULL)
        return;

    percorrer(n->sae);
    printf("%d ", n->info);
    percorrer(n->sad);
}

no* minimo(no* n) {
    if(n == NULL)
        return NULL;
    else if(n->sae != NULL)
        return minimo(n->sae);

    return n;
}

no* remover(no* n, int valor) {
    if(n == NULL)
        return NULL;
    
    if(valor < n->info) {
        n->sae = remover(n->sae, valor);
    } else if(valor > n->info) {
        n->sad = remover(n->sad, valor);
    } else {
        no* temp = NULL;
        if(n->sae == NULL && n->sad == NULL) {
            free(n);
            return NULL;
        } else if(n->sae == NULL) {
            temp = n->sad;
            free(n);
            return temp;
        } else if(n->sad == NULL) {
            temp = n->sae;
            free(n);
            return temp;
        } else {
            no* temp = minimo(n->sad);
            n->info = temp->info;
            n->sad = remover(n->sad, temp->info);
        }
    }
    return n;
}

//A:> Deveria ter usado variável local soma
int internos(no* n){
    if(n == NULL)
        return 0;

    fila* f = criar_f();
    inserir_f(f, n);
    while(!vazia_f(f)) {
        no* temp = frente_f(f);
        remover_f(f);
        soma += 1;  //A:> Está contando o número de nós e não o número de nós internos
        if(temp->sae)
            inserir_f(f, temp->sae);
        if(temp->sad)
            inserir_f(f, temp->sad);
    }
    liberar_f(&f);
    

    return soma;
}

int qtde_impares(no* n){
    if(n == NULL)
        return soma;

    qtde_impares(n->sae);
    qtde_impares(n->sad);

    if((n->info) % 2 != 0)
        return soma += 1;
    else
        return soma;

}

int maior(no* n){
    if(n->sad == NULL)
        return n->info;
    
    return maior(n->sad);
}


