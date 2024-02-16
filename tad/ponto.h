#ifndef PONTO_H // INCLUDE GUARD
#define PONTO_H

// Interface do TAD ponto
typedef struct pto ponto;

ponto* criar_pto(float x, float y);
void exibir_pto(ponto *p);
void liberar_pto(ponto** p);
void mover_pto(ponto *p, float dx, float dy);

#endif // PONTO_H