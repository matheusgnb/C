#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


int main(){

    int n;
    int i;
    int soma = 0;

    for (i = 1; i <= 3; i++){

        printf("Digite o %d Numero: ",i);
        scanf("%d",&n);

        soma += n;
    }

    printf("SOMA -> %d",soma);
    

}

