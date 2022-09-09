#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){

    int n; // Variável que guarda seu valor na memória

    // declarando o ponteiro
    int* p; // Ponteiro é um valor que aponta para um endereço de memória

    printf("Informe um Numero: ");
    scanf("%d",&n);

    //inicializando o ponteiro
    p = &n;

    printf("O Numero informado foi %d\n",n);
    printf("Endereco de Memoria %d\n",&n); // Printa em Numérico
    printf("Endereco do ponteiro %p\n",p); // Printa em Exadecimal

    return 0;
}