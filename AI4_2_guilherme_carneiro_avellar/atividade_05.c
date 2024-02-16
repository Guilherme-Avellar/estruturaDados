#include <stdio.h>
#include <stdlib.h>
#include "lista_enc.h"

#define V 5
#define N 3 //numero de saidas e chegadas, arestas do grafo

int main(){

    lista* vetor[V];

    for(int i = 0; i < V; i++){
        vetor[i] = criar();
    }
    
    //testes com valores escolhidos deliberadamente
    inserir_fim(vetor[0], 0);
    inserir_fim(vetor[0], 1);
    inserir_fim(vetor[2], 1);
    inserir_fim(vetor[3], 2);
    
    for(int i = 0; i < V; i++) {
        printf("%d: ", i);
        exibir(vetor[i]);
        printf("\n");
    }
    printf("\n\n");

    //letras a) e b):
    for(int i = 0; i < V; i++){
        printf("\n\ngrau de saida do %d: %d", i, tamanho(vetor[i]));
        printf("\ngrau de entrada do %d: %d", i, grau_entrada(vetor, i, V)); // função feita no lista_enc
    }




    for(int i = 0; i < V; i++){
        free(vetor[i]);
    }
    //liberar(vetor); //buga o compilador, ou algo de errado não esta certo, talvez pq seja um vetor ou sei la oq

    int i, j, mat[V][V];

    for( i=0; i<V; i++){
        for(j=0; i<V; j++){
            mat[i][j] = 0;
        }
    }
    
    //testes com valores escolhidos deliberadamente
    /*mat[1][0] = 1;
    mat[0][1] = 1;
    mat[1][1] = 1;
    mat[3][2] = 1;
    mat[2][3] = 1;
    mat[2][0] = 1;
    mat[0][2] = 1;

    int va = 2, vb = 0; //vertices para verificar o caminho

    for(i = 0; i < V; i++){
        for(j = 0; j < V; j++){
            if(mat[i][j] == alguma condição dificil aí)
        }
    }*/
    
    
    return 0;
}