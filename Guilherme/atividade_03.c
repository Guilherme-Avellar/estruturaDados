#include <stdio.h>
#include <stdlib.h>
#include "lista_enc.h"

#define V 3 //escolher o numero de vertices


int main(){
    int i, j, mat[V][V], u, v;

    for(i = 0; i < V; i++){
        for(j = 0; j < V; j++){
            mat[i][j] = 0;
        }
    }

    for(i = 0; i < V; i++){
        printf("\n\ndigite o vetices de saida (%d): ", V-i);
        scanf("%d", &u);
        printf("\nDigite o vertice de chegada (%d): ", V-i);
        scanf("%d", &v);
        mat[u][v] = 1;
    }

    printf("\ngrafo direcionado:\n");
    for(i = 0; i < V; i++){
        for(j = 0; j < V; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");


    //letra d
    printf("\nvertice de saida, para teste de caminhho: ");
    scanf("%d", &u);
    printf("\nvertice de chegada, para teste de caminhho: ");
    scanf("%d", &v);

    for(i = 0; i < V; i++){
        for(j = 0; j < V; j++){
            
        }
    }
    

    printf("\ngrafo nao direcionado:\n");
    for(i = 0; i < V; i++){
        for(j = 0; j < V; j++){
            if(mat[i][j] == 1){
                mat[j][i] == 1;
            }
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");








    lista* vetor[V]; // para o grafo de lista de adjacencias letra b)

    inserir_fim(vetor[0], 0);   //A:> aresta 0-0?
    inserir_fim(vetor[0], 1);
    inserir_fim(vetor[1], 1);   //A:> aresta 1-1?

    //letra c)
    int grau = 0;
    for(i = 0; i < V; i++){
        if(vetor[i] != NULL && vetor[i] == i)   //A:> vetor[i] == i? vetor[i] é uma lista
            grau = (tamanho(vetor[i]));
        else
            grau = (tamanho(vetor[i])) *2;

        printf("grau do %d: \n", grau);
    }

    
    

    return 0;
}