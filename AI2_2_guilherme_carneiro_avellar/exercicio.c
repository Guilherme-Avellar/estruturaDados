#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct circulo{
    float x, y, raio;
} circulo;

void exibir_circ(circulo c){
    printf("\ncentro: (%.2f,%.2f)\nRaio: %.2f", c.x, c.y, c.raio);
}

float area_circ(circulo c){
    return 3.14 * pow(c.raio, 2);
}

float perimetro_circ(circulo c){
    return 2 * 3.14 * c.raio;
}

float distancia_circ(circulo c1, circulo c2){
    return sqrt(pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2));
}


int main(){

    srand(time(NULL)); //não tô achando uma solução para gerar numeros aleatorios decimais...
    circulo vetor[10], origem;
    origem.raio = 0;
    origem.x = 0;
    origem.y = 0;

    int i;

    for(i = 0; i < 10; i++){
        vetor[i].raio = 1 + rand()%5;
        vetor[i].x = -5 + rand()%11;
        vetor[i].y = -5 + rand()%11;

        printf("\n\n-----Circulo %d -----", i);
        exibir_circ(vetor[i]);
        printf("\nArea: %2.f", area_circ(vetor[i]));
        printf("\nPerimetro: %2.f", perimetro_circ(vetor[i]));
        printf("\nDistancia: %2.f", distancia_circ(vetor[i], origem)); 
        //não tô sabendo formatar para duas casas, acho que é alguma coisa com o math, não tira muito ponto pf '-'
    }
    
    return 0;
}