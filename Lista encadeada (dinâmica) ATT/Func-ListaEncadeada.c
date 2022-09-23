#include "ListaEncadeada.h"

Lista *cria_lista()
{
    Lista *lista = (Lista *)malloc(sizeof(Lista));

    lista->PrimeiroNo = NULL;
    lista->UltimoNO = NULL;
    lista->tam = 0;
    printf("Lista criada com sucesso!!\n\n");

    return lista;
}

int vazia(Lista *l)
{
    if (l->PrimeiroNo == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int tamanho(Lista *l)
{
    // Condições de falha
    if (l == NULL)
    {
        printf("A lista não existe\n");
        return -1;
    }
    else if (l->PrimeiroNo == NULL)
    {
        printf("A lista está vazia\n");
        return -1;
    }

    // imprime tamanho da lista
    printf("\nO tamanho atual da lista é: %d\n", l->tam);
    imprime_lista(l);

    return 0;
}

int modifica_elemento(Lista *l, int Ele, int pos)
{
    // Condições de falha
    if (l == NULL)
    {
        printf("A lista não existe\n");
        return -1;
    }
    else if (l->PrimeiroNo == NULL)
    {
        printf("A lista está vazia\n");
        return -1;
    }

    // Verifica se a posição é válida
    if ((pos < 1) || (pos > l->tam))
    {
        printf("A posição %d é inválida\n", pos);
        return -1;
    }

    // Auxiliar aponta para inicio da lista
    No *aux = l->PrimeiroNo;

    // Percorre as posições até chegar no elemento que sera alterado
    for (int i = 1; i < pos; i++)
    {
        aux = aux->Prox;
    }

    int anterior = aux->Info;

    // Altera o valor propriamente dito
    aux->Info = Ele;

    printf("Valor anterior: %d\nNovo valor: %d\n", anterior, aux->Info);

    return 0;
}

int insere_elemento(Lista *l, int Ele, int pos)
{
    // Condições de falha
    if (l == NULL)
    {
        printf("A lista não existen\n");
        return -1;
    }

    // Verifica se a posição é válida
    if ((pos < 1) || (pos > l->tam + 1))
    {
        printf("A posição %d é inválida\n", pos);
        return -1;
    }

    // Aloca memoria para novo nó na lista
    No *novo = (No *)malloc(sizeof(No));

    // Verifica se a nova alocação deu certo
    if (novo == NULL)
    {
        return -1;
    }
    novo->Info = Ele;

    // Inserção para caso a lista esteja vazia
    if (l->PrimeiroNo == NULL)
    {
        novo->Prox = NULL;
        l->PrimeiroNo = novo;
        l->UltimoNO = novo;

        // Insere numa posição específica da lista
    }
    else
    {

        No *aux = l->PrimeiroNo;

        // Inserir no inicio
        if (pos == 1)
        {
            l->PrimeiroNo = novo;
            novo->Prox = aux;

            // Inserir no meio ou final
        }
        else
        {

            for (int i = 1; i < pos - 1; i++)
            {
                aux = aux->Prox;
            }

            No *aux2 = aux->Prox;

            aux->Prox = novo;

            novo->Prox = aux2;

            // Atualiza o ponteiro final, caso insira no ínicio
            if (pos == l->tam + 1)
            {
                l->UltimoNO = novo;
            }
        }
    }

    l->tam++;
    return 0;
}

int remove_elemento(Lista *l, int pos)
{

    // Condições de falha
    if (l == NULL)
    {
        printf("A lista não existe\n");
        return -1;
    }
    else if (l->PrimeiroNo == NULL)
    {
        printf("A lista está vazia\n");
        return -1;
    }

    // Verifica se a posição é válida
    if ((pos < 1) || (pos > l->tam))
    {
        printf("A posição %d é inválida\n", pos);
        return -1;
    }

    No *aux = l->PrimeiroNo;

    // Remover do inicio
    if (pos == 1)
    {

        l->PrimeiroNo = aux->Prox;
        // Libera memoria eliminando elemento
        free(aux);

        // Remove no meio ou final
    }
    else
    {
        for (int i = 1; i < pos - 1; i++)
        {
            aux = aux->Prox;
        }
        No *aux2 = aux->Prox;

        aux->Prox = aux2->Prox;
        free(aux2);

        if (pos == l->tam)
        {
            l->UltimoNO = aux;
        }
    }

    l->tam--;
    return 0;
}

int imprime_lista(Lista *l)
{

    if (l == NULL)
    {
        printf("\nA lista não existe\n");
        return 0;
    }

    if (l->PrimeiroNo == NULL)
    {
        printf("\nLista Vazia\n");
        return 0;
    }

    printf("\nElementos da Lista:\n");
    No *aux = l->PrimeiroNo;

    int i = 1;

    while (aux != NULL)
    {
        printf("Nó %d - Valor: %d\n", i, aux->Info);
        i++;
        aux = aux->Prox;
    }
    return 0;
}