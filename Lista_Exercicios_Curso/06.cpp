#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <locale.h>


int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
	float celsius;
	float fahrenheit;
	
	printf("Digite a Temperatura em Celsius: ");
	scanf("%f",&celsius);
	
	fahrenheit = celsius * (9.0/5.0) + 32.0 ;
	
	printf("A Temperatura em Fahrenheit é %.2f",fahrenheit);

}

