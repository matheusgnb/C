/* leia um número real e imprima o resultado do quadrado deste número */ 

#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int main(){

    float numero_real;
    float quadrado;

    printf("Digite um Número REAL: ");
    scanf("%f",&numero_real);

    quadrado = (numero_real * numero_real);

    printf("%.2f ao Quadrado é igual a -> %.2f\n",numero_real,quadrado);

return 0;   

}