#include <stdio.h>
#include <stdlib.h>

// Cria struct com a informação e um no que apontando para a proxima struct
typedef struct no{
    int info;
    struct no *prox;
} no;

no *inicioL;

// Cria struct 
void inicializa_lista (){
    inicioL = NULL;
}

int lista_vazia(){
    if (inicioL == NULL){
        return 1;
    }
    return 0;
}

void inserir(int valor){

// a função malloc() retorna um ponteiro genérico, o qual é convertido no tipo de ponteiro via type cast: (no*);
// • o ponteiro aux passa a ser tratado como um array: aux[i].

    no *aux;
    aux = (no*) malloc(sizeof(no));
    if (aux!= NULL){
        aux -> info = valor; // aux aponta pra info que recebe o valor passado na função
        aux -> prox = inicioL;
        inicioL = aux;
    }
}