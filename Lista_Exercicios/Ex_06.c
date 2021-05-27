/*6)  Um  motorista  acaba  de  retornar  de  um  feriado  prolongado.  Em  cada  parada  de  reabastecimento  ele registrou a leitura de seu odômetro, a quantidade de gasolina comprada (suponha que ele tenha enchido o tanque cada vez) e o preço pago. Além disso, suponha também que ele tenha enchido o tanque antes de partir e imediatamente após retornar. Escreva um programa em C para ler, em primeiro lugar, o número total de reabastecimentos feitos (incluindo o primeiro e o último) e, a seguir, os dados  relativos à compra de gasolina e calcular : 

a)  a quilometragem obtida por litro de gasolina entre cada par de paradas de reabastecimento; 
b)  a quilometragem obtida por litro de gasolina em toda a viagem 
c)  custo do combustível por quilometro rodado em toda a viagem*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

typedef struct Viagem{
    float Km, gasolina, preco, kmlitro;
    }Viagem;

int main(void){
    
    int quant, i, encheu = 0;
    float kmlitrototal, totallitros = 0, totalpreco = 0, totalkm, precokmtotal;
    printf("Quantidade de paradas: ");
    scanf("%d", &quant);
    Viagem V[quant];

    for(i = 0; i < quant; i++){
        
        printf("Quilometragem %d: ", i+1);
        scanf("%f", &V[i].Km);
        printf("Gasolina comprada %d: ", i+1);
        scanf("%f", &V[i].gasolina);
        printf("Preco %d: ", i+1);
        scanf("%f", &V[i].preco);
        
        V[i].kmlitro = 0.0;
        totalpreco = totalpreco + V[i].preco;
        
        if(i > 0){
            V[i].kmlitro = ((V[i].Km)-(V[i-1].Km))/V[i].gasolina;
            totallitros = totallitros + V[i].gasolina;
            
        }else{
            kmlitrototal = 0;
            precokmtotal = 0;
        }


        if(i+1 == quant && i != 0){
            totalkm = (V[i].Km) - (V[0].Km);
            kmlitrototal = totalkm/totallitros;
            precokmtotal = totalpreco/totalkm;
        }
    }

    for(i = 0; i < quant; i++){
        printf("\n\nQuilometragem %d: %.2f\n", i+1, V[i].Km);
        printf("Gasolina Comprada %d: %.2f\n", i+1, V[i].gasolina);
        printf("Preco pago %d: %.2f\n", i+1, V[i].preco);
        printf("Quilometragem por litro desde a ultima parada: %.2f", V[i].kmlitro);
    }

printf("\n\nQuilometragem total rodada por litro: %.2f\n", kmlitrototal);
printf("Custo total da gasolina por quilometros rodados: %.2f\n", precokmtotal);

return 0;
}