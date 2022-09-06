/* 4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
    • O número digitado ao quadrado
    • A raiz quadrada do número digitado */

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    
    float numero;
    float raiz;
    float quadrado;

    printf("Digite um NUMERO: ");
    scanf("%f",&numero);

    if (numero > 0){
        
        raiz = sqrt(numero);
        quadrado = pow(numero,2);  

        printf("A Raiz de %.0f -> %.0f",numero,raiz);
        printf("\n");
        printf("O Numero %.0f Ao Quadrado -> %.0f",numero,quadrado);
    }
}