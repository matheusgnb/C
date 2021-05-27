/*9)  Escrever um programa em C que calcule e imprima o número de caracteres distintos presentes em uma cadeia de caracteres dada. Considerar o tamanho máximo da cadeia como sendo de 80 colunas. */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
 
int main(){
 
    int soma = 0;
 
    char str[80+1]; //Toda String termina com \0
    setbuf(stdin, NULL);
    gets(str);
 
    printf("\nPalavra Digitada => %s\n",str);
    printf("Tamanho Palavra => %d Letras\n",strlen(str)); //strlen() número de caracteres que existem antes do ‘\0’(ENTER)
 
    for (int i = 0; i < strlen(str); i++){
        bool aparece = false; 
        for (int j = 0; j < i; j++) {
            if (str[j] == str[i]) {
                aparece = true;
                break;
            }
        }
 
        if (!aparece) {
            soma++;
        }
    }
 
    printf("Quantidade de Caracteres diferentes => %d\n",soma);
 
return 0;  
}