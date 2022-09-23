#include "ListaEncadeada.h"

Lista *CriarListaVazia(void){
    return NULL;
};

Lista *InserirElementos(Lista* l,int i){

    Lista* Novo = (Lista*) malloc(sizeof(Lista));
    Novo -> Info = i;
    Novo -> Prox = l;
    return Novo;

};

void OutraInserirElemento(Lista** l,int i){
    Lista* Novo = (Lista*) malloc(sizeof(Lista));
    Novo -> Info = i;
    Novo -> Prox = *l;
    *l = Novo;
};

void ImInfoirElementosLista(Lista* l){
    printf("Passei\n");
    Lista* p;
    int no = 1;
    for(p=l;p !=NULL; p = p ->Prox ){
        printf("No = %d,Elemento = %d\n",no,p->Info);    
        ++no;
    }
    return 0;
};

int VerificarListaVazia(Lista* l){
    if (l == NULL){
        printf("A Lista Está Vazia!");
        return 1;
    }
    else
         printf("A Lista Não Está Vazia!");
         return 0;  
};

Lista *BuscarElementoLista(Lista *l,int VerificarEle){
    Lista* p;
    int no = 1;
    for(p=l; p!=NULL; p = p->Prox){
        if(p->Info == VerificarEle){
            printf("Elemento %d,está no Nó %d",p->Info,no);
            return 0;
        }
        ++no;
    }
    printf("Não Encontrei Elemento na sua Lista!");
    return 0;   
};

Lista *RetirarElementoLista(Lista *l,int VerificarEle){
    Lista* anteriorEle = NULL; // Criei um ponteiro para o elemento anterior
    Lista* p = l; //Ponteiro para percorrer a lista

    //Aqui estou procurando elemento na lista e guardando anterior
    while(p != NULL && p ->Info !=VerificarEle){
        anteriorEle = p;
        p = p ->Prox;
    }
    //Verificar se achou o Elemento
    if(p == NULL){
        printf("Não achei o Elemento");
        return 0;
    }
    //Fazer a retirada do Elemento
    if (anteriorEle == NULL){
        //Retira o Elemento do inicio
        l = p ->Prox;
    }
    else{
        //Retira o Elemento no Meio da Lista
        anteriorEle ->Prox = p ->Prox;
    }
    free(p);
    return 1;
};

