/* Peça ao usuário pra digitar três valores inteiros a imprima a soma deles */

#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int main(){

    int inteiro_01,inteiro_02,inteiro_03;
    int soma;
    
    printf("Digite o Primeiro Número Inteiro: ");
    scanf("%d",&inteiro_01);

    printf("Digite o Segundo Número Inteiro: ");
    scanf("%d",&inteiro_02);

    printf("Digite o Terceiro Número Inteiro: ");
    scanf("%d",&inteiro_03);

    soma = (inteiro_01 + inteiro_02 + inteiro_03);

    printf("A Soma de %d + %d + %d é -> %d\n",inteiro_01,inteiro_02,inteiro_03,soma);

return 0;   

}