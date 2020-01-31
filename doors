#include <stdio.h>
#include<stdlib.h>

void lerVetor(int * vetor, int n) {

  // a função é responsável por ler os vetores e dizer qual porta estará aberta ou fechada

for(int i=1;i<=n;i++) {

if(vetor[i]==1) {

  printf("Porta %i: aberta\n",vetor[i]);

}
else {

printf("Porta %i: fechada\n",vetor[i]);

}
}
}

int main(void) {

int n, pessoa=1, abertas=0;
int * portas, aberto=1,fechado=0;

// declaração de variáveis manipuladas: portas, pessoas e número de portas 
// declaração de estados aberto = 1 e fechado = 0

scanf("%i",&n);

portas = (int *) malloc(sizeof(int)*n);

for(int i=1;i<=n;i++) {

  portas[i] = 0;

}

// percorrendo a array portas e alterando o seu estado de acordo com a regra na linha 47

do{

for(int k=1;k<=n;k++) {

    if(k%pessoa==0) {

      if(portas[k]==0) {

        portas[k]=1;

      }

      else {

        portas[k]=0;

      }

  }
}

  pessoa++;

}while(pessoa<=n);

// declarando um contador para portas abertas
// mostrando as portas abertas em ordem

int contador=1;

for(int j=0;j<=n;j++) {
    
    if(portas[j]==1){
      
    printf("%i ª aberta: %i\n",contador,j);
    contador++;

    }

  }

lerVetor(portas,n);

return 0;

}
