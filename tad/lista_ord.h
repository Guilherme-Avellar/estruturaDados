/** @file lista.h
 *  @brief Interface de uma lista linear sequencial
 *
 *  Este arquivo contém os protótipos das funções disponibilizadas
 *  para uma lista linear. Constantes simbólicas foram definidas para
 *  os valores lógicos verdadeiro e falso, além de um código de erro.
 *
 *  @author Anderson Grandi Pires
 *  @bug Nenhum bug conhecido
 */

// INCLUDE GUARD
#ifndef LISTA_ORD
#define LISTA_ORD

typedef struct lista lista;

int buscar_lst(lista *l, int valor);

/*
Entrada: lista ordenada l, valor a ser procurado
Saída: k-ésima posição
*/
int busca_binaria_lst(lista *l, int valor);
int capacidade_lst(lista *l);
lista* criar_lst(int capacidade); // lista* criar(void);
int esta_vazia_lst(lista *l);
int esta_cheia_lst(lista *l);
void exibir_lst(lista *l);
int inserir_lst(lista *l, int valor);
void liberar_lst(lista **l);
int remover_lst(lista *l, int *valor_removido, int pos);
//int remover_lst(lista *l, int valor);
int tamanho_lst(lista *l);

#endif // LISTA_ORD