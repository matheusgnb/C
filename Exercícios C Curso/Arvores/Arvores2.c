#include <stdio.h>
#include <stdlib.h>

// Primeiro Declarar o Struct

typedef struct no{ // no é o Tipo de Dado
    int info; // Contem a Informação, que no Caso é um Número Inteiro
    struct no *esquerda;
    struct no *direita; 
}Node; // O Nome da Struct é Node / Apelido para Struct / Nome da Variável que está dentro do no

Node *raiz; // Ponteiro de Nome "raiz" do tipo "Node" 

Node *inicializaArv(){
    return NULL;
}

Node *CriaNo(int valor){
    
    // Criando Variavel "aux" que vai alocar um espaço em memória do tamanho da Struct "Node"
    // Vai Retornar o Endereço dessa Variável
    Node *aux = (Node*)malloc(sizeof(Node));
    // printf("Endereco de Memoria de 'AUX' => %d",*aux); Teste para ver o endereço alocado

    if (aux != NULL){
        aux -> info = valor;
        aux -> esquerda = NULL;
        aux -> direita = NULL;
    }
    return aux;
}

int main(){
    raiz = inicializaArv(); // Ou Node *raiz = inicializaArv()
    CriaNo(10);

}












