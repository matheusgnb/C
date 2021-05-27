#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

typedef struct Eventos
{

    char tipo[100];
    char local[100];
    char qualidade[100];
    char resumo[500];

} Eventos;

//Protótipos
int menu_regioes();
int menu_principal();
int menu_de_alteracao();
void incluir(Eventos evento_x[100], int *tamanho_x, FILE *arquivo_x);
int alterar(Eventos evento_x[100], int *tamanho_x, FILE *arquivo_x);
int refazer(Eventos evento_x[100], int *tamanho_x, FILE *arquivo_x, char nome_da_regiao[]);
int excluir(Eventos evento_x[100], int *tamanho_x, FILE *arquivo_x);
void mostrar(Eventos evento_x[100], int *tamanho_x);

int main()
{

    printf("\n\n\n// AGENDAMENTO DE EVENTOS //\n");

    int tamanho_01 = 0;
    int tamanho_02 = 0;
    int tamanho_03 = 0;
    int tamanho_04 = 0;
    int tamanho_05 = 0;

    int abriu_01 = 0;
    int abriu_02 = 0;
    int abriu_03 = 0;
    int abriu_04 = 0;
    int abriu_05 = 0;

    int menu_regioes_choice;
    int menu_principal_choice;

    int escolha_menu_regioes;
    int escolha_menu_principal;

    int escolha;

    Eventos
        Evento_01[100],
        Evento_02[100],
        Evento_03[100],
        Evento_04[100],
        Evento_05[100];

    FILE *arquivo_01, *arquivo_02, *arquivo_03, *arquivo_04, *arquivo_05;

    while (1) // While True
    {

        escolha_menu_regioes = menu_regioes(menu_regioes_choice);

        if (escolha_menu_regioes == 0)
        {
            break;
        }

        while (1)
        {

            escolha_menu_principal = menu_principal(menu_principal_choice);

            if (escolha_menu_principal == 5)
            {
                break;
            }

            switch (escolha_menu_regioes)
            {

            case 1: // Opção NORTE escolhida

                printf("/// Região NORTE /// \n");
                switch (escolha_menu_principal)
                {

                case 1: // Escolheu Incluir
                    arquivo_01 = fopen("Norte.txt", "a"); // Cria/Abre arquivo Norte.txt

                    if (arquivo_01 == NULL)
                    {
                        printf("Erro ao Abrir Arquivo.");
                        return (1);
                    }

                    if (tamanho_01 == 0 && abriu_01 == 0)
                    {
                        fprintf(arquivo_01, "****** AGENDA REGIÃO NORTE ******\n\n");
                        abriu_01 = 1;
                    }

                    incluir(Evento_01, &tamanho_01, arquivo_01);
                    fclose(arquivo_01);
                    break;

                case 2: // Escolheu Alterar

                    escolha = alterar(Evento_01, &tamanho_01, arquivo_01);

                    if (escolha)
                    {

                        remove("Norte.txt");
                        escolha = refazer(Evento_01, &tamanho_01, arquivo_01, "Norte.txt");

                        if (escolha)
                        {
                            return (1);
                        }
                    }
                    break;

                case 3: // Escolheu Excluir

                    escolha = excluir(Evento_01, &tamanho_01, arquivo_01);

                    if (escolha)
                    {
                        remove("Norte.txt");
                        escolha = refazer(Evento_01, &tamanho_01, arquivo_01, "Norte.txt");

                        if (escolha)
                        {
                            return (1);
                        }
                    }
                    break;

                case 4: // Escolheu Mostrar

                    mostrar(Evento_01, &tamanho_01);
                    break;

                default:
                    break;
                }
            break;

            case 2:
                printf("/// Região Nordeste /// \n");
                escolha_menu_principal = menu_principal(menu_principal_choice);

                switch (escolha_menu_principal)
                {

                case 1:
                    arquivo_02 = fopen("Nordeste.txt", "a");

                    if (arquivo_02 == NULL)
                    {
                        printf("Erro ao Abrir Arquivo.");
                        return (1);
                    }

                    if (tamanho_02 == 0 && abriu_02 == 0)
                    {
                        fprintf(arquivo_02, "****** AGENDA REGIÃO NORDESTE ******\n\n");
                        abriu_02 = 1;
                    }

                    incluir(Evento_02, &tamanho_02, arquivo_02);
                    fclose(arquivo_02);
                    break;

                case 2: // Escolheu Alterar

                    escolha = alterar(Evento_02, &tamanho_02, arquivo_02);

                    if (escolha)
                    {

                        remove("Nordeste.txt");
                        escolha = refazer(Evento_02, &tamanho_02, arquivo_02, "Nordeste.txt");

                        if (escolha)
                        {
                            return (1);
                        }
                    }
                    break;

                case 3: // Escolheu Excluir

                    escolha = excluir(Evento_02, &tamanho_02, arquivo_02);

                    if (escolha)
                    {
                        remove("Nordeste.txt");
                        escolha = refazer(Evento_02, &tamanho_02, arquivo_02, "Nordeste.txt");

                        if (escolha)
                        {
                            return (1);
                        }
                    }
                    break;

                case 4: // Escolheu Mostrar

                    mostrar(Evento_02, &tamanho_02);
                    break;

                default:
                    break;
                }
            break;

            case 3:

                printf("/// Região CENTRO-OESTE /// \n");
                escolha_menu_principal = menu_principal(menu_principal_choice);

                switch (escolha_menu_principal)
                {
                case 1:
                    arquivo_03 = fopen("Centro-Oeste.txt", "a");

                    if (arquivo_03 == NULL)
                    {
                        printf("Erro ao Abrir Arquivo.");
                        return (1);
                    }

                    if (tamanho_03 == 0 && abriu_03 == 0)
                    {
                        fprintf(arquivo_03, "****** AGENDA REGIÃO CENTRO-OESTE ******\n\n");
                        abriu_03 = 1;
                    }

                    incluir(Evento_03, &tamanho_03, arquivo_03);
                    fclose(arquivo_03);
                    break;

                case 2: // Escolheu Alterar

                    escolha = alterar(Evento_03, &tamanho_03, arquivo_03);

                    if (escolha)
                    {

                        remove("Centro-Oeste.txt");
                        escolha = refazer(Evento_03, &tamanho_03, arquivo_03, "Centro-Oeste.txt");

                        if (escolha)
                        {
                            return (1);
                        }
                    }
                    break;

                case 3: // Escolheu Excluir

                    escolha = excluir(Evento_03, &tamanho_03,arquivo_03);

                    if (escolha)
                    {
                        remove("Centro-Oeste.txt");
                        escolha = refazer(Evento_03, &tamanho_03, arquivo_03, "Centro-Oeste.txt");

                        if (escolha)
                        {
                            return (1);
                        }
                    }
                    break;

                case 4: // Escolheu Mostrar

                    mostrar(Evento_03, &tamanho_03);
                    break;

                default:
                    break;
                }
            break;

            case 4:
                printf("/// Região SUDESTE /// \n");
                escolha_menu_principal = menu_principal(menu_principal_choice);

                switch (escolha_menu_principal)
                {
                case 1:
                    arquivo_04 = fopen("Sudeste.txt", "a");

                    if (arquivo_04 == NULL)
                    {
                        printf("Erro ao Abrir Arquivo.");
                        return (1);
                    }

                    if (tamanho_04 == 0 && abriu_04 == 0)
                    {
                        fprintf(arquivo_04, "****** AGENDA REGIÃO SUDESTE ******\n\n");
                        abriu_04 = 1;
                    }

                    incluir(Evento_04, &tamanho_04, arquivo_04);
                    fclose(arquivo_04);
                    break;

                case 2: // Escolheu Alterar

                    escolha = alterar(Evento_04, &tamanho_04, arquivo_04);

                    if (escolha)
                    {
                        remove("Sudeste.txt");
                        escolha = refazer(Evento_04, &tamanho_04, arquivo_04, "Sudeste.txt");

                        if (escolha)
                        {
                            return (1);
                        }
                    }
                    break;

                case 3: // Escolheu Excluir

                    escolha = excluir(Evento_04, &tamanho_04,arquivo_04);

                    if (escolha)
                    {
                        remove("Sudeste.txt");
                        escolha = refazer(Evento_04, &tamanho_04, arquivo_04, "Sudeste.txt");

                        if (escolha)
                        {
                            return (1);
                        }
                    }
                    break;

                case 4: // Escolheu Mostrar

                    mostrar(Evento_04, &tamanho_04);
                    break;

                default:
                    break;
                }
            break;

            case 5:
                printf("/// Região SUL /// \n");
                escolha_menu_principal = menu_principal(menu_principal_choice);

                switch (escolha_menu_principal)
                {
                case 1:
                    arquivo_05 = fopen("Sul.txt", "a");

                    if (arquivo_05 == NULL)
                    {
                        printf("Erro ao Abrir Arquivo.");
                        return (1);
                    }

                    if (tamanho_05 == 0 && abriu_05 == 0)
                    {
                        fprintf(arquivo_05, "****** AGENDA REGIÃO SUL ******\n\n");
                        abriu_05 = 1;
                    }

                    incluir(Evento_05, &tamanho_05, arquivo_05);
                    fclose(arquivo_05);
                    break;

                case 2: // Escolheu Alterar

                    escolha = alterar(Evento_05, &tamanho_05, arquivo_05);

                    if (escolha)
                    {

                        remove("Sul.txt");
                        escolha = refazer(Evento_05, &tamanho_05, arquivo_05, "Sul.txt");

                        if (escolha)
                        {
                            return (1);
                        }
                    }
                    break;

                case 3: // Escolheu Excluir

                    escolha = excluir(Evento_05, &tamanho_05,arquivo_05);

                    if (escolha)
                    {
                        remove("Sul.txt");
                        escolha = refazer(Evento_05, &tamanho_05, arquivo_05, "Sul.txt");

                        if (escolha)
                        {
                            return (1);
                        }
                    }
                    break;

                case 4: // Escolheu Mostrar

                    mostrar(Evento_04, &tamanho_04);
                    break;

                default:
                    break;
                }
            break;

            default:
                break;
            }
        }
    }
    return 0;
}

int menu_principal()
{

    int escolha_menu_principal;

    printf("\n1)  Incluir uma descrição\n");
    printf("2)  Alterar uma descrição\n");
    printf("3)  Excluir uma descrição\n");
    printf("4)  Mostrar uma descrição\n");
    printf("5)  Voltar ao Menu Regiões\n");
    printf("\n");

    printf("Escolha uma Opção: ");
    scanf("%d", &escolha_menu_principal);
    setbuf(stdin, NULL);

    if (escolha_menu_principal <= 5)
    {

        return (escolha_menu_principal);
    }
    else
    {

        printf("OPÇÃO FORA DO MENU\n");
        printf("Escolha Novamente !!\n\n\n");
        printf("*******************************");
        menu_principal();
    }
}

int menu_regioes()
{

    int escolha_menu_regioes;

    printf("\n\n1)  Norte\n");
    printf("2)  Nordeste\n");
    printf("3)  Centro - Oeste\n");
    printf("4)  Sudeste\n");
    printf("5)  Sul\n");
    printf("0)  Sair do Programa\n\n");

    printf("Escolha uma Região: ");
    scanf("%d", &escolha_menu_regioes);
    setbuf(stdin, NULL);

    if (escolha_menu_regioes == 0)
    {
        printf("Saindo do Programa...");
    }

    if (escolha_menu_regioes <= 5)
    {

        return (escolha_menu_regioes);
    }
    else
    {

        printf("OPÇÃO FORA DO MENU\n");
        printf("Escolha Novamente !!\n\n");
        printf("**************************\n");
        menu_regioes();
    }
}

