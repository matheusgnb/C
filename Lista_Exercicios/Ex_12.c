/*12)Escrever um programa em C que leia um valor inteiro (limite na casa do milhar), e o imprima em forma de caracteres, ou seja, por extenso.  Ex. : 98 = noventa e oito. */

#include<stdio.h>

int main()
{
   int numero,milhar,centena,dezena,unidade;

   printf("### PROGRAMA NUMERO POR EXTENSO ###\n\n");
   printf("Digite um numero:");
   scanf("%d", &numero);

   milhar=numero/1000;
   numero=numero%1000;
   centena=numero/100;
   numero=numero%100;
   dezena=numero/10;
   unidade=numero%10;
   
   switch(milhar)
   {
    	case 1: printf("Um mil"); break;
        case 2: printf("Dois mil"); break;
        case 3: printf("Tres mil"); break;
        case 4: printf("Quatro mil"); break;
        case 5: printf("Cinco mil"); break;
        case 6: printf("Seis mil"); break;
        case 7: printf("Sete mil"); break;
        case 8: printf("Oito mil"); break;
        case 9: printf("Nove mil"); break;
    }
    if ((centena>0 || dezena>0 || unidade>0) && (milhar>0))
   	{
   		printf(" e ");
   	}
   	else if ((centena>0) && (dezena==0 && unidade==0))
   	{
   		printf(" ");
	}
                 
   switch(centena)
   {
    	case 1: 
    		if (dezena==0 && unidade==0)
    		{
    			printf("Cem"); 	
    			break;
			}
			else
			{
				printf("Cento"); 
				break;	
			}	
        case 2: printf("Duzentos"); break;
        case 3: printf("Trezentos"); break;
        case 4: printf("Quatrocentos"); break;
        case 5: printf("Quinhentos"); break;
        case 6: printf("Seiscentos"); break;
        case 7: printf("Setecentos"); break;
        case 8: printf("Oitocentos"); break;
        case 9: printf("Novecentos"); break;
    }
    if ((dezena>0 || unidade>0) && (centena>0))
   	{
   		printf(" e ");
   	}
  
   switch(dezena)
   {
   		case 1: 
   		    if(unidade==0)
   		    {
   		    	printf("Dez"); break;	
			}
		    else if (unidade==1)
		    {
		    	printf("Onze"); break;	
			}	
		    else if (unidade==2)
		    {
		    	printf("Doze"); break;	
			}
		    else if (unidade==3)
		    {
		    	printf("Treze"); break;
			}	
		    else if (unidade==4)
		    {
		    	printf("Quatorze"); break;
			}    	
		    else if (unidade==5)
		    {
		    	printf("Quinze"); break;
			}	
		    else if (unidade==6)
		    {
		    	printf("Dezesseis"); break;
			}
		    else if (unidade==7)
		    {
		    	printf("Dezessete"); break;
			}	
		    else if (unidade==8)
		    {
		    	printf("Deezoito"); break;
			}	
		    else if (unidade==9)
		    {
		    	printf("Dezenove"); break;
			}
		    	
        case 2: printf("Vinte"); break;
        case 3: printf("Trinta"); break;
        case 4: printf("Quarenta"); break;
        case 5: printf("Cinquenta"); break;
        case 6: printf("Sessenta"); break;
        case 7: printf("Setenta"); break;
        case 8: printf("Oitenta"); break;
        case 9: printf("Noventa"); break;
    }
    if ((unidade>0) && (dezena!=1))
   	{
   		printf(" e ");
   	}
   
   switch(unidade)
   {
        case 0: break;
        case 1: 
        	if (dezena!=1)
				printf("um"); break;
        case 2: 
        	if (dezena!=1)
				printf("dois"); break;
        case 3: 
        	if (dezena!=1)
				printf("tres"); break;
        case 4: 
        	if (dezena!=1)
				printf("quatro"); break;
        case 5: 
        	if (dezena!=1)
				printf("cinco"); break;
        case 6: 
        	if (dezena!=1)
				printf("seis"); break;
        case 7: 
			if (dezena!=1)
				printf("sete"); break;
        case 8: 
			if (dezena!=1)
				printf("oito"); break;
        case 9: 
			if (dezena!=1)
				printf("nove"); break;
    }
	
return(0);		 
 }