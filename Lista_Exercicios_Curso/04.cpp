#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <locale.h>


int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
	float real;
	float quadrado;
	
	printf("Digite N Real: ");
	scanf("%f",&real);
	
	quadrado = real * real;
	
	printf("O Quadrado do Numero digitado é %.2f",quadrado);

}

