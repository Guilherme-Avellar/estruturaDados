#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 30

int achar_valor(int vetor[], int v){
    int soma = 0;
    for(int i = 0; i < N; i++){
        if(vetor[i] == v)
            soma += 1;
    }
    return soma;
}


int main(){
    int vetor[N], i, v;

    srand(time(NULL));

    for(i = 0; i < N; i++){
        vetor[i] = -10 + rand()%111;
    }
    
    printf("\n\nsoma = %d\n\n", achar_valor(vetor, 8));

    return 0;
}