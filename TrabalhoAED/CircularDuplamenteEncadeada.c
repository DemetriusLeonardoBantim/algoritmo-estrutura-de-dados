#include <stdio.h>
#include <stdlib.h>
#include "CircularDuplamenteEncadeada.h"

struct elemento{
  struct elemento *ant;
  struct aluno dados;
  struct elemento *prox;
}

typedef struct elemento Elem;

//Criar lista
Lista* cria_lista(){
  Lista *li
  li = (Lista *)malloc(sizeof(Lista);
  if(li != NULL){
    *li = NULL;
  }
  return li;
}