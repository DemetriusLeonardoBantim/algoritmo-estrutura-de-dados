
struct aluno{
  int matricula;
  char nome[30];
  float n1,n2,n3;
}

typedef struct elemento* Lista;

Lista* cria_lista();

void libera_lista(Lista* li);



//informações
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);

//inserção
int insere_lista_inicio(Lista* li, struct aluno al);
int insere_lista_final(Lista* li, struct aluno al);
int insere_lista_ordenada(Lista* li, struct aluno al);


//Remoção
int remove_lista_inicio(Lista* li);
int remove_lista_final(Lista* li);
int remove_elemento_qualquer(Lista* li, int mat);


//consultas
int consulta_lista_pos(Lista* li, int pos, struct aluno *al);