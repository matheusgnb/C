/*

Foi realizada uma pesquisa de algumas características físicas de 20 habitantes de
uma certa região. De cada habitante foram coletados os seguintes dados:

sexo (1- f,2- m, 3- Outro),
cor dos olhos (1- azuis, 2- verdes ou 3- castanhos),
cor dos cabelos (1-louros, 2- pretos ou 3- castanhos) e
idade.

Faça um programa que leia esses dados em um vetor de registro. Além disso,
implemente uma função que receba o vetor de registro definido por parâmetro, e
retorna a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35
(inclusive) e que tenham olhos verdes e cabelos louros. A função deve ser chamada
após a leitura dos dados e o resultado deve ser exibido.

*/

#define n 3

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Dados De Cada Pessoa
    struct dadosIndividuais{
        int sexo;
        int cor_olhos;
        int cor_cabelos;
        int idade;
    };

    struct dadosAgrupados {
        struct dadosIndividuais pessoa[n];
    } dadosPessoas;
    

int main(){

    for (int i = 0; i < 3; i++){

        printf("%d PESSOA: ",(i+1));

        printf("\nDigite o SEXO ( 1 - F / 2 - M / 3 - Outro ): ");
        scanf("%d", &dadosPessoas.pessoa[i].sexo);
        printf("\nDigite a COR DOS OLHOS ( 1 - Azuis / 2 - Verdes / 3 - Castanhos ): ");
        scanf("%d", &dadosPessoas.pessoa[i].cor_olhos); 
        printf("\nDigite a COR DOS CABELOS ( 1 - Louros / 2 - Pretos / 3 - Castanhos ): ");
        scanf("%d", &dadosPessoas.pessoa[i].cor_cabelos);
        printf("\nDigite a IDADE: ");
        scanf("%d", &dadosPessoas.pessoa[i].idade);
    }

    for ( int j = 0; j < 3; j++){

        printf("\n----------------------------------------------------");
        printf("\nSexo: %d",dadosPessoas.pessoa[j].sexo);
        printf("\nCor dos Olhos -> %d",dadosPessoas.pessoa[j].cor_olhos);
        printf("\nCor dos Cabelo -> ",dadosPessoas.pessoa[j].cor_cabelos);
        printf("\nIdade -> %d",dadosPessoas.pessoa[j].cor_cabelos);
        printf("\n----------------------------------------------------");

    }
}

int Valida(){

    

}

