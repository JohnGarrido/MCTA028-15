#include <stdio.h>
#include<stdlib.h>

typedef struct person{
  
  int *a;
  int *b;
  
}pessoas;

void mudaEstado(struct person *x, int *arr, int limite, int portas) {

for(int i=1;i<=limite;i++){
for(int j=1;j<=portas;j++) {

if(j>=x[i].a[i] || j<=x[i].b[i]) {

if(arr[j]==0) {

  arr[j]=1;

}

else {

  arr[j]=0;

}
}

}
}
}

int main(void) {
  
  int n, k;
  
  scanf("%i %i",&n,&k);
  
  pessoas *pessoa = malloc(sizeof(pessoas)*k);
  
  int * portas = malloc(sizeof(int)*n);

  for(int i=1;i<=n;i++) {
    
    portas[i] = 0;
    
  }
  
  for(int j=1;j<=k;j++) {
    
  pessoa[j].a[j] = malloc(sizeof(int)*k);
  pessoa[j].b[j] = malloc(sizeof(int)*k); // não estou alocando memória corretamente, por algum motivo (ver depois)

  scanf("%i %i",&pessoa[j].a[j],&pessoa[j].b[j]);

  }

  mudaEstado(pessoa,portas,k,n);
  
  return 0;
  
}
