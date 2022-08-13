#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
	float celsius,fahrenheit;
	
	printf("Digite a Temperatura em Fahrenheit: ");
	scanf("%f",&fahrenheit);
	
	celsius = 5.0*(fahrenheit-32.0 )/9.0;
	
	printf("A Temperatura em Celsius é %.2f",celsius);
	
	return 0;

}


