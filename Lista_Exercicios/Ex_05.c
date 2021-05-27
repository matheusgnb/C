/* 5) O troco em moedas é uma combinação de moedas com os seguintes valores :
R$ 1,00 ; 0,50; 0,25; 0,10; 0,05; 0,01
Escreva um programa em C que leia qualquer valor em centavos (R$0,01 até R$1,00). Calcule e imprima
seu equivalente em moedas. Encontre a solução que utilize o menor número possível de moedas. */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float n,tr;
int m1,m50,m25,m10,m5,m01;

void moeda(float n,float tr,int m1,int m50,int m25,int m10,int m5,int m01){
	n=n*100;
    m1=n/100;
    tr=n-m1*100;
    m50=tr/50;
    tr=tr-m50*50;
    m25=tr/25;
    tr=tr-m25*25;
    m10=tr/10;
    tr=tr-m10*10;
    m5=tr/5;
    tr=tr-m5*5;
    m01=tr/1;

    printf("%i moeda(s) de 1, %i moeda(s) de 50, %i moeda(s) de 25, %i moeda(s) de 10, %i moeda(s) de 5, %i moeda(s) de 0,01",m1,m50,m25,m10,m5,m01);
}

int main(){
    printf("Digite um valor: ");
    scanf("\n%f",&n);
    moeda(n,tr,m1,m50,m25,m10,m5,m01);
    return 0;
}

