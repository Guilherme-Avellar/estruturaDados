#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include "../tad/lista_enc.h"

int main() {
    setlocale(LC_ALL, "Portuguese");

    int V, E, i, posicao, u, v;
    scanf("%d %d", &V, &E);

    // Criar as listas de adjacências do grafo
    lista* adj[V];
    for(i = 0; i < V; i++)
        adj[i] = criar_lst();

    // Preenchimento das listas de adjacências
    for(int e = 1; e <= E; e++) {
           // aresta u-v
        scanf("%d %d", &u, &v);
        inserir_fim_lst(adj[u], v);
        //inserir_fim_lst(adj[v], u);
    }

    /*// Exibição das listas de adjacências
    printf("\nExibicao das listas de adjacencias\n");
    for(u = 0; u < V; u++) {
        printf("%d: ", u);
        exibir_lst(adj[u]);
        printf("\n");
    }*/

    printf("\n\n\n");
    scanf("%d %d", &u, &v);
    if(busca_seq_lst(adj[u], v, &posicao) == 1){
        printf("\n\nSim\n\n");
    }
    else{
        printf("\n\nNão\n\n\n"); // esse "não" num quer sair escrito certo de jeito nenhum, vou surtar
    }

    return 0;
}