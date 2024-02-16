#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int id_p(int indice){
    if(indice == 0)
        return 0;

    return(indice-1)/2;
}

int id_f_e(int indice){
    return 2*indice + 1;
}

int id_f_d(int indice){
    return 2*indice + 2;
}

void mostrar_vetor(int vetor[], int tam){
    if(tam != 0){
        printf("%d ", vetor[TAM - tam]);
        return mostrar_vetor(vetor, tam - 1);
    }
}

int main(){
    srand(time(NULL));

    int i, j, valor, *abb, aux;

    abb = (int*) calloc(TAM, sizeof(int)); //0 é o espaco vago do vetor

    for(i = 0; i < TAM; i++){
        valor = 1 + rand()%101;

        if(abb[i] == 0)
            abb[i] = valor;

        if(abb[id_p(i)] < abb[i] && abb[id_f_e(id_p(i))] > abb[id_p(i)]){
            
        }
    }

    
    return 0;
}