#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista_seq.h"
#define tam 5

int mian(){
    
    srand(time(NULL));
    lista* l = criar_lst(tam);

    for(int i = 0; i < tam; i++){
        inserir_fim_lst(l, 1+rand()%16);
    }

    printf("\n\n3 aparece: %d; 8 aparece: %d; 15 aparece: %d;\n\n", buscar_qtde_lst(l, 3), buscar_qtde_lst(l, 8), buscar_qtde_lst(l, 15));

    return 0;
}