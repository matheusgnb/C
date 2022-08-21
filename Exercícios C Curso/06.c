/* 6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles,
assim como a diferença existente entre ambos.*/

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){

    float n1;
    float n2;
    float dif;

    printf("Digite o PRIMEIRO Numero: ");
    scanf("%f",&n1);

    printf("Digite o SEGUNDO Numero: ");
    scanf("%f",&n2);

    if (n1 > n2){
        printf("MAIOR NUMERO -> %.2f",n1);
        printf("\n");
        dif = n1 - n2;
        printf("DIFERENCA -> %.2f",dif);
    } else if (n2 > n1) {
        printf("MAIOR NUMERO -> %.2f",n2);
        printf("\n");
        dif = n2 - n1;
        printf("DIFERENCA -> %.2f",dif);
    }
}