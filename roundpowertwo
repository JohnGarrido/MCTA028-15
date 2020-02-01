#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// projeto totalmente falho, realmente não consegui resolver o problema

void modifica(int *x) {
  
  int arredonda_cima, arredonda_baixo;

  do{
    
    arredonda_cima = *x--;
    arredonda_baixo = *x++;
    
    if(((int)(log(arredonda_cima)/log(2))%(1))==0) {
      
      *x = arredonda_cima;
      break;
      
    }
    
    else if(((int)log(arredonda_baixo)/(int)log(2))%1==0) {
      
      *x = arredonda_baixo;
      break;
    }
    
    else {
      *x = arredonda_baixo;
      break;
    }
    
  }while((int)log(*x)/(int)log(2)%1!=0);

  }

int criaVetor(int n) {
  
  int *vetor = malloc(sizeof(int)*n);

  vetor[0] = 1;
  
  for(int i=0;i<n;i++) {
    
    if(0<=i && i<=n-1) {
  
    }
  }

  return 0;
}

int main() {

int n;

modifica(&n);

printf("%i",n);

criaVetor(n);
  
return 0;

}
