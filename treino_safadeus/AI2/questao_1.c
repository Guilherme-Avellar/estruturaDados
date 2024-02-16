#include <stdio.h>
#include <stdlib.h>

typedef struct ponto{
    float x, y, z;
}ponto;

void exibri_ponto(ponto p){
    printf("(%.2f, %.2f, %.2f)", p.x, p.y, p.z);
}

void distancia_pontos(ponto *p){
    
}

int main(){

    int N;
    
    printf("\n\ndigite o tamanho do vetor: ");
    scanf("%d", &N);
    ponto *p = (ponto*) malloc(N * sizeof(ponto));



    return 0;
}