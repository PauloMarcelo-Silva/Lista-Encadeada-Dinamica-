#include "Func-ListaEncadeada.c"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{

    Lista *lista;

    // Criar a lista
    lista = cria_lista();

    // Verifica se a lista está vazia
    if (vazia(lista))
    {
        printf("Lista vazia\n");
    }
    else
        printf("Não está vazia\n");

    //--------------------------------
    insere_elemento(lista, 4, 1);
    tamanho(lista);
    //--------------------------------
    insere_elemento(lista, 5, 2);
    tamanho(lista);
    //--------------------------------
    insere_elemento(lista, 6, 1);
    tamanho(lista);
    //--------------------------------
    insere_elemento(lista, 7, 2);
    tamanho(lista);
    //--------------------------------
    insere_elemento(lista, 8, 3);
    tamanho(lista);

    //--------------------------------
    imprime_lista(lista);
    printf("\n");
    //--------------------------------
    modifica_elemento(lista, 3, 1);
    //--------------------------------
    modifica_elemento(lista, 9, 2);
    //--------------------------------
    modifica_elemento(lista, 6, 5);
    //--------------------------------
    imprime_lista(lista);
    //--------------------------------
    remove_elemento(lista, 1);
    //--------------------------------
    imprime_lista(lista);
    //--------------------------------
    remove_elemento(lista, 4);
    //--------------------------------
    imprime_lista(lista);

    //--------------------------------
    if (vazia(lista))
    {
        printf("\nLista vazia\n");
    }
    else
        printf("\nNão está vazia\n");

    return 0;
}
