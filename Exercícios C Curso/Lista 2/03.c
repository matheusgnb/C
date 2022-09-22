/* 3. Leia um numero real. Se o número for positivo imprima a raiz quadrada. Do contrário,
imprima o numero ao quadrado. */ 

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
        printf("A Raiz de %.0f -> %.0f",numero,raiz);
    } else if (numero < 0){
        quadrado = pow(numero,2);
        printf("O Numero %.0f Ao Quadrado -> %.0f",numero,quadrado);
    }
}