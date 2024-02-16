#include <stdio.h>

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

    // Criar a matriz de adjacências do grafo
    int V = qtde_vertices, mat_adj[V][V];
    /*
    Matriz com linhas e colunas
    1 2 3
    2 3 4
    1 0 1

    Matriz linearizada (forma como ela é realmente armazenada em memória)
    1 2 3 2 3 4 1 0 1
    */
    
    // Inicialização da matriz
    for(int l = 0; l < V; l++)
        for(int c = 0; c < V; c++)
            mat_adj[l][c] = 0;

    // Preenchimento da matriz
    for(int i = 0; i < qtde_arestas*2; i+=2) {
        int u, v;   // aresta u-v
        u = A[i];
        v = A[i+1];
        mat_adj[u][v] = 1;
        mat_adj[v][u] = 1;        
    }

    // Exibição da matriz de adjacências
    printf("\nExibicao da matriz de adjacencias\n");
    for(int l = 0; l < V; l++) {
        for(int c = 0; c < V; c++) {
            printf("%3d", mat_adj[l][c]);
        }
        printf("\n");
    }

    // Cálculo do grau dos vértices
    printf("\n");
    for(int linha = 0; linha < qtde_vertices; linha++) {
        printf("Grau do vertice %d: ", linha);
        int cont = 0;
        for(int coluna = 0; coluna < qtde_vertices; coluna++)
            cont += mat_adj[linha][coluna];
        printf("%d\n", cont);
    }

    return 0;
}