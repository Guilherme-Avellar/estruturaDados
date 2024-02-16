#include <stdlib.h>
#include <stdio.h>
#include "lista_enc_2.h"

int main() {


    int V, E;
    scanf("%d %d", &V, &E);

    // Criar as listas de adjacências do grafo
    lista* adj[V];
    for(int i = 0; i < V; i++)
        adj[i] = criar_lst();

    // Preenchimento das listas de adjacências
    for(int e = 1; e <= E; e++) {
        int u, v, p;   // aresta u-v
        scanf("%d %d %p", &u, &v);
        inserir_fim_lst(adj[u], v, p);
        //inserir_fim_lst(adj[v], u);
    }

    // Exibição das listas de adjacências
    printf("\nExibicao das listas de adjacencias\n");
    for(int u = 0; u < V; u++) {
        printf("%d: ", u);
        exibir_lst(adj[u]);
        printf("\n");
    }

    printf("\n\n");
    int u, soma = 0;
    scanf("%d", u);
    for(int i = 0; i< V; i++){
        soma += somar_pesos(adj[i], u);
    }

    printf("\n\n\n%d\n\n\n", soma);

    return 0;
}