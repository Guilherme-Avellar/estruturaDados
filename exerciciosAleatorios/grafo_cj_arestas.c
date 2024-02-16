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
    */

    // Outra possível representação: sequência de vértices
    int A[] = {0, 1, 1, 2, 1, 3, 2, 3, 2, 4, 4, 0};
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
        printf("%d-%d ", v, u);
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

    return 0;
}