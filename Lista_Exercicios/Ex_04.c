/*4) Escreva um programa em C que calcule o fatorial de um número inteiro positivo.*/

#include<stdlib.h>
#include<stdio.h>
#include <math.h>

int main() {
  int n,contador,fatorial; 
  
  printf("\nDigite N: ");
  scanf("%d", &n);
  
  fatorial = 1;
  contador = 2;
  
  while (contador <= n) {
    fatorial = fatorial * contador;
    contador = contador + 1;
  }
  printf("Fatorial de %d!: %d\n", n, fatorial);
  
}