/*11) Escrever  um  programa  em  C  que  leia  uma  cadeia  de  caracteres  e  imprima  todas  as  palavras  que contenham três ou mais vogais. */

#include<stdio.h>
#include<string.h>

int main ()
{
	char frase [80],palavra[20];
	int flag=1,fim=0,cont=0,i=0;
	
	printf("Digite a frase:");
	gets(frase);
	printf("As palavras que possuem tres ou mais vogais sao:\n\n");
	
	while (flag==1)
	{
		if(frase[fim]!=32)
		{
			palavra[i]=frase[fim];
			i++;
			if (frase[fim]==97 || frase[fim]==101 || frase[fim]==105 || frase[fim]==111 || frase[fim]==117)
			{
				cont++;
			}		
		}
		else if (frase[fim]==32 && cont>=3)
			{
				printf("A palavra %s tem tres ou mais vogais.\n",palavra);
				i=0;cont=0;
				while (palavra[i]!=0)
				{
					palavra[i]=0;
					i++;
				}
				i=0;	
			}
		else if (frase[fim]==32 && cont<3)	
		{
			i=0;cont=0;
			while (palavra[i]!=0)
			{
				palavra[i]=0;
				i++;
			}
			i=0;
		}
		else if (frase[fim]==0)
		{
			flag=0;
		}
		fim++;			
	}
	
	return(0); 	
}
