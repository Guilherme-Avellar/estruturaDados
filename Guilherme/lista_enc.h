// Interface da lista

// ------------------------- Tipo -------------------------
typedef struct lst lista;

// ------------------ Operações da lista ------------------

/*
Entrada: lista L, elemento e a ser procurado na lista
Saída: sucesso (verdadeiro) ou falha (falso) na operação
*/
int buscar_seq(lista *L, int e);

/*
Entrada: Não tem
Saída: retorna a lista criada
*/
lista* criar_lista();

/*
Entrada: lista L a ser exibida
Saída: Não tem
*/
void exibir(lista *L);

/*
Entrada: lista L, elemento e a ser inserido
Saída: sucesso (verdadeiro) ou falha (falso) na operação
*/
int inserir_fim(lista *L, int e);

/*
Entrada: lista L, elemento e a ser inserido
Saída: sucesso ou falha na operação
*/
int inserir_inicio(lista *L, int e);

/*
Entrada: lista L, elemento e a ser inserido, k-ésima posição onde o
elemento e será inserido
Saída: sucesso (verdadeiro) ou falha (falso) na operação
*/
int inserir_meio(lista *L, int e, int k);

/*
Entrada: lista L a ser liberada
Saída: Não tem
*/
void liberar(lista **L);

/*
Entrada: lista L
Saída: sucesso ou falha na operação
*/
int remover_fim(lista *L);

/*
Entrada: lista L
Saída: sucesso ou falha na operação
*/
int remover_inicio(lista *L);

/*
Entrada: lista L, k-ésima posição na qual um elemento será removido
Saída: sucesso (verdadeiro) ou falha (falso) na operação
*/
int remover_meio(lista *L, int k);

/*
Entrada: lista L
Saída: tamanho da lista, ou seja, a quantidade de itens válidos
presentes na lista
*/
int tamanho(lista *L);

/*
Entrada: lista L
Saída: verdadeiro se estiver vazia; falso caso contrário
*/
int vazia(lista *L);
