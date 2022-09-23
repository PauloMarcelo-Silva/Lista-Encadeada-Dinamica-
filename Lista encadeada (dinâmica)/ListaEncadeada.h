#ifndef LISTAENCADEADA_H_DEFINE
#define LISTAENCADEADA_H_DEFINE

#include <stdio.h>
#include <stdlib.h>

struct Lista {
    int Info; //Armazenar informação
    struct Lista* Prox; //Campo Ponteiro
}; //Estrutura auto-referenciada 
typedef struct Lista Lista;

Lista *CriarListaVazia(void);
int VerificarListaVazia(Lista* l);
Lista *InserirElementos(Lista* l,int i); //insere um Elemento novo no começo da lista.
void OutraInserirElemento(Lista** l,int i);
void ImprimirElementosLista(Lista* l);
Lista *BuscarElementoLista(Lista *l,int VerificarELe);
Lista *RetirarElementoLista(Lista *l,int VerificarEle);
int InserirElementosDeterminadaPos(Lista *l,int Ele,int pos);
#endif