#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "heap.h"
#define TAM 15


int main(){
    srand(time(NULL));

    int i;

    heap *h = criar_heap(15);

    for(i = 0; i <TAM; i++)
        inserir_heap(h, 1 + rand()%50);
    
    exibir_heap(h);
    esvaziar_heap(h);

    return 0;
}