//vetor com numeros aleatorios

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int N;
    printf("digite o valor do vetor: ");
    scanf("%d", &N);
    int vetor[N];

    printf("\n\n\n");
    for(int i = 0; i < N; i++){
        vetor[i] = 10+rand()%101;
        printf(" %d", vetor[i]);
    }
    printf("\n\n\n");

    return 0;
}