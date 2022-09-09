#include <stdio.h>
#include <stdlib.h>
#define max 5

typedef struct{
    char nome[40];
    float salario;
} Dados;

int main(){

    Dados *p;
    p = (Dados *)malloc(max * sizeof(Dados));

    if (p != NULL){

        int i;

        for (i = 0; i < max; i++){
            fflush(stdin);
            printf("\nEntre com o nome: ");
            fgets(p[i].nome, 40, stdin);
            printf("Entre com o salario: ");
            scanf("%f", &p[i].salario);
        }

        free(p);
    } else {
        printf("\nErro de memória!\n");
    }
}