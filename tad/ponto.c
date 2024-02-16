#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

// Implementação do TAD ponto
struct pto {
    float x, y;
};

ponto* criar_pto(float x, float y) {
    ponto* novo_ponto = (ponto*) malloc(sizeof(ponto));
    novo_ponto->x = x;
    novo_ponto->y = y;
    return novo_ponto;
}

void exibir_pto(ponto *p) {
    printf("(%.2f, %.2f)", p->x, p->y);
}

void liberar_pto(ponto** p) {
    free(*p);
    *p = NULL;
}

void mover_pto(ponto *p, float dx, float dy) {
    p->x += dx;
    p->y += dy;
}
