/* 8)Para um vetor A de 50

 números inteiros, escrever um programa em C que determine o maior e o segundo maior elemento desse vetor. Assumir que todos os elementos são distintos. */ 

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

// Declaração De Funções
void ler(int A[50]);
void ordena(int A[50],int n);
void imprime(int A[50], int m);

int main(){

    int A[50];
    
    ler(A);
    ordena(A,50);
    imprime(A,50);
    

return 0;  
}

void ler(int A[50]){ // Lê elementos do vetor

	int i;
	for(i = 0; i<50; i++)
	{
		printf("N: ");
		scanf("%d", &A[i]);
	}
}

void ordena(int A[50],int n){  // Ordena Vetor com BoobleSort
    
    int continua, aux; 
    int fim = 50;

    do
    {
        continua = 0;
        
        for (int i = 0; i < fim-1 ; i++){
            if (A[i] > A[i+1]){
                aux = A[i];
                A[i] = A[i+1];
                A[i+1] = aux;
                continua = i;
            }      
        }
        fim--;
        
    } while (continua != 0);
}

void imprime(int A[50], int m){ //Imprime Vetor


    for (int i = 0; i < m; i++){
        
        printf("%d ",A[i]);
    }

    printf("\nMaior => %d\n",A[49]);
    printf("Segundo Maior => %d\n",A[48]);

}







