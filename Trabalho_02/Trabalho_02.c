#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Pedidos
{
	int codigo, quantidade;
	struct Pedidos *proximo;
}Pedidos;

typedef struct Mesa
{
	int numero, garcom;
	float total;
	Pedidos *pedidos;
	struct Mesa *anterior, *proximo;
}Mesa;

typedef struct Garcom
{
	char nome[20];
	int codigo;
	struct Garcom *anterior, *proximo;
}Garcom;

typedef struct Produtos
{
	char produto[50];
	float preco;
	int codigo;
	struct Produtos *anterior, *proximo;
}Produtos;

void inserirprodutos(Produtos *inicio, int *tam)
{
	int Codigo, nachou = 1;
	Produtos *p = inicio->ant;
	printf("Codigo: ");
	scanf("%d", &Codigo);
	setbuf(stdin,NULL);
	while(p != NULL)
		{
			if(p->codigo == Codigo)
					nachou = 0;
			p = p->ant;
		}
	if(nachou)
	{
		printf("Produto: ");
		gets(inicio->produto);
		setbuf(stdin,NULL);
		inicio->codigo = Codigo;
		printf("Preco: ");
		scanf("%f", &inicio->preco);
		setbuf(stdin,NULL);
		*tam++;
		printf("\nProduto registrado!\n");
	}
	else
			printf("\nProduto ja foi registrado.\n");
}

void inserirgarcons(Garcom *inicio, int *tam)
{
	int Codigo, nachou = 1;
	Garcom *p = inicio->ant;
	printf("Codigo: ");
	scanf("%d", &Codigo);
	setbuf(stdin,NULL);
	while(p != NULL)
		{
			if(p->codigo == Codigo)
					nachou = 0;
			p = p->ant;
		}
	
	if(nachou)
	{
		printf("Nome: ");
		gets(inicio->nome);
		setbuf(stdin,NULL);
		inicio->codigo = Codigo;
		*tam++;
		printf("\nGarcom registrado!\n");
	}
	else
		printf("\nGarcom ja foi registrado.\n");

}

int verificarI(Mesa *m, int mesa)
{
	while(m != NULL)
	{
		if(m->numero == mesa)
			return 0;
		m = m->prox;
	}
	return 1;
}

int verificarA(Mesa *m, int mesa)
{
	while(m != NULL)
	{
		if(m->numero == mesa)
			return 0;
		m = m->prox;
	}
	return 1;
}

void consultar_01(Mesa *m, Garcom *g, Produtos *pr)
{
	printf("\n\n-----NOTA FISCAL-----\n");
	printf("\nMESA %d:\n", m->numero);
	consultar_02(m->pedidos, pr);
	while(g->codigo != m->garcom)
		g = g->prox;
	printf("Total: R$ %.2f\n", m->total);
	printf("Nome do garcom: %s\n\n", g->nome);
}

void consultar_02(Pedidos *p, Produtos *pr)
{
	while(p != NULL && p->codigo != -1)
	{
		while(pr->codigo != p->codigo)
			pr = pr->prox;
		printf("%s ---------------------------------- R$ %.2f x %d\n", pr->produto, pr->preco, p->quantidade);
		while(pr->ant != NULL)
			pr = pr->ant;
		p = p->prox;
	}
}

