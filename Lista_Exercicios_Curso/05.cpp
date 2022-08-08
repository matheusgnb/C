#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <locale.h>


int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
	float real;
	float quinta_parte;
	
	printf("Digite N Real: ");
	scanf("%f",&real);
	
	quinta_parte = real/5;
	
	printf("A quinta parte do Numero digitado é %.2f",quinta_parte);

}

