#include <stdio.h>
#include <stdlib.h>

/* Matriz de adjacências

Matriz com linhas e colunas
1 2 3
2 3 4
1 0 1
*/

void liberar(int **matriz, int V);
void mostrar(int **matriz, int V);

// Exemplo para grafo não direcionado

int main() {
    // Criar a matriz de adjacências do grafo
    int V,  // quantidade de vértices
        E;  // quantidade de arestas
    scanf("%d %d", &V, &E);

    // int mat_adj[V][V];
    int i;
    int **mat_adj = (int**) calloc(V, sizeof(int*));
    for(i = 0; i < V; i++)
        mat_adj[i] = (int*) calloc(V, sizeof(int));

    // Apresentação da matriz
    int e, u, v;
    for(e = 1; e <= E; e++) {
        scanf("%d%d", &u, &v);

        mat_adj[u][v] = 1;
        //mat_adj[v][u] = 1;    // grafo nao direcionado
    }

    mostrar(mat_adj, V);
    liberar(mat_adj, V);
    
    return 0;
}

void liberar(int **matriz, int V) {
    int i;
    for(int i = 0; i < V; i++)
        free(matriz[i]);
    free(matriz);
}

void mostrar(int **matriz, int V) {
    int i, j;
    for(i = 0; i < V; i++) {
        for(j = 0; j < V; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
}