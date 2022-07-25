/* 16) Faça  um  programa  em  C  que  atenda  às  regras  do  seguinte  jogo  de  dados.  Dois  jogadores  estão confrontando-se entre si, usando dois dados, numerados de 1 até 6 (dado RAND(5) + 1). Vence uma rodada  quem  obtiver  o  maior  número  no  lançamento.  Entretanto,  caso  um  jogador  obtiver  um lançamento com dois dados iguais (por exemplo, 1 e 1, 2 e 2,....) e o outro jogador não, o jogador quetiver lançado a dupla ganha. Caso os dois jogadores fizerem o lançamento e o resultado for de duas duplas para os dois jogadores, ganha o jogador com a dupla maior. A disputa é em 11 lançamentos. Indique o jogador vencedor ou se houve empate. */ 

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int dado1,dado2,dado3,dado4,lancamento,r;
	int soma_jogador1,soma_jogador2,ponto_jogador1=0,ponto_jogador2;
	
	for (lancamento=1;lancamento<=11;lancamento++)
	{
		printf("### Rodada numero %d ###\n\n",lancamento);
		/* JOGADOR 1*/
		r=rand();r%=6;
		dado1=(r % 5)+1;
		r=rand();r%=6;
		dado2=(r % 5)+1;
		soma_jogador1=dado1+dado2;
		printf("Jogador 1=> dado1=%d,dado2=%d\n",dado1,dado2);
		printf("Soma=%d\n\n",soma_jogador1);
		/* JOGADOR 2*/
		r=rand();r%=6;
		dado3=(r % 5)+1;
		r=rand();r%=6;
		dado4=(r % 5)+1;
		soma_jogador2=dado3+dado4;
		printf("Jogador 2=> dado1=%d,dado2=%d\n",dado3,dado4);
		printf("Soma=%d\n\n",soma_jogador2);
		
		if(dado1==dado2 && dado3==dado4)
		{
			if (soma_jogador1>soma_jogador2)
			{
				ponto_jogador1++;
				printf("Jogador 1 venceu a Rodada!");
			}
			else if (soma_jogador2>soma_jogador1)
			{
				ponto_jogador2++;
				printf("Jogador 2 venceu a Rodada!");
			}
		}
		else if(dado1==dado2 && dado3!=dado4)
		{
			ponto_jogador1++;
			printf("Jogador 1 venceu a Rodada!");
		}
		else if(dado1!=dado2 && dado3==dado4)
		{
			ponto_jogador2++;
			printf("Jogador 2 venceu a Rodada!");
		}
		else if (soma_jogador1>soma_jogador2)
		{
			ponto_jogador1++;
			printf("Jogador 1 venceu a Rodada!");
		}
		else if (soma_jogador2>soma_jogador1)
		{
			ponto_jogador2++;
			printf("Jogador 2 venceu a Rodada!");
		}
	}
	if (ponto_jogador1==ponto_jogador2)
	{
		printf("O jogo terminou empatado!\n");
		printf("Total de Pontos Jogador 1:%d\n",ponto_jogador1);
		printf("Total de Pontos Jogador 1:%d\n",ponto_jogador2);
	}
	else if(ponto_jogador1>ponto_jogador2)
	{
		printf("O jogador 1 venceu!\n");
		printf("Total de Pontos Jogador 1:%d\n",ponto_jogador1);
	}
	else
	{
		printf("O jogador 2 venceu!\n");
		printf("Total de Pontos Jogador 2:%d\n",ponto_jogador2);
	}
	
	return(0);
}