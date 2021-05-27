/* 3)  Um  inteiro  perfeito n  é  igual  a  soma  de  todos  os  seus  divisores  próprios.  A  faixa  de  seus  divisores próprios vai de 1 a (n-1). Por  exemplo : 6 é um inteiro perfeito; a soma de todos os seus divisores próprios ( 1 + 2 + 3) é igual a 6. Escreva um programa em C que determine se um número no intervalo de 1 a 32767 é um inteiro perfeito. */ 

#include<stdlib.h>
#include<stdio.h>
#include <math.h>

int main()
{
    int numero = 6;
    int resto = 0;
    int soma = 0;
    int i = 0;

    printf("Digite NUMERO: ");
    scanf("%d",&numero);
    
    for( i = 1; i < numero ; i++ )
    {
        if(numero % i == 0){
            soma = soma + i;
        }
    }

    if ( soma == numero ){
        printf("E PERFEITO !"); 
    } else {
        printf("NAO PERFEITO !");
    }
}