int menu_de_alteracao()
{

    int escolha_menu_alteracao;

    printf("----- MENU ALTERAÇÃO -----\n");
    printf("\n1) Tipo\n");
    printf("2) Local\n");
    printf("3) Qualidade\n");
    printf("4) Resumo\n");
    printf("5) Voltar...\n");
    printf("0) Sair do Programa\n\n");

    printf("O Que deseja Alterar? : ");
    scanf("%d", &escolha_menu_alteracao);
    setbuf(stdin, NULL);

    if (escolha_menu_alteracao == 0)
    {
        printf("Saindo do Programa...");
        exit(0);
    }

    if (escolha_menu_alteracao <= 4)
    {

        return (escolha_menu_alteracao);
    }
    else
    {

        printf("OPÇÃO FORA DO MENU\n");
        printf("Escolha Novamente !!\n\n");
        printf("**************************\n");
        menu_de_alteracao();
    }
}

void incluir(Eventos evento_x[100], int *tamanho_x, FILE *arquivo_x)
{

    if (*tamanho_x == 100)
    {
        printf("Agenda LOTADA.");
    } else {

        printf("\nTipo do Evento: ");
        setbuf(stdin, NULL);
        gets(evento_x[*tamanho_x].tipo);

        printf("\nLocal do Evento: ");
        setbuf(stdin, NULL);
        gets(evento_x[*tamanho_x].local);

        printf("\nQualidade do Evento: ");
        setbuf(stdin, NULL);
        gets(evento_x[*tamanho_x].qualidade);

        printf("\nResumo do Evento: ");
        setbuf(stdin, NULL);
        gets(evento_x[*tamanho_x].resumo);

        printf("Evento Adicionado !! ");

        fprintf(arquivo_x, "Tipo do Evento %d: %s\n", *tamanho_x + 1, evento_x[*tamanho_x].tipo);
        fprintf(arquivo_x, "Local do Evento %d: %s\n", *tamanho_x + 1, evento_x[*tamanho_x].local);
        fprintf(arquivo_x, "Qualidade do Evento %d: %s\n", *tamanho_x + 1, evento_x[*tamanho_x].qualidade);
        fprintf(arquivo_x, "Resumo do Evento %d: %s\n\n", *tamanho_x + 1, evento_x[*tamanho_x].resumo);

        *tamanho_x = *tamanho_x + 1;
    }
}

