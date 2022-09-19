#include <stdio.h>
#include <stdlib.h>
 
typedef struct no{
   int info;
   struct no *esq;
   struct no *dir;  // esqeurda e direita são ponteiros e indicam o endereço pra outra subarvore
// o ponteiro está direcionando para um nó   
}no;
 
no *raiz;
 
no *inicializaArv(){
   return NULL;
}
 
no *criaNo(int valor){
   // criar uma variavel que vai aloca o espaço do tipo no e retorna o endereço dessa variavel
   no *aux = (no*)malloc(sizeof(no)); // pode mudar o nome de nó para outro para não mistrurar com listas encadeadas
   if (aux != NULL){
       aux -> info = valor;
       aux -> esq = NULL;
       aux -> dir = NULL;
       // definou um padrão par ao nó ser sem filhos, ser um no folha caso necessario sera feito na inserção
   }
   return aux;
   // já alocar os valores e deixar a função de insreção para ligar a lista
}
 
 
// sobre inserção
// primeiro verificar se a arqvore está vazia, feito em lista encadeada,
//se ela está vazia é ligar a raiz reclarada como global a esse primero no ,
//o que é a arvo estar vazia? é a função criada,
//se a raiz estiver apontando pro nulo é poque ela esta vazia , ai eu aponto a raiz pra esse no que foi criado
 
void insereArv(int valor){
   no *aux = criaNo(valor);
   if(aux!= NULL){
       if(raiz == NULL){ // se arvore vazia
           raiz = aux; // caso contratio ja tenho elementos na arvore
       }
    else { // arvore com elementos
       //printf("Não foi possivel inserir");
       no *aux2 = raiz;
       while (aux2 -> esq != NULL && aux2 -> dir != NULL){
           aux2 = aux2 -> esq;
       }
       if (aux2 -> esq == NULL){ // se o da esquerda ta nulo coloca na direita mesmo..., se tem vaga na sequerda
           aux2 -> esq = aux;
       } else {
           aux2 -> dir = aux;
       }
   }
   } else {
       printf("\n Não foi possivel inserir");
   }
}
 
 
 
void imprime(no *r){ // ṕoderia ser os thres pre ordem simetrico e pois ordem,
// está passando a raiz no parametro porque vai usar recursividade
// o nome é r pra indicar que pode ser outra raiz e não só a primeira
   if (r != NULL){
       printf("\n %d",r->info);
       imprime(r->esq);
       imprime(r->dir);
   }
}
 
 
//independente se a arvore esta vazia ou não é preciso criar um nó antes,chamar a função cria no passano o valor,
//a função no chamada o no aloado e o endereço passado pra varizavel auxiliar, a partir desse momento  o no está alocado
// o cria no retorna o que está na variavel auxiliar, caso não consiga ele retorna null, entaõ testamos se o no foi criado
// primeiro saber que valor vai ser inserido (int valor)
// a varizavelauxo2 ajuda apercorrer , pro caso da variavel não estár vazia, o
// como tem filho a direita e a esquerda passa o aux2 pra outro elemento e verifica se os filhos seguintes são iguais a null para poder inserir
// enquanto os fois filhos forem diferentes de unull passar pro proximo no
 
 
// alternativa pra percorrer uma arvore binária
// vamos usar recursividade
 
// para cada no acessardo seque a ordem raiz esquerda direita
// antes de tentar percorrer verificar se a ariz e diferente de numm se e vazia ou não, se estiver vazia ja esgotou,
// não necessariaemnte estamos falando da raiz principal pod ser as abaixo dela
// considerando que é diferente de nulo exibir valor armazenado, pelo precuros pre ordem exibit o elemento a esqueda
// repetir o processo pra subarvore a esquerda
// depois chamar o mesmo metodod, mas agora informando oelemento que vai ser aplicado
// por isso não temos uma raiz fixa, temos a raiz daquele momento
// passando para as raizes de baixo
// seguindo o percurso pre onder passando da esquerda pra diretia
 
 
int main(){
   raiz = inicializaArv();
  // raiz = NULL;  // ou usar a função qye recebe null, é apenas um modo mais formal
   insereArv(223432);
   insereArv(24);
   insereArv(3);
   imprime(raiz); // se sei a arvore que armazenei só pode mudar pra imprimir a subarvore tambem se souber
// função para cirar um nó, apenas alocar o  espaço para armazenar o espaço e inserir o valor no campo de informação e coocar por exemplos os ponteiros esquerda e direita apontando pro nulo,
//mas pode ser feiteo dentro da inserção, mas vamos deisxar como função porque pode ser util
 
//    printf("Hello World !");
   return (0);
}
 
 

