#include <stdio.h>
#include <stdlib.h>


typedef struct teste_lab
{
    int vetor[3];
};

int funcao_ponteiro(int *p1, int *p2)
{
    int multiplicacao= 2;

    *p1 = multiplicacao * *p1;
    *p2 = multiplicacao * *p2;
    multiplicacao = *p1 * *p2;

    return multiplicacao;
}


int main()
{
    struct teste_lab t;

    int i, *ponteiro, *ponteiro2, m, m2;

    m = 3;
    m2 = 5;
    ponteiro2 = &m2; // referencia para o qual o conteudo que ponteiro irá apontar
    ponteiro = &m;

    *ponteiro = m + 1; //atencao, e assim que se mexe no conteudo do enderesso de memoria

    for(i = 0; i < 3; i++)
    {
        t.vetor[i] = i;
        printf("%d  ", t.vetor[i]);
    }  

    printf("\n\nponteiro = %d   m = %d\n\n", *ponteiro, m);
    printf("\n\nfuncao de pontiros = %d\n\n\n", funcao_ponteiro(ponteiro, ponteiro2));
    printf("\n\nm = %d ,  m2 = %d\n\n", m, m2);

    return 0;
}
