#include <stdio.h>
#include <stdlib.h>
#include "abb.h"

int main(){

    no* a = criar(30);

    inserir(a, 20);
    inserir(a, 5);
    inserir(a, 4);
    inserir(a, 23);
    inserir(a, 22);
    inserir(a, 12);

    inserir(a, 32);
    inserir(a, 31);
    inserir(a, 40);
    inserir(a, 37);
    //inserir(a, 45);

    printf("\nnumero de nos: %d\n", internos(a));
    limpar_soma(); // tem que usar para zerar a variavel global usada no abb.c
    printf("\nnumero de nos (com coteudo impar): %d\n", qtde_impares(a));
    limpar_soma();
    printf("\nmaior numero da abb: %d\n", maior(a));


    //A:> Não liberou a árvore
    //liberar(a);

    return 0;
}