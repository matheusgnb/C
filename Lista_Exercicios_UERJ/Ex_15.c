/*15) O Departamento de trânsito do estado anotou dados de acidentes de trânsito no último ano. Para cada motorista envolvido no acidente, tem-se as seguintes informações: - Ano de nascimento; - Sexo (M - Masculino, F - Feminino) - Procedência ( 0 - Capital, 1 - Interior, 2 - Outro estado); Faça um programa em C que : a) Calcule a porcentagem de motoristas com menos de 21 anos; b) Calcule quantas mulheres são da capital; c) Calcule quantos motoristas do interior do estado tem idade maior que 60 anos; d) Verifique se existe alguma mulher com idade maior que 60 anos; */ 

#include <stdlib.h>
#include <stdio.h>

int main()
{
	struct motorista
	{
		int ano_nascimento;
		char sexo[2];
		int procedencia;
	};
	struct motorista dados[10];
	int i,contador_21,porcentagem,contador_mulhercap=0,contador_motorista60=0,contador_mulher60=0;
	
	printf("### PROGRAMA DADOS DEPARTAMENTO DE TRANSITO ###\n\n");
	
	for (i=0;i<=9;i++)
	{
		printf("\nDados do motorista %d:\n\n",i+1);
		printf("Digite o ano de nascimento do motorista:");
		scanf("%d",&dados[i].ano_nascimento);
		printf("Digite o sexo do motorista(Digite m para masculino/f para feminino):");
		scanf("%s",dados[i].sexo);
		while (dados[i].sexo[0]!='m' && dados[i].sexo[0]!='M' && dados[i].sexo[0]!='f' && dados[i].sexo[0]!='F')
		{
			printf("Este campo deve ser preenchido com 'm' ou 'f', de acordo com a instrucao acima!\n");
			scanf("%s",dados[i].sexo);
		}
		printf("Digite a procedencia do motorista( 0 - Capital, 1 - Interior, 2 - Outro estado):");
		scanf("%d",&dados[i].procedencia);
		while (dados[i].procedencia!=0 && dados[i].procedencia!=1 && dados[i].procedencia!=2)
		{
			printf("Este campo deve ser preenchido com '0','1' ou '2', de acordo com a instrucao acima!");
			scanf("%d",&dados[i].procedencia);
		}	
	}
	for (i=0;i<=9;i++)
	{
		if(2019-dados[i].ano_nascimento<21)
		{
			contador_21++;
		}			
	}
	porcentagem=(100*contador_21)/10;
	printf("\nA porcentagem de motoristas com idade abaixo de 21 anos e' igual a:%d\n",porcentagem);
	
	for (i=0;i<=9;i++)
	{
		if((dados[i].sexo[0]=='f' || dados[i].sexo[0]=='F') && (dados[i].procedencia==0))
		{
			contador_mulhercap++;
		}			
	}
	printf("A quantidade de mulheres provenientes da capital e' igual a:%d\n",contador_mulhercap);
	
	for (i=0;i<=9;i++)
	{
		if((dados[i].procedencia==1) && (2019-dados[i].ano_nascimento>60))
		{
			contador_motorista60++;
		}			
	}
	printf("A quantidade de motoristas provenientes do interior com mais que 60 anos e' igual a:%d \n",contador_motorista60);

	for (i=0;i<=9;i++)
	{
		if((dados[i].sexo[0]=='f' || dados[i].sexo[0]=='F') && (2019-dados[i].ano_nascimento>60))
		{
			contador_mulher60++;
		}			
	}
	printf("Existem %d mulhere(s) com idade maior que 60 anos.\n",contador_mulher60);	
	

	return(0);

}