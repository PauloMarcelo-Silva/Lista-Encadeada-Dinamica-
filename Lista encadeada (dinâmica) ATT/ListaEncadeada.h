#ifndef LISTAENCADEADA_H_LISTA
#define LISTAENCADEADA_H_LISTA

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct elemento
{
    int Info;              // Valor que quero armazenar
    struct elemento *Prox; // ponteiro para o proximo item da lista
} No;

typedef struct
{
    No *PrimeiroNo;
    No *UltimoNO;
    int tam;
} Lista;

Lista *cria_lista();
int vazia(Lista *l);
int tamanho(Lista *l);
int modifica_elemento(Lista *l, int Ele, int pos);
int insere_elemento(Lista *l, int Ele, int pos);
int remove_elemento(Lista *l, int pos);
int imprime_lista(Lista *l);

#endif