#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void incrementa(int* contador){ 
    // * Vai receber o endereço de memória que aponta para uma valor do tipo inteiro
    // Assume o nome de "Valor" Dentro da Função, mas é qualquer coisa que é passada
    printf("Antes de Incrementar\n"); 
    printf("O Contador Vale %d\n",(*contador));
    printf("O Endereco de Memoria 3 -> %d\n",contador);

    printf("Depois de Incrementar. \n");
    (*contador)++;
    printf("O Contador Vale %d\n",(*contador));
    printf("O Endereco de Memoria 4 -> %d\n",contador);
}
  
int main(){

    // Quando declaramos uma variável a linguagem aloca um espaço em memória pra colocar esse valor
    int contador = 10;
    printf("Antes de Incrementar\n");
    printf("O Contador Vale %d\n",contador);
    printf("O Endereco de Memoria 1 -> %d\n",&contador);

    // Passagem por valor
    incrementa(&contador);

    printf("Depois de Incrementar. \n");
    printf("O Contador Vale %d\n",contador);
    printf("O Endereco de Memoria 2 -> %d\n",&contador);

    return 0;

}