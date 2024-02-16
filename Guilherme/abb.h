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

/*
Entrada: raiz da arvore n
Saida: soma do numero de nos na arvore
*/
int internos(no* n);

//limpa a variavel global soma, deve ser usado para toda a função que faz algum tipo de soma
void limpar_soma();

/*
Entrada: raiz da arvore n
Saida: Quantidade de nós cujo o conteudo é um numero impar
*/
int qtde_impares(no* n);

/*
Entrada: raiz da arvore n
Saída: maior valor da arvore
*/
int maior(no* n);



#endif // ABB_H