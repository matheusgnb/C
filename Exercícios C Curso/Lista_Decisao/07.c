/* 7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois
números forem iguais, imprima a mensagem Números iguais. */ 

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){

    float n1;
    float n2;

    printf("Digite o PRIMEIRO Numero: ");
    scanf("%f",&n1);

    printf("Digite o SEGUNDO Numero: ");
    scanf("%f",&n2);

    if (n1 > n2){
        printf("MAIOR NUMERO -> %.2f",n1);
        printf("\n");
    } else if (n2 > n1) {
        printf("MAIOR NUMERO -> %.2f",n2);
        printf("\n");
    } else if ( n1 == n2){
        printf("NUMEROS IGUAIS !");
    }
}