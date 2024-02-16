#ifndef FILA_SEQ_H
#define FILA_SEQ_H

/** @file fila_seq.h
 *  @brief Interface de uma fila linear sequencial
 *
 *  Este arquivo contém a interface do tipo e das funções definidas
 *  para uma fila linear sequencial.
 *
 *  @author Anderson Grandi Pires
 *  @bug Nenhum bug conhecido
 */

// Interface da fila

// Tipo de dados
typedef struct f fila;

// Operações
int capacidade_fila(fila* f);
fila* criar_fila(int capacidade_lista);

int esta_vazia_fila(fila* f);
int esta_cheia_fila(fila* f);
int esvaziar_fila(fila *f);

/*
 Entrada: fila f
 Saída: elemento que se encontra na frente da fila, caso a fila
       não esteja vazio (comportamento inesperado para fila vazia)
*/
int frente_fila(fila *f);

int liberar_fila(fila **f);

/*
Entrada: fila l e o valor a ser inserido
Saída: verdadeiro caso a inserção tenha ocorrido com sucesso
       falso caso contrário
*/
int inserir_fila(fila *f, int valor);

int remover_fila(fila *f);

int tamanho_fila(fila *f);

#endif // FILA_SEQ