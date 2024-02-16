#include <stdio.h>

int main() {
    int A, V;
    scanf("%d %d", &A, &V);
    //printf("%d %d\n", A, V);
    
    int mat_adj[A+1][A+1],
        trafego[A+1];
    
    // Inicialização da matriz
    for(int l = 1; l <= A; l++)
        for(int c = 1; c <= A; c++)
            mat_adj[l][c] = 0;

    for(int i = 1; i <= A; i++)
        trafego[i] = 0;

    // Exibição da matriz de adjacências
    /*printf("\nExibicao da matriz de adjacencias\n");
    for(int l = 1; l <= A; l++) {
        for(int c = 1; c <= A; c++) {
            printf("%3d", mat_adj[l][c]);
        }
        printf("\n");
    }*/

    int u, v; // aresta u->v
    for(int i = 1; i <= V; i++) {
        scanf("%d %d", &u, &v);
        mat_adj[u][v] += 1;
    }

    // Exibição da matriz de adjacências
    /*printf("\nExibicao da matriz de adjacencias\n");
    for(int l = 1; l <= A; l++) {
        for(int c = 1; c <= A; c++) {
            printf("%3d", mat_adj[l][c]);
        }
        printf("\n");
    }*/

    // Cálculo do trafego aéreo de saída
    for(int l = 1; l <= A; l++)
        for(int c = 1; c <= A; c++)
            trafego[l] += mat_adj[l][c];

    /*printf("\n");
    for(int i = 1; i <= A; i++)
        printf("%d ", trafego[i]);
    printf("\n");*/

    // Cálculo do trafego aéreo de saída + entrada
    for(int c = 1; c <= A; c++)
        for(int l = 1; l <= A; l++)
            trafego[c] += mat_adj[l][c];

    /*printf("\n");
    for(int i = 1; i <= A; i++)
        printf("%d ", trafego[i]);
    printf("\n");
    */

    int maximo = trafego[1];
    for(int i = 2; i <= A; i++)
        if(trafego[i] > maximo)
            maximo = trafego[i];

    for(int i = 1; i <= A; i++)
        if(trafego[i] == maximo)
            printf("%d ", i);
    printf("\n\n");

    return 0;
}