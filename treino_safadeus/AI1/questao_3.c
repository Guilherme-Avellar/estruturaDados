//inverte a ordem de um vetor

#include <stdio.h>
#include <stdbool.h>

void inverter(int vet[], int tam){
    int aux;
    for(int i = 0; i < (tam-1)/2; i++){
        aux = vet[i];
        vet[i] = (tam - 1) - i;
        vet[(tam - 1) - i] = aux;
    }
}

int main(){
    int i, vet[7];

    for(i = 0; i < 7; i++){
        vet[i] = i;
    }

    inverter(vet, 7); // isso aqui que faz a mágica
    
    printf("\n\n");
    for (i = 0; i < 7; i++){
        printf(" %d", vet[i]);
    }
    
    return 0;
}