// cria uma classe com num alunos incluindo seu nome seguido de RA (registro) e CR (coeficiente de rendimento)
// dado uma classe com num alunos, o programa mostra todos os alunos contidos e seus respectivos nomes, RA e CR por ordem dr CR

#include <stdio.h>
#include<stdlib.h>

typedef struct SIGAA{

char* name;
long int RA;
double CR;

}alunos;

void classSchedule(alunos *materia, int classSize) {
  
// funcao mostra a classe setada na tela

  while(classSize) {
    classSize--;
    printf("%s %li %lf\n",materia[classSize].name,materia[classSize].RA,materia[classSize].CR);
  }
}

int order(const void*a,const void*b) {

// funcao de referencia pra ordenação de qsort em ordem decrescente de CR(??)

  if((*(alunos*)a).CR == (*(alunos*)b).CR) {
    return 0;
  }
  else if((*(alunos*)a).CR < (*(alunos*)b).CR) {
    return -1;
  }
  else {
    return 1;
  }
}

void cadastroAlunos(alunos *materia,int classSize){

// a função de input de cada aluno da classe

while(classSize) {
  classSize--;
  materia[classSize].name = malloc(sizeof(char)*100);
  scanf("%s %li %lf",materia[classSize].name,&materia[classSize].RA,&materia[classSize].CR);
}
}

int main(void) {

int num; // define o tamanho da classe 
scanf("%i",&num);
alunos *softwareEngineering = malloc(sizeof(alunos)); //define o vetor da classe de SWE

cadastroAlunos(softwareEngineering,num);
qsort(softwareEngineering,num,sizeof(alunos),order);
classSchedule(softwareEngineering,num);

return 0;

}
