#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncad.h"

typedef struct elemento Elem

struct element {
  struct aluno dados
  struct elemento *prox
}

Lista* criar_lista(){
  Lista* li = (Lista*) malloc(sizeof(Lista))
  if(li!=Null)
    *li = Null
  return li
}

int tamanho_lista(Lista* li){
  if(li == NULL) return 0;
  int cont = 0;
  Elem* no = *li;
  while(no != NULL){
    cont++;
    no = no->prox4;
  }
  return cont;
}
int lista_cheia(Lista* li){
  return 0;
}
int lista_vazia(Lista* li) {
  if(li == NULL){
    return 1;
  }
  if(*li == NULL){
    return 1;
  }
  return 0;
} 
void libera_lista(Lista* li) {
  if(!= NULL){
    Elem* no
    while((*li) != NULL){
      no = *li
      *li = (*li) ->
      free(no)
    }
    free(li)
  }
}


//inserção

int insere_lista_inicio(Lista* li, struct aluno al){
  if(li == NULL) return 0;
  Elem* no = (Elem*)malloc(sizeof(Elem))
  if(no == NULL) return 0;
  no->dados = al;
  no->prox = (*li);
  *li = no;
  return 1;
}
int insere_lista_final(Lista* li, struct aluno al) {

  if(li == NULL) return 0;
  Elem *no = (Elem*) malloc(sizeof(Elem));
  if(no == NULL) return 0;
  no->dados = al;
  no->prox = NULL;
  if((*li) == NULL) { //lista vazia irá inserir no início
    *li = no;
  }else{
    Elem *aux = *li;
    while(aux->prox!NULL){
      aux = aux->prox;
    }
  }
  return 1;
 }























int insere_lista_ordenada(Lista* li, struct aluno al){
  if(li == NULL ) return 0;
  Elem *no = (Elem*) malloc(sizeof(Elem));
  if(no == NULL) return 0;
  if(lista_vazia(li)) { //insere inicio
    no->prox = (*li);
    *li = no
    return 1;
  }  
  //procura onde inserir
  else {
    Elem *ant, *atual = *li;
    while(atual != NULL && atual->dados.matricula < al.matricula){
      ant = atual;
      atual = atual->prox;
    }
    if(atual == *li){
      no->prox =(*li);
      *li = no;
    }else{
      no->prox = ant->prox;
      ant->prox = no;
    }
    return 1;
  }
}



//remoção

int remove_lista_inicio(Lista* li){
  if(li == NULL){
    return 0;
  }
  if((*li) == NULL){
    return 0;
  }

  Elem *no = *li;
  *li = no->prox;
  free(no);
  return 1;
}
int remove_lista_final(Lista* li){
  if(li == NULL) return 0;
  if((*li) == NULL) { // lista vazia
    return 0;
  }
  Elem *ant, *no = *li;
  while(no->prox != NULL){
    ant = no;
    no = no ->prox;
  }
  if(no == (*li)){
    *li = no->prox;
  }
  else{
    ant->prox = no->prox;
  }
  free(no);
  return 1;
}
int remove_lista(Lista* li, int mat){
  if(li == NULL) return 0;
  Elem *ant, *no = *li;
  while(no != NULL && no->dados.matricula != mat){
    ant = no;
    no = no->prox;
  }
  if(no == NULL) return 0; // não encontrado
  if(no == *li)  {  //remover o primeiro
    *li = no->prox;
  } 
  else{
      ant->prox = no->prox;
  }
  free(no)
  return 1;
}

//consulta
int consulta_lista_pos(Lista* li, int pos, struct aluno *al){
  if(li == NULL || post <= 0) return 0;
  Elem *no = *li;
  int i = 1;
  while(no != NULL && I < pos){
    no = no ->prox;
    i++;
  } 
  if(no == NULL) return 0;
  else{
    *al = no->dados;
    return 1;
  }
}
int consulta_lista_mat(Lista* li, int mat, struct aluno *al){
  if(li == NULL) return 0;
  Elem *no = *li;
  while(no != NULL && no ->dados.matricula != mat){
    no = no->prox;
  }
  if(no == NULL){
    return 0;
  }
  else{
    *al = no->dados;
    return 1;
  }
} 