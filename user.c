#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){

    Lista lista1,lst1,lst2,lst3;
    lista1=cria_lista();
    lst1=cria_lista();
    lst2=cria_lista();
    lst3=cria_lista();

    tamanho(lista1);
    imprime_lista(lista1);

    insere_elem(lista1,4);
    insere_elem(lista1,0);
    insere_elem(lista1,2);
    insere_elem(lista1,10);
    insere_elem(lista1,21);
    insere_elem(lista1,7);
    insere_elem(lista1,3);

    tamanho(lista1);
    imprime_lista(lista1);

    remove_elem(lista1,2);

    tamanho(lista1);
    imprime_lista(lista1);

    insere_inicio(lista1,15);

    tamanho(lista1);
    imprime_lista(lista1);

    remove_elem(lista1,21);

    tamanho(lista1);
    imprime_lista(lista1);

    insere_inicio(lista1,16);

    tamanho(lista1);
    imprime_lista(lista1);

    remove_elem(lista1,15);

    tamanho(lista1);
    imprime_lista(lista1);

    menor_elem(lista1);

    tamanho(lista1);
    imprime_lista(lista1);

    insere_elem(lista1,7);
    insere_elem(lista1,7);

    tamanho(lista1);
    imprime_lista(lista1);

    tamanho(lista1);
    imprime_lista(lista1);

    insere_inicio(lista1,7);

    tamanho(lista1);
    imprime_lista(lista1);

    remove_todos(lista1,7);

    tamanho(lista1);
    imprime_lista(lista1);

    printf("\n");

    insere_elem(lst1,4);
    insere_elem(lst1,12);
    insere_elem(lst1,0);
    insere_elem(lst1,4);
    insere_elem(lst1,0);
    insere_elem(lst1,4);

    imprime_lista(lst1);

    insere_elem(lst2,11);
    insere_elem(lst2,18);
    insere_elem(lst2,25);

    imprime_lista(lst2);

    lst3=concatenar(lst1,lst2);

    imprime_lista(lst3);

    remove_todos(lst1,4);
    menor_elem(lst1);
    imprime_lista(lst1);

    free(lista1);
    free(lst1);
    free(lst2);
    free(lst3);


    Lista l=cria_lista();
    printf("\n\n\n\n");
    insere_inicio(l,10);

    imprime_lista(l);
    insere_elem(l,0);

    imprime_lista(l);
    insere_inicio(l,0);

    imprime_lista(l);

    insere_inicio(l,10);
    imprime_lista(l);
    free(l);

    printf("\n\n\n\n\n");

    Lista l1=cria_lista();
    Lista l2=cria_lista();

    insere_elem(l1,6);
    insere_elem(l1,6);
    insere_elem(l1,6);
    insere_elem(l1,6);
    insere_elem(l1,6);
    insere_elem(l1,6);
    insere_elem(l2,6);
    insere_elem(l2,6);
    insere_elem(l2,6);
    insere_elem(l2,6);
    insere_elem(l2,6);


    concatenar(l1,l2);


    return 0;
}