int salvar_01(FILE *arq, Produtos *p)
{
	arq = fopen("Produtos.txt", "a");
	if(arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	fprintf(arq,"----------PRODUTOS----------\n\n");
	fprintf(arq,"CÓDIGO          PRODUTO          PREÇO\n");
	while(p != NULL)
	{
		fprintf(arq,"%d          %s          R$ %.2f\n", p->codigo, p->produto, p->preco);
		p = p->prox;
	}
	fclose(arq);
	return 0;
}

int salvar_02(FILE *arq, Garcom *g)
{
	arq = fopen("Garcons.txt", "a");
	if(arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	fprintf(arq,"----------GARCONS----------\n\n");
	fprintf(arq,"CÓDIGO          NOME\n");
	while(g != NULL)
	{
		fprintf(arq,"%d              %s\n", g->codigo, g->nome);
		g = g->prox;
	}
	fclose(arq);
	return 0;
}

int main()
{
	Produtos *iniciop, *auxp;
	Garcom *inicio_garcom, *auxg;
	Mesa *inicio_mesa, *aux;
	Pedidos *auxpe, *auxpe2, *verpe;
	FILE *arq1, *arq2;
	int i, tamanho_mesa = 0, tamanho_garcom = 0, tamp = 0, retorno, opcao = -1, numero_mesa, Codigo, Quantidade;
	
	//Criei 1 nó de cada lista
	iniciop = (Produtos*) malloc(sizeof(Produtos)); //Dupla
	inicio_garcom = (Garcom*) malloc(sizeof(Garcom)); //Dupla
	inicio_mesa = (Mesa*) malloc(sizeof(Mesa)); //Dupla
	inicio_mesa->prox = inicio_mesa->ant = NULL;
	iniciop->prox = iniciop->ant = NULL;
	inicio_garcom->prox = inicio_garcom->ant = NULL;
	
	printf("----------RESTAURANTE----------\n");
	
	printf("--Adicionar Produto(s)--\n");
	while(1)
	{
		inserirprodutos(iniciop, &tamp);
		while(1)
		{
			printf("\nDeseja adicionar mais?\n\n1 - SIM\n0 - NÃO\n\n");
			printf("Opcao: ");
			scanf("%d", &opcao);
			setbuf(stdin,NULL);
			if(opcao == 0 || opcao == 1)
				break;
			else
			printf("\nOpcao invalida!");
		}
		if(opcao == 0)
		{
			iniciop->prox = NULL;
			while(iniciop->ant != NULL)
				iniciop = iniciop->ant;
			retorno = salvar_01(arq1, iniciop);
			if(retorno)
				return 0;
			break;
		}
		iniciop->prox= (Produtos*) malloc(sizeof(Produtos));
		iniciop->prox->ant = iniciop;
		iniciop->prox->prox = NULL;
		iniciop = iniciop->prox;
	}
	
	printf("\n--Adicionar Garcon--\n");
	while(1)
	{
		inserirgarcons(inicio_garcom, &tamanho_garcom);
		while(1)
		{
			printf("\nDeseja adicionar mais?\n\n1 - SIM\n0 - NÃO\n\n");
			printf("Opcao: ");
			scanf("%d", &opcao);
			setbuf(stdin,NULL);
			if(opcao == 0 || opcao == 1)
				break;
			else
			printf("\nOpcao invalida!");
		}
		if(opcao == 0)
		{
			inicio_garcom->prox = NULL;
			while(inicio_garcom->ant != NULL)
				inicio_garcom = inicio_garcom->ant;
			retorno = salvar_02(arq2, inicio_garcom);
			if(retorno)
				return 0;
			break;
		}
		inicio_garcom->prox= (Garcom*) malloc(sizeof(Garcom));
		inicio_garcom->prox->ant = inicio_garcom;
		inicio_garcom->prox->prox = NULL;
		inicio_garcom = inicio_garcom->prox;
	}
	
	while(1)
	{
		printf("O que gostaria de fazer?\n\n0 - SAIR\n1 - NOVA MESA\n2 - ATUALIZAR MESA\n3 - LIBERAR MESA\n");
		printf("Opcao: ");
		scanf("%d", &opcao);
		setbuf(stdin,NULL);
		switch(opcao)
		{
			case 1:
				printf("Numero da mesa: ");
				scanf("%d", &numero_mesa);
				setbuf(stdin,NULL);
				retorno = verificarI(inicio_mesa, numero_mesa);
				if(retorno == 0)
					printf("\nMesa ocupada!\n");
				else
				{
					printf("Codigo do garcom: ");
					scanf("%d", &Codigo);
					setbuf(stdin,NULL);
					auxg = inicio_garcom;
					while(auxg != NULL)
					{
						if(auxg->codigo == Codigo)
							break;
						auxg = auxg->prox;
					}
					if(auxg != NULL)
					{
						if(tamanho_mesa > 0)
						{
							while(inicio_mesa->prox != NULL)
								inicio_mesa = inicio_mesa->prox;
							inicio_mesa->prox = (Mesa*) malloc(sizeof(Mesa));
							inicio_mesa->prox->ant = inicio_mesa;
							inicio_mesa->prox->prox = NULL;
							inicio_mesa = inicio_mesa->prox;
						}
						inicio_mesa->total = 0;
						inicio_mesa->numero = numero_mesa;
						inicio_mesa->garcom = Codigo;
						inicio_mesa->pedidos = (Pedidos*) malloc(sizeof(Pedidos));
						inicio_mesa->pedidos->quantidade = 0;
						inicio_mesa->pedidos->codigo = -1;
						inicio_mesa->pedidos->prox = NULL;
						tamanho_mesa++;
						printf("\nMesa adicionada!\n");
						if(tamanho_mesa > 1)
							while(inicio_mesa->ant != NULL)
								inicio_mesa = inicio_mesa->ant;
					}
					else
						printf("\nGarcom inexistente!\n");
				}	
				break;
			case 2:
				printf("Mesa para atualizar: ");
				scanf("%d", &numero_mesa);
				setbuf(stdin,NULL);
				retorno = verificarA(inicio_mesa,numero_mesa);
				if (retorno)
					printf("\nMesa Inexistente!\n");
				else
				{
					printf("Codigo do produto do cliente: ");
					scanf("%d", &Codigo);
					setbuf(stdin,NULL);
					auxp = iniciop;
					while(auxp != NULL)
					{
						if(auxp->codigo == Codigo)
							break;
						auxp = auxp->prox;
					}
					if(auxp == NULL)
						printf("\nProduto inexistente!\n");
					else
					{
						printf("Quantidade: ");
						scanf("%d", &Quantidade);
						setbuf(stdin,NULL);
						while(inicio_mesa->numero != numero_mesa)
							inicio_mesa = inicio_mesa->prox;
						auxpe = inicio_mesa->pedidos;
						verpe = auxpe;
						while(verpe != NULL)
						{
							if(verpe->codigo == Codigo)
								break;
							verpe = verpe->prox;
						}
						if(verpe != NULL)
						{
							verpe->quantidade = verpe->quantidade + Quantidade;
							inicio_mesa->total = inicio_mesa->total + Quantidade * auxp->preco;
						}
						else
						{
							if(inicio_mesa->total > 0)
							{
								while(auxpe->prox != NULL)
									auxpe = auxpe->prox;
								auxpe->prox = (Pedidos*)malloc(sizeof(Pedidos));
								auxpe = auxpe->prox;
								auxpe->prox = NULL;
							}
							auxpe->codigo = Codigo;
							auxpe->quantidade = Quantidade;
							inicio_mesa->total = inicio_mesa->total + Quantidade * auxp->preco;
						}
						while(inicio_mesa->ant != NULL)
							inicio_mesa = inicio_mesa->ant;
					}
				}
				break;
			case 3:
				printf("Mesa para liberar: ");
				scanf("%d", &numero_mesa);
				setbuf(stdin,NULL);
				retorno = verificarI(inicio_mesa,numero_mesa);
				if(retorno == 0)
				{
					while(inicio_mesa->numero != numero_mesa)
						inicio_mesa = inicio_mesa->prox;
					consultar_01(inicio_mesa, inicio_garcom, iniciop);
					Pedidos *p;
					auxpe = inicio_mesa->pedidos;
					while(inicio_mesa->pedidos!=NULL)
					{
						inicio_mesa->pedidos = inicio_mesa->pedidos->prox;
						free(auxpe);
						auxpe = inicio_mesa->pedidos;
					}
					if(inicio_mesa->prox == NULL || inicio_mesa->ant == NULL)
					{
						if(tamanho_mesa == 1)
						{
							inicio_mesa->garcom = -1;
							inicio_mesa->numero = -1;
							inicio_mesa->total = 0;
							inicio_mesa->pedidos = (Pedidos*)malloc(sizeof(Pedidos));
							inicio_mesa->pedidos->quantidade = 0;
							inicio_mesa->pedidos->codigo = -1;
							inicio_mesa->pedidos->prox = NULL;
						}
						else if(inicio_mesa->prox == NULL)
						{
							aux = inicio_mesa;
							inicio_mesa = inicio_mesa->ant;
							free(aux);
							inicio_mesa->prox = NULL;
						}
						else
						{
							aux = inicio_mesa;
							inicio_mesa = inicio_mesa->prox;
							free(aux);
							inicio_mesa->ant = NULL;
						}
							
					}
					else{
						inicio_mesa = inicio_mesa->ant;
						inicio_mesa->prox = inicio_mesa->prox->prox;
						aux = inicio_mesa->prox->ant;
						free(aux);
						inicio_mesa->prox->ant = inicio_mesa;
					}
					while(inicio_mesa->ant != NULL)
						inicio_mesa = inicio_mesa->ant;
					tamanho_mesa--;
				}
				else
					printf("\nMesa inexistente!\n");
				break;
			case 0:
				remove("Produtos.txt");
				remove("Garcons.txt");
				aux = inicio_mesa;
				while(inicio_mesa != NULL)
				{
					auxpe = inicio_mesa->pedidos;
					auxpe2 = auxpe;
					while(auxpe != NULL)
					{
						auxpe = auxpe->prox;
						free(auxpe2);
						auxpe2 = auxpe;
					}
					inicio_mesa = inicio_mesa->prox;
					free(aux);
					aux = inicio_mesa;
					tamanho_mesa--;
				}
				auxp = iniciop;
				while(iniciop != NULL)
				{
					iniciop = iniciop->prox;
					free(auxp);
					auxp = iniciop;
					if(tamp > 0)
						tamp--;
				}
				auxg = inicio_garcom;
				while(inicio_garcom != NULL)
				{
					inicio_garcom = inicio_garcom->prox;
					free(auxg);
					auxg = inicio_garcom;
					if(tamanho_garcom > 0)
						tamanho_garcom--;
				}
				break;
			default:
				printf("Opcao invalida!");
		}
		if(opcao == 0)
			break;
	}
	return 0;
}

