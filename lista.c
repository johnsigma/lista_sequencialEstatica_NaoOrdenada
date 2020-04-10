#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#define max 10

struct lista{
    int no[max];
    int fim;
};

Lista cria_lista(){
    Lista lst;
    lst = (Lista) malloc(sizeof(struct lista));

    if(lst != NULL){
        lst->fim = 0;
    }
    return lst;
}

int lista_vazia(Lista lst){
    if(lst->fim==0)
        return 1; //lista vazia
    else
        return 0; //lista NÃO vazia
}

int lista_cheia(Lista lst){
    if(lst->fim==max)
        return 1; //lista cheia
    else
        return 0; //lista NÃO cheia
}

int insere_elem(Lista lst, int elem){
    if(lst == NULL || lista_cheia(lst) == 1)
        return 0; //falha
    lst->no[lst->fim]=elem; //insere o elemento
    lst->fim++; //avança o fim
    return 1; //sucesso
}

int remove_elem(Lista lst, int elem){
    if(lst==NULL || lista_vazia(lst)==1)
        return 0; //falha
    int i, Aux=0;

    while(Aux<lst->fim && lst->no[Aux]!=elem)
        Aux++;

    if(Aux==lst->fim) //percorreu a lista inteira
        return 0; //falha, o elemento não está na lista

    //se chegou aqui é porque o elemento está na lista

    for(i=Aux+1; i<lst->fim; i++)
        lst->no[i-1]=lst->no[i];

    lst->fim--;
    return 1; //sucesso na remoção
}

Lista imprime_lista(Lista lst){
    int i;
    if(lst->fim==0)
        printf("Lista vazia!\n\n");
    else{
        printf("Lista: ");
        for(i=0;i<lst->fim;i++){
            printf("%d ", lst->no[i]);
        }
        printf("\n\n");
    }
}

int menor_elem(Lista lst){
    if(lst==NULL || lista_vazia(lst)==1)
        return 0;
    int menor, aux;
    for(aux=0;aux<lst->fim;aux++){
        if(aux==0)
            menor=lst->no[aux];
        else
            if(lst->no[aux]<menor)
                menor=lst->no[aux];
    }

    remove_elem(lst,menor);
    return 1;
}

int tamanho(Lista lst){
    return printf("A lista tem %d elementos!\n", lst->fim);
}

int insere_inicio(Lista lst, int elem){
    if(lst==NULL || lista_cheia(lst))
        return 0;

    int i;

    for(i=lst->fim;i>0;i--)
        lst->no[i]=lst->no[i-1];

    lst->fim=lst->fim+1;
    lst->no[0]=elem;
    return 1;
}

int remove_todos(Lista lst, int elem){
    if(lst==NULL || lista_vazia(lst)==1)
        return 0; //falha
    int i, Aux=0;

    while(Aux<=lst->fim){
        if(lst->no[Aux]==elem){
            for(i=Aux+1;i<lst->fim;i++)
                lst->no[i-1]=lst->no[i];
            lst->fim--;
        }
        Aux++;
    }

    return 1; //sucesso na remoção
}

Lista concatenar(Lista lst1, Lista lst2){

    if((lst1->fim+lst2->fim)>max){
        printf("Tamanho maior que max!\n");
        return 0;
    }

    Lista lst3 = cria_lista();

    if(lst3==NULL)
        return -1;

    int i;

    for(i=0;i<lst1->fim;i++){
        lst3->no[lst3->fim]=lst1->no[i];
        lst3->fim++;
    }

    for(i=0;i<lst2->fim;i++){
        lst3->no[lst3->fim]=lst2->no[i];
        lst3->fim++;
    }


    return lst3;
}
