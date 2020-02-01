#include <stdio.h>
#include<stdlib.h>

typedef struct person{
  
  int a;
  int b;
  
}pessoas;

void mostraAbertas (int *portas, int porta) {

  for(int i=1;i<=porta;i++) {

    if(portas[i]==1) {

      printf("%i\n",i);

  }
}
}

void mudaEstado(pessoas *x, int porta[], int limite, int portas) {

int n=1;

do{

for(int i=1;i<=portas;i++) {

  if(i>=x[n].a && i<=x[n].b) {

    if(porta[i]==1) {

      porta[i]=0;

    }

    else {

      porta[i]=1;

    }
  }
}

n++;

}while(n<=limite);
}

int main(void) {
  
  int n, k; // numero de portas e numero de pessoas
  
  scanf("%i %i",&n,&k); // input

  pessoas *pessoa = malloc(sizeof(pessoas)*k); // criei um vetor de estruturas (pessoas)
  
  int *portas = malloc(sizeof(int)*n); // criei um vetor de portas

  for(int i=1;i<=n;i++) {
    
    portas[i] = 0; // setei as portas como fechadas
    
  }
  
  for(int j=1;j<=k;j++) { 

  scanf("%i %i",&pessoa[j].a,&pessoa[j].b); // atribuí os valore de a e b para cada pessoa i

  }

  mudaEstado(pessoa,portas,k,n);
  mostraAbertas(portas,n);

  return 0;
  
}
