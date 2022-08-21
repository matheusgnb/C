#define MAX 10
#include <stdio.h>

/*

Foi realizada uma pesquisa de algumas características físicas de 20 habitantes de
uma certa região. De cada habitante foram coletados os seguintes dados: sexo (1- f,
2- m, 3- Outro), cor dos olhos (1- azuis, 2- verdes ou 3- castanhos), cor dos cabelos (1-
louros, 2- pretos ou 3- castanhos) e idade.
Faça um programa que leia esses dados em um vetor de registro. Além disso,
implemente uma função que receba o vetor de registro definido por parâmetro, e
retorna a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35
(inclusive) e que tenham olhos verdes e cabelos louros. A função deve ser chamada
após a leitura dos dados e o resultado deve ser exibido.

*/

// sexo 1-f 2-m 3-outro
// cabelo 1-loiro, 2-pretos 3-castanhos
// idade 
// olhos 1-azuis, 2-verdes, 3-castanhos

typedef struct {
  int olhos; 
  int cabelos; 
  int idade;
  int sexo;
} pessoa;

typedef struct {
  pessoa pessoas[MAX];
  int tamanho;
} listaPessoas;

void iniciaListaPessoas(listaPessoas *lista) {
  lista->tamanho = -1;
}

void appendPessoa(listaPessoas *lista, pessoa p) {
  if (lista->tamanho == MAX-1) {
    printf("Lista cheia");
  } else {
    
    (lista->tamanho)++;
    printf("Pessoa adicionada na posicao %d\n", lista->tamanho);
    lista->pessoas[lista->tamanho] = p;
  }
}

int listaVazia(listaPessoas *lista) {
  if (lista->tamanho == MAX) {
    return 1;
  } 
  return 0;
};

int main(void) {
  //pessoa (olhos, cabelos, idade, sexo)
  pessoa p1 = {2,2,20,2};
  pessoa p2 = {1,2,23,2};
  pessoa p3 = {1,2,23,2};
  pessoa p4 = {2,2,23,2};
  pessoa p5 = {2,2,23,2};
  pessoa p6 = {2,2,23,2};
  pessoa p7 = {2,2,23,2};
  pessoa p8 = {1,2,23,2};
  int count = 0;
  listaPessoas listaPessoas;

  iniciaListaPessoas(&listaPessoas);
  appendPessoa(&listaPessoas, p1);
  appendPessoa(&listaPessoas, p2);
  appendPessoa(&listaPessoas, p3);
  appendPessoa(&listaPessoas, p4);
  appendPessoa(&listaPessoas, p5);
  appendPessoa(&listaPessoas, p6);
  appendPessoa(&listaPessoas, p7);
  int aux = listaPessoas.tamanho;

  while (aux > -1) {
    if (listaPessoas.pessoas[aux].cabelos == 1 && listaPessoas.pessoas[aux].idade >= 18 && listaPessoas.pessoas[aux].idade <= 35 && listaPessoas.pessoas[aux].olhos==2) {
     count++;
    } 
    aux--;
  }

  printf("pessoas louras do sexo feminino entre 18 e 35 anos que tem olhos verdes\n");
  printf("%d\n", count);
/*
  indivíduos do sexo feminino cuja idade está entre 18 e 35
(inclusive) e que tenham olhos verdes e cabelos louros
*/
   //pessoa (olhos=2, cabelos=1, idade entre 18 e 35, sexo=2)
  return 0;
}