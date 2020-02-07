/*
Ordena as pessoas por prioridade de salário utilizando a idade como critério de desempate
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa_s{
  
  double salario;
  int idade;
  
}p;
  
void mostraVetor(p *x,int num) {
  
  for(int i=0;i<num;i++) {
    printf("%lf %i\n",x[i].salario,x[i].idade);
  }
} 

int compare(const void*a,const void*b) {
  
  if((*(p*)a).salario == (*(p*)b).salario){
    
    if((*(p*)a).idade == (*(p*)b).idade) {
      return 0;
    }
    
    else if((*(p*)a).idade > (*(p*)b).idade) {
      return -1;
    }
    
    else {
      return 1;
    }
  }
  
  else if((*(p*)a).salario > (*(p*)b).salario) {
    return -1;
  }
  
  else {
    return 1;
  }
}

struct pessoa_s preencheVetor(p *x, int num) {
  
  for(int i=0;i<num;i++) {
    scanf("%lf %i",&x[i].salario,&x[i].idade);
  }

  return *x;
}

int main(void) {
  
int n;
scanf("%i",&n);
p *pessoa = malloc(sizeof(p)*n);

preencheVetor(pessoa,n);
qsort(pessoa,n,sizeof(p),compare);
mostraVetor(pessoa,n);

return 0;
}
