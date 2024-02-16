#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef struct ponto{
    float x, y, z;
} ponto;

void exibir_ponto(ponto* p);
void exibir_pontos(ponto* p[], int tam);
float distancia_pontos(ponto *p1, ponto *p2);
void maior_distancia(ponto* p[], int tam);

void exibir_ponto(ponto* p){
    printf("(%.2f, %.2f, %.2f)", p->x, p->y, p->z);
}

void exibir_pontos(ponto* p[], int tam){
    int i;
    for(i = 0; i < tam; i++) {
        exibir_ponto(p[i]);
        printf("\n");
    }
}

float distancia_pontos(ponto *p1, ponto *p2){
    return sqrt(pow(p2->y - p1->y, 2) + pow(p2->x - p1->x, 2));
}

void maior_distancia(ponto* p[], int tam) {
    ponto origem = {0, 0, 0};
    float maior = distancia_pontos(p[0], &origem);
    
    int i, id_maior = 0;
    for(i = 1; i < tam; i++) {
        float d = distancia_pontos(p[i], &origem);
        if(d > maior) {
            maior = d;
            id_maior = i;
        }
    }

    exibir_ponto(p[id_maior]);
}

int main(){
    srand(time(NULL));
    ponto* vet[10];
    ponto *p;
    int i;
    for(i = 0; i < 10; i++) {
        p = (ponto*) malloc(sizeof(ponto));
        p->x = -50 + rand()%101;
        p->y = -50 + rand()%101;
        p->z = -50 + rand()%101;
        vet[i] = p;
    }

    exibir_pontos(vet, 10);

    printf("\n");
    maior_distancia(vet, 10);

    return 0;
}