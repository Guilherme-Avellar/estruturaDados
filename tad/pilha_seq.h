// Interface da pilha

// ------------------------- Tipo -------------------------
typedef struct lst pilha;

// ------------------ Operações da pilha ------------------

/*
Entrada: pilha L
Saída: capacidade da pilha
*/
int capacidade(pilha *L);

/*
Entrada: pilha L
Saída: verdadeiro se estiver cheia; falso caso contrário
*/
int cheia(pilha *L);    // 0 => falso; != 0 => verdadeiro

/*
Entrada: capacidade da pilha
Saída: retorna a pilha criada
*/
pilha* criar_pilha(int capacidade);

/*
Entrada: pilha L a ser exibida
Saída: valor que está no topo
Pré-condição: pilha tem que existir e não pode estar vazia
*/
int topo(pilha *L);

/*
Entrada: pilha L, elemento e a ser inserido
Saída: sucesso (verdadeiro) ou falha (falso) na operação
*/
int inserir(pilha *L, int e);

/*
Entrada: pilha L a ser liberada
Saída: Não tem
*/
void liberar(pilha *L);

/*
Entrada: pilha L
Saída: sucesso ou falha na operação
*/
int remover(pilha *L);

/*
Entrada: pilha L
Saída: tamanho da pilha, ou seja, a quantidade de itens válidos
presentes na pilha
*/
int tamanho(pilha *L);

/*
Entrada: pilha L
Saída: verdadeiro se estiver vazia; falso caso contrário
*/
int vazia(pilha *L);
