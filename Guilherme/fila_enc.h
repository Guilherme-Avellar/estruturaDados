#ifndef FILA
#define FILA

typedef struct fila fila;
typedef struct no no;

/*
Entrada: Não temb
Saída:  endereço da fila criada ou NULL em caso de erro
*/
fila* criar_f();

/*
Entrada: fila L cujo conteúdo será apresentado
Saída: valor que está na frente da fila
Pré-condição: fila não estar vazia
*/
no* frente_f(fila* l);

/*
Entrada: fila L, elemento e a ser inserido no fim
Saída:  verdadeiro (diferente 0) caso inserido com sucesso;
        falso (valor 0) caso contrário
*/
int inserir_f(fila* l, no* n);

/*
Entrada: ponteiro para a fila L cuja memória será desalocada
Saída:  Não tem
*/
void liberar_f(fila* *l);

/*
Entrada: fila L
Saída:  verdadeiro (diferente 0) caso removido com sucesso;
        falso (valor 0) caso contrário
*/
int remover_f(fila* l);

/*
Entrada: fila L
Saída: tamanho da fila (número de itens presentes na fila)
*/
int tamanho_f(fila* l);

/*
Entrada: fila L
Saída:  verdadeiro (diferente 0) caso vazia;
        falso (valor 0) caso contrário
*/
int vazia_f(fila* l);

#endif  // FILA