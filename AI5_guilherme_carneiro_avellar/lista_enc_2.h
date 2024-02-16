#ifndef LISTA_ENC
#define LISTA_ENC

typedef struct c celula;   // célula

typedef struct lista lista;

int somar_pesos(lista* l, int valor); // esse aqui foi eu que fiz

int busca_seq_lst(lista* l, int valor, int* pos);
lista* criar_lst();
int esta_vazia_lst(lista* l);
void exibir_lst(lista* l);
int inserir_fim_lst(lista* l, int valor, int peso);
int inserir_meio_lst(lista* l, int valor, int peso, int k);
int inserir_inicio_lst(lista* l, int valor, int peso);
void liberar_lst(lista** l);
int remover_fim_lst(lista* l, int* valor);
int remover_inicio_lst(lista* l, int* valor);
int remover_meio_lst(lista* l, int* valor, int k);
int tamanho_lst(lista* l);

#endif  // LISTA_ENC