/* 5. Faça um programa que receba um número inteiro e verifique se este numero é par ou
impar.*/

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){

    int numero;

    printf("Digite um NUMERO: ");
    scanf("%d",&numero);

    if (numero % 2 == 0){
        printf("PAR !");
    } else {
        printf("IMPAR !");
    }
}