/* 9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a
prestação for maior que 20% do salário imprima: 
    Empréstimo não concedido, 
caso contrário imprima: 
    Empréstimo concedido. */

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){

    float salario;
    float prestacao;
    float fracao_salario;

    printf("Digite o seu SALARIO: ");
    scanf("%f",&salario);

    printf("Digite o valor da PRESTACAO do Emprestimo: ");
    scanf("%f",&prestacao);

    fracao_salario = salario * 0.2;

    if (prestacao > fracao_salario){
        printf("\n\n\n");
        printf("Salario -> %.2f \n",salario);
        printf("Fracao Salario ->%.2f \n",fracao_salario);
        printf("Emprestimo NAO Concedido !");
    } else if (prestacao < fracao_salario){
        printf("\n\n\n");
        printf("Salario -> %.2f\n",salario);
        printf("Fracao Salario -> %.2f\n",fracao_salario);
        printf("Emprestimo Concedido !");
    }
}