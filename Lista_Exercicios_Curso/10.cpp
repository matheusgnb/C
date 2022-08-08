#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
	float celsius,kelvin;
	
	printf("Digite a Temperatura em Kelvin: ");
	scanf("%f",&celsius);
	
	kelvin = celsius + 273.15;
	
	printf("A Temperatura em Kelvin é %.2f",kelvin);
	
	return 0;

}
