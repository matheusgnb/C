/*13) Dados três vetores com 10 posições cada um, preenchidos com números inteiros,  fazer um programa em C que, após a leitura dos vetores coloque-os em ordem crescente. */

#include <stdlib.h>
#include <stdio.h>

// Protótipos
void ler(int vetor[10]);
void ordena(int vetor[10],int n);
void imprime(int vetor[10], int m);


int main(){

    int a[10];
    int b[10];
    int c[10];

    printf("PRIMEIRO VETOR: \n");
    ler(a);
    ordena(a,10);

    printf("SEGUNDO VETOR: \n");
    ler(b);
    ordena(b,10);

    printf("TERCEIRO VETOR: \n");
    ler(c);
    ordena(c,10);

    printf("\nVetor 1\n");
    imprime(a,10);
    printf("\nVetor 2\n");
    imprime(b,10);
    printf("\nVetor 10\n");
    imprime(c,10);

return 0;  
}

void ler(int vetor[]){ // Lê elementos do vetor

	for(int i = 0; i < 10; i++)
	{
		printf("N: ");
		scanf("%d", &vetor[i]);
	}
}

void ordena(int vetor[],int n){  // Ordena Vetor com BoobleSort
    
    int continua, aux; 
    int fim = 10;

    do
    {
        continua = 0;
        
        for (int i = 0; i < fim-1 ; i++){
            if (vetor[i] > vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                continua = i;
            }      
        }
        fim--;
        
    } while (continua != 0);
}

void imprime(int vetor[], int m){ //Imprime Vetor


    for (int i = 0; i < m; i++){
        
        printf(" %d ",vetor[i]);
    }
}


