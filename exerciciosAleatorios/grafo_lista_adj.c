#include <stdio.h>
#include "../tads/lista_enc.h"

int main() {
    /*
    Conjunto de arestas: A = {{0,1}, {1,2}, {1,3}, {2,3}, {2,4}, {4,0}};
    
    > Uma possível representação computacional (conjunto de arestas)
    int A[6][2] =   {{0,1},
                     {1,2},
                     {1,3},
                     {2,3},
                     {2,4},
                     {4,0}
                    };
    
    > Outra possível representação
    Listas de adjacências
    0: 1 4
    1: 0 2 3
    2: 1 3 4
    3: 1 2
    4: 2 0
    */
    
    // Outra possível representação: sequência de vértices
    int A[] = {0, 1, 1, 2, 1, 3, 2, 3, 2, 4, 4, 0};
    // sizeof(A): número de bytes necessários para armazenar o conteúdo de A
    // qtde_elementos(A): números de bytes em A dividido pelo número de bytes necessários para o tipo do elemento (int)
    int qtde_elementos = sizeof(A)/sizeof(int),
        qtde_arestas = qtde_elementos/2;
    printf("Qtde de arestas: %d\n", qtde_arestas);

    // Apresentação das arestas do grafo
    printf("\nArestas do grafo nao-direcionado: ");
    for(int i = 0; i < qtde_arestas*2; i+=2) {
        int u, v;   // aresta u-v
        u = A[i];
        v = A[i+1];
        printf("%d-%d ", u, v);
    }
    printf("\n");
    
    // Cálculo da quantidade de vértices
    int qtde_vertices = A[0];
    for(int i = 1; i < qtde_arestas*2; i++) {
        if(A[i] > qtde_vertices)
            qtde_vertices = A[i];
    }
    qtde_vertices++;
    printf("\nQtde de vertices: %d\n", qtde_vertices);

    // Criar as listas de adjacências do grafo
    int V = qtde_vertices;
    lista* adj[V];
    for(int i = 0; i < V; i++)
        adj[i] = criar_lista();

    // Preenchimento das listas de adjacências
    for(int i = 0; i < qtde_arestas*2; i+=2) {
        int u, v;   // aresta u-v
        u = A[i];
        v = A[i+1];
        inserir_fim(adj[u], v);
        //inserir_fim(adj[v], u);
    }

    // Exibição das listas de adjacências
    printf("\nExibicao das listas de adjacencias\n");
    for(int u = 0; u < V; u++) {
        printf("%d: ", u);
        exibir(adj[u]);
        printf("\n");
    }

    return 0;
}