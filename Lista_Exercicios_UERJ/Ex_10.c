/*10)Escrever um programa em C que calcule a frequência de uso de cada palavra dentro de uma cadeia de caracteres  que  possui  diversas  palavras.  Considerar  o  tamanho  máximo  da  cadeia  como  sendo  de  80 colunas.*/

#include <stdio.h>
#include <string.h>

int main (){
	
	char frase[80];
	char palavra[20]; 
	
	int decisao = 1;
	int inicio = 0;
	int fim = 0;
	int start = 0;
	int ocorrencia = 0;
	int flag = 1;
	int contador = 0;
	
	printf("Digite Frase:");
	gets(frase);
	printf("Digite a palavra a ser Buscada:");
	gets(palavra);


	while (flag == 1){
			
			if (palavra[start] == frase[fim] && frase[fim] != 0){ // se a primeira letra da palavra for igual primeira letra da frase e a palavra não acabar
					
					contador++; 
					start++; // proxima letra
				
			} 
			
			else if (frase[fim] == 32 || frase[fim] == 0 || palavra[start] == 0){
					
				if (strlen(palavra) == contador && (frase[fim] == 0 || frase[fim] == 32)){
						
					ocorrencia++;
					start = 0;
					contador = 0;
				}
					
				if (frase[fim] == 0){
						flag = 0;		
				
				} 
				
				else if (frase[fim] == 0){
					
					flag = 0;
				
				} 
				
				else{
					
					start = 0;
					contador = 0;
				}	
			}
				
			fim++;
		}
		
	printf(" '%s' se repete %d veze(s)na Frase\n",palavra,ocorrencia);
		
	return(0);
}
