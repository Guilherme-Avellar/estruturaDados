#ifndef LISTA_ENC
#define LISTA_ENC

typedef struct lista lista;

/*
Entrada: lista L, elemento e a ser procurado na lista
Saída:  verdadeiro (diferente 0) caso encontrado;
        falso (valor 0) caso contrário
*/
int buscar_seq(lista* L, int valor);

/*
Entrada: Não temb
Saída:  endereço da lista criada ou NULL em caso de erro
*/
lista* criar();

/*
Entrada: lista L cujo conteúdo será apresentado
Saída:  Não tem
*/
void exibir(lista* l);

/*
Entrada: lista L, elemento e a ser inserido no fim
Saída:  verdadeiro (diferente 0) caso inserido com sucesso;
        falso (valor 0) caso contrário
*/
int inserir_fim(lista* l, int valor);

/*
Entrada: lista L, elemento e a ser inserido, k-ésima posição onde o
elemento e será inserido no meio
Saída:  verdadeiro (diferente 0) caso inserido com sucesso;
        falso (valor 0) caso contrário
*/
int inserir_meio(lista* l, int valor, int k);

/*
Entrada: lista L, elemento e a ser inserido no início
Saída:  verdadeiro (diferente 0) caso inserido com sucesso;
        falso (valor 0) caso contrário
*/
int inserir_inicio(lista* l, int valor);

/*
Entrada: ponteiro para a lista L cuja memória será desalocada
Saída:  Não tem
*/
void liberar(lista* *l);

/*
Entrada: lista L e o valor removido (retorno por referência)
Saída:  verdadeiro (diferente 0) caso removido com sucesso;
        falso (valor 0) caso contrário
*/
int remover_fim(lista* l, int *valor_removido);

/*
Entrada: lista L
Saída:  verdadeiro (diferente 0) caso removido com sucesso;
        falso (valor 0) caso contrário
*/
int remover_inicio(lista*, int*);

/*
Entrada: lista L, k-ésima posição na qual um elemento será removido
         e o valor removido (retorno por referência)
Saída:  verdadeiro (diferente 0) caso removido com sucesso;
        falso (valor 0) caso contrário
*/
int remover_meio(lista* l, int k, int *valor_removido);

/*
Entrada: Lista L
Saída: tamanho da lista (número de itens presentes na lista)
*/
int tamanho(lista* l);

/*
Entrada: Lista L
Saída:  verdadeiro (diferente 0) caso vazia;
        falso (valor 0) caso contrário
*/
int vazia(lista* l);

/*
Entrada: vetor de lista, numero a ser procurado para dizer o grau, tamanho do vetor (numero de vertices)
saída: soma dos graus de chegada
*/
int grau_entrada(lista* vetor[], int N, int tam);

#endif  // LISTA_ENC