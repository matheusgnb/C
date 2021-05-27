/* 2) Escreva um programa em C que verifique se um determinado inteiro positivo que é lido via teclado, é ou não primo.*/

#include<stdlib.h>
#include<stdio.h>
#include <math.h>
 
int main() {

    int num, i, resultado = 0;
 
    printf("DIGITE NUMERO : ");
    scanf("%d", &num);
 
    for (i = 2; i <= num / 2; i++) {
        
        if (num % i == 0) {
            resultado++;
            break;
        }
    }

    if (resultado == 0){
        printf("%d => PRIMO\n", num);
    } else {
        printf("%d => NAO PRIMO\n", num);
    }

return 0;
} 

