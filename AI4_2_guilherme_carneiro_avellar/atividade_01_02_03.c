#include <stdio.h>
#include <stdlib.h>

#include "abb.h"

#define N 0


//alguns testes das atividades


int main(){

    int i, soma = 0;

    no* a = criar(N);


    inserir(a, -2);
    inserir(a, 3);
    inserir(a, -1);
    inserir(a, -4);
    inserir(a, 1);
    inserir(a, 2);

    //soma ta como variavel global (la no outro arquivo), entao só pode usar uma por vez...
    //printf("\nsoma = %d\n", somar(a));
    //printf("\nsoma recursiva = %d\n", somar_rec(a));
    //printf("\n\nsoma dos nos folha = %d\n\n", folhas(a));

    return 0;
}