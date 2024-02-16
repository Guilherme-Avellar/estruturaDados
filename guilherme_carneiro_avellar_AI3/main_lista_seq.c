#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista_seq.h"

int main(){
    srand(time(NULL));
    lista *l = criar_lst(50);
    int i, contador;

    for(i = 0; i < 50; i ++){
        inserir_fim_lst(l, 1 + rand()%16);
    }

    //questao numero 1, 2 estao juntas
    
    printf("\nQuantidade do valor %d encontrado:  %d", 3, buscar_qtde_lst(l, 3));
    printf("\nQuantidade do valor %d encontrado:  %d", 8, buscar_qtde_lst(l, 8));
    printf("\nQuantidade do valor %d encontrado:  %d\n\n\n", 15, buscar_qtde_lst(l, 15));

    /*liberar_lst(l); da esse erro => warning: passing argument 1 of 'liberar_lst' from incompatible pointer type [-Wincompatible-pointer-types] 
    (nao sei se foi um erro que ja consertei)*/

    // questao 3

    lista *l2 = criar_lst(50);
    for(i = 0; i < 50; i++){
        inserir_fim_lst(l2, 1 + rand()%5);
    }
    for(i = 1; i < 6; i++){
        contador = 0;
        printf("\n%d:", i);
        if(buscar_qtde_lst(l2, i) != 0){
            while(contador != buscar_qtde_lst(l2, i)){
                printf(" *");
                contador += 1;
            }
        }
    }

    //apartir daqui foi feito depois da entrega. Tô fazendo so para estudar mesmo.

    par_impar(l);


    return 0;
}
