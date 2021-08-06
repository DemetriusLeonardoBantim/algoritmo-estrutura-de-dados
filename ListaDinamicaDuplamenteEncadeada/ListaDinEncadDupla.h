struct aluno{
  int matricula;
  char nome[30];
  float n1,n2,n3;
}

typedef struct elemento* Lista;


//criar lista
Lista* cria_lista();

//Liberar lista
void libera_lista(Lista* li);

//informações sobre a lista

int tamanho_lista(Lista* li);
int lista_cheia(LIsta* li); //Em 99.9999% dos casos a lista sempre estará com espaço
int lista_vazia(Lista* li);


//inserção de valores
int insere_lista_inicio(Lista* li, struct aluno al);
int insere_lista_final(Lista* li, struct aluno al);
int insere_lista_ordenada(Lista* li, struct aluno al);



// remoção de valores
int remove_lista_inicio(Lista* li);
int remove_lista_final(Lista* li);
int remove_lista(Lista* li, int mat);


// consulta 
int consulta_lista_pos(Lista* li, int pos, struct aluno * al);
int consulta_lista_mat(Lista* li, int mat, struct aluno *al);