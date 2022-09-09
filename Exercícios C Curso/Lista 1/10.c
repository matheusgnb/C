/* 
10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
• Homens: (72.7 * h) - 58
• Mulheres: (62.1 * h) - 14.7
*/

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {

  char sexo;
  float altura;
  float peso;

  printf("Digite SEXO: ");
  scanf("%c", &sexo);

  printf("Digite ALTURA: ");
  scanf("%f", &altura);

    if(sexo == 'm') {
        peso = ((72.7*altura) - 58);
    } else if (sexo == 'f'){
        peso = ((62.1*altura) - 44.7);   
    }
    printf("O Peso Ideal para %f e %f",altura,peso);
  return 0;
}
