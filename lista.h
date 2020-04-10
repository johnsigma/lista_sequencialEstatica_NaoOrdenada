typedef struct lista *Lista;
Lista cria_lista();
int lista_vazia(Lista lst);
int lista_cheia(Lista lst);
int insere_elem(Lista lst, int elem);
int remove_elem(Lista lst, int elem);
Lista imprime_lista(Lista lst);
int menor_elem(Lista lst);
int tamanho(Lista lst);
int insere_inicio(Lista lst, int elem);
int remove_todos(Lista lst, int elem);
Lista concatenar(Lista lst1, Lista lst2);
