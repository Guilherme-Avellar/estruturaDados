#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15

void mostrar_vetor(int vetor[], int tam){
    if(tam != 0){
        printf("%d ", vetor[TAM - tam]);
        return mostrar_vetor(vetor, tam - 1);
    }
}


int main(){
    
    srand(time(NULL));
    int vetor[TAM], i;

    for(i = 0; i < TAM; i++){
        vetor[i] = 12 + rand()%84;
        //vetor[i] = i;
    }

    printf("\n\n");
    mostrar_vetor(vetor, TAM);
    printf("\n\n");
       
    return 0;
}