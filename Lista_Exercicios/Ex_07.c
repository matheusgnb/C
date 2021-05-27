/* 7) Escreva um programa em C onde, se possa representar os nomes e as notas de alunos de um curso da universidade.  O  programa  deverá  imprimir  os  nomes  dos  cinco  alunos  que  obtiverem  as  maiores  notas acima da média da turma. Considerar que a turma tenha 50 alunos. Usar a estrutura multivalorada vista em sala de aula.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct st_aluno{

    char nome[50];
    float nota;
};

int main(){

    struct st_aluno aluno[5];
    int i;

    int quantidade_alunos = 10;

    float soma_notas;
    float media;
    float media_turma;
    int contador = 0;
 

    for(i = 0; i < quantidade_alunos; i++){
        
        printf("\nNome Aluno %d: ",i+1);
        fgets(aluno[i].nome,50,stdin); 
 
        printf("Nota Aluno %d: ",i+1);
        scanf("%f",&aluno[i].nota);
        //setbuf(stdin, NULL);
        getchar();

        soma_notas = soma_notas + aluno[i].nota ;
    }

    printf("\nSOMA DAS NOTAS - %.2f\n",soma_notas);
    media_turma = (soma_notas/quantidade_alunos);
    printf("MEDIA DA TURNA - %.2f\n",media_turma);

    printf("\n---- INTELIGENTES ----"); // Alunos com Nota acima da média

    for (i = 0; i < quantidade_alunos; i++){
        
        if (aluno[i].nota > media_turma){
            printf("\n%s Media -> %.2f",aluno[i].nome,aluno[i].nota);
            contador++;
        }
        
        if (contador == 5){
            break;
        }
        
    }

    printf("\n---- ---- ----");

    for (int i = 0; i < quantidade_alunos; i++){
        
        printf("\n------------ Dados Do Aluno %d ------------\n",i+1);
        printf("Aluno %d: %s",i+1,aluno[i].nome);
        printf("Nota: %.2f\n",aluno[i].nota);

    }

return 0;   
}