int alterar(Eventos evento_x[100], int *tamanho_x, FILE *arquivo_x)
{

    int opcao_alteracao;
    int escolha_menu_alteracao;
    int numero_evento;

    opcao_alteracao = menu_de_alteracao(escolha_menu_alteracao);

    if (tamanho_x == 0)
    {
        printf("A Agenda está Vazia");
        return (0);
    }
    else
    {

        if (opcao_alteracao == 1 || opcao_alteracao == 2 || opcao_alteracao == 3 || opcao_alteracao == 4)
        {

            printf("Numero do Evento: ");
            scanf("%d", &numero_evento);
            setbuf(stdin, NULL);

            if (numero_evento <= *tamanho_x)
            {

                switch (opcao_alteracao)
                {

                case 1:

                    evento_x[numero_evento - 1].tipo[0] = '\0';
                    printf("Alterar o TIPO: ");
                    setbuf(stdin, NULL);
                    gets(evento_x[numero_evento - 1].tipo);
                    printf("Tipo Atualizado !");
                    break;

                case 2:

                    evento_x[numero_evento - 1].local[0] = '\0';
                    printf("Alterar o LOCAL: ");
                    setbuf(stdin, NULL);
                    gets(evento_x[numero_evento - 1].local);
                    printf("Local Atualizado !");
                    break;

                case 3:

                    evento_x[numero_evento - 1].qualidade[0] = '\0';
                    printf("Alterar o QUALIDADE: ");
                    setbuf(stdin, NULL);
                    gets(evento_x[numero_evento - 1].qualidade);
                    printf("Qualidade Atualizada !");
                    break;

                case 4:

                    evento_x[numero_evento - 1].resumo[0] = '\0';
                    printf("Alterar o RESUMO: ");
                    setbuf(stdin, NULL);
                    gets(evento_x[numero_evento - 1].resumo);
                    printf("Resumo Atualizado !");
                    break;

                default:
                    break;
                }
                return (1);
            }
        }
    }
}

int refazer(Eventos evento_x[100], int *tamanho_x, FILE *arquivo_x, char nome_da_regiao[])
{

    arquivo_x = fopen(nome_da_regiao, "a"); // Abrindo arquivo da região escolhida

    int i;

    if (arquivo_x == NULL)
    {

        printf("Erro ao Abrir Arquivo.\n");
        return (1);
    }
    else
    {

        fprintf(arquivo_x, "****** Agenda Região %s ******\n\n", nome_da_regiao);

        for (i = 0; i < *tamanho_x; i++)
        {

            fprintf(arquivo_x, "Tipo do Evento %d: %s\n", i + 1, evento_x[i].tipo);
            fprintf(arquivo_x, "Local do Evento %d: %s\n", i + 1, evento_x[i].local);
            fprintf(arquivo_x, "Qualidade do Evento %d: %s\n", i + 1, evento_x[i].qualidade);
            fprintf(arquivo_x, "Resumo do Evento %d: %s\n", i + 1, evento_x[i].resumo);
        }

        fclose(arquivo_x);
        return (0);
    }
}

int excluir(Eventos evento_x[100], int *tamanho_x, FILE *arquivo_x)
{

    int numero_evento;

    printf("\n Numero de Eventos -> %d\n",*tamanho_x);

    if (*tamanho_x == 0)
    {
        printf("A Agenda está vazia.");
    }
    else
    {
        printf("\nQual é o numero do evento que deseja excluir? ");
        setbuf(stdin, NULL);
        scanf("%d", &numero_evento);

        if (numero_evento <= *tamanho_x)
        {

            evento_x[numero_evento - 1].tipo[0] = '\0';
            evento_x[numero_evento - 1].local[0] = '\0';
            evento_x[numero_evento - 1].qualidade[0] = '\0';
            evento_x[numero_evento - 1].resumo[0] = '\0';

            for (int i = numero_evento - 1; i < *tamanho_x - 1; i++)
            {
                evento_x[i] = evento_x[i + 1];

            }

            printf("\nEvento Excluido !");
            *tamanho_x = *tamanho_x - 1;
            return (1);


        }
        else
        {

            printf("Evento Não Encontrado");
        }
    }
    return (0);
}

void mostrar(Eventos evento_x[100], int *tamanho_x)
{

    if (*tamanho_x == 0)
    {
        printf("Agenda Vazia.");
    }
    else
    {
        printf("\n ////// Eventos da Região //////\n\n");

        for (int i = 0; i < *tamanho_x; i++)
        {
            printf("Tipo do Evento %d: %s\n", i + 1, evento_x[i].tipo);
            printf("Local do Evento %d: %s\n", i + 1, evento_x[i].local);
            printf("Qualidade do Evento %d: %s\n", i + 1, evento_x[i].qualidade);
            printf("Resumo do Evento %d: %s\n", i + 1, evento_x[i].resumo);
        }
    }
}





