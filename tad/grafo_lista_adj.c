#include <stdio.h>
#include "lista_enc.h"

int main() {
    /*
    Representação por listas de adjacências

    > Outra possível representação
    Listas de adjacências
    0: 1 4
    1: 0 2 3
    2: 1 3 4
    3: 1 2
    4: 2 0
    */

    int V, E;
    scanf("%d %d", &V, &E);

    // Criar as listas de adjacências do grafo
    lista* adj[V];
    for(int i = 0; i < V; i++)
        adj[i] = criar_lst();

    // Preenchimento das listas de adjacências
    for(int e = 1; e <= E; e++) {
        int u, v;   // aresta u-v
        scanf("%d %d", &u, &v);
        inserir_fim_lst(adj[u], v);
        //inserir_fim_lst(adj[v], u);
    }

    // Exibição das listas de adjacências
    printf("\nExibicao das listas de adjacencias\n");
    for(int u = 0; u < V; u++) {
        printf("%d: ", u);
        exibir_lst(adj[u]);
        printf("\n");
    }

    return 0;
}