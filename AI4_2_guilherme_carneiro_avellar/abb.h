#ifndef ABB_H    // INCLUDE GUARD
#define ABB_H

#define FALSO 0
#define VERDADEIRO 1

// INTERFACE DA ARVORE BINÁRIA DE BUSCA (ABB)

typedef struct no no;

int buscar(no* a, int valor);
no* criar(int valor_raiz);
no* inserir(no* a, int valor);
void largura(no* n);
void liberar(no** n);
void percorrer(no *n);
no* remover(no* a, int valor);

//soma todos os numeros da abb - exercicio 01.
int somar(no* n);

//soma todos os números da abb, porém, de forma recursiva.
int somar_rec(no* n);

//contar numero de nos folhas da abb, de forma recursiva.
int folhas(no* n);

#endif // ABB_H