#include <stdio.h>
#include <stdlib.h>

#include "ListaEncadeada.c"

int main(void){
    Lista *l;
    l = CriarListaVazia(); //Ira Criar a Lista Vazia
    int escolha;
    
    while(escolha !=8){
        printf("Escolha");
        scanf("%d",&escolha);
        if(escolha == 1){
            //-----------------------------------------
            int ElementoLista;
            printf("Qual Elemento na Lista você deseja Inseir? ");
            scanf("%d",&ElementoLista);
            l = InserirElementos(l,ElementoLista);
            //-----------------------------------------
            /*Lista *l = CriarListaVazia();
            OutraInserirElemento(&l,6);*/
        }
        if(escolha == 2){
            //-----------------------------------------
            ImprimirElementosLista(l);
        }
        if(escolha == 3){
            //-----------------------------------------
            VerificarListaVazia(l);
        }
        if(escolha == 4){
        //-----------------------------------------
        int VericarElemento;
            printf("\nQual Elemento você Deseja ver se está presente na lista?");
            scanf("%d",&VericarElemento);
            l = BuscarElementoLista(l,VericarElemento);
        }
        if(escolha == 5){
            //-----------------------------------------
            int RetirarElemento;
            printf("\nQual Elemento você Deseja Retirar da lista?");
            scanf("%d",&RetirarElemento);
            l = RetirarElementoLista(l,RetirarElemento);
        }

    }
    
    return 0;
}