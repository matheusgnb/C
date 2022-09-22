/* 8. Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o programa termina.*/ 

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define QTD_Alunos 2;

int main(){

    float n1;
    float n2;
    float media;

    printf("Digite N1: ");
    scanf("%f",&n1);

    printf("Digite N2: ");
    scanf("%f",&n2);

    media = ( n1 + n2 ) / QTD_Alunos;
 
    if (n1 < 0 || n1 > 10){
        printf("Nota %.2f INVALIDA",n1);
    } else if (n2 < 0 || n2 > 10){
        printf("Nota %.2f INVALIDA",n2);
    } else if (n1 > 0 || n1 < 10 && n2 > 0 || n2 < 10 ){
        printf("Media das Notas %.2f e %.2f -> %.2f",n1,n2,media);
    }
}



