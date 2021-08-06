#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncadDupla.h"


int main(){
    Lista *li;  
  
    //cria lista
    li = cria_lista();


  //informações sobre a lista
    int x = tamanho_lista(li);
    int y = lista_cheia(li);
    if(lista_cheia(li)); 
    int z = lista_vazia(Lista* li);
    if(lista_vazia(li));


  //inserção 
    int inserir_inicio = insere_lista_inicio(li, dados_alunos);
    int inserir_final = insere_lista_final(li, dados_aluno);


  //remoção
  int remoção_inicio = remove_lista_inicio(li);
  int remoção_final = remove_lista_final(li);
  int remoção_qualquer =  remove_lista(li, matricula_aluno);


  //consulta 
  int consulta_lista_pos(li, posicao, &dados_aluno);

    //liberar lista
    libera_lista(li);
  return 0;
}