/* 2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz
quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o
número é inválido.*/ 

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    
    float numero;
    float raiz;

    printf("Digite um NUMERO: ");
    scanf("%f",&numero);

    if (numero > 0){
        raiz = sqrt(numero);
        printf("A Raiz de %.2f -> %.2f",numero,raiz);
    } else if (numero < 0){
        printf("Numero INVALIDO !");
    }
}



