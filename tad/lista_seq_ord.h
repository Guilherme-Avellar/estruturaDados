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
Entrada: lista L, extremidades esquerda (e) e direita (d) do vetor
Saída: sucesso (verdadeiro) ou falha (falso) na operação
*/
int busca_binaria(lista *L, int valor, int e, int d);

/*
Entrada: lista L
Saída: capacidade da lista
*/
int capacidade(lista *L);

/*
Entrada: lista L
Saída: verdadeiro se estiver cheia; falso caso contrário
*/
int cheia(lista *L);    // 0 => falso; != 0 => verdadeiro

/*
Entrada: capacidade da lista
Saída: retorna a lista criada
*/
lista* criar_lista(int capacidade);

/*
Entrada: lista L a ser exibida
Saída: Não tem
*/
void exibir(lista *L);

/*
Entrada: lista L, elemento e a ser inserido
Saída: sucesso (verdadeiro) ou falha (falso) na operação
*/
int inserir(lista *L, int e);

/*
Entrada: lista L a ser liberada
Saída: Não tem
*/
void liberar(lista *L);

/*
Entrada: lista L, k-ésima posição na qual um elemento será removido
Saída: sucesso (verdadeiro) ou falha (falso) na operação
*/
int remover(lista *L, int k);

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
