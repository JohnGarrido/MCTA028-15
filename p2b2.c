/*
Este é um exercício de criar e manipular structs.
Você deve criar as seguintes structs:
ponto_s (com novo tipo ponto) com 2 campos: int x  e int y
triangulo_s (com novo tipo triangulo) contendo 3 pontos.
Pontos (x1,y1), (x2, y2), (x3, y3) formam um triângulo válido se não são colineares. Isso pode ser calculado da seguinte forma:
a = (x1 - x2)・(y2 - y3) - (x2 - x3)・(y1 - y2)  
Se a for zero, então os pontos são colineares.   
Construa as seguintes funções:
valida: deve receber (x1,y1), (x2, y2), (x3, y3) e devolver o valor de a se formam um triângulo e 0, caso contrário.
constroi: deve receber (x1,y1), (x2, y2), (x3, y3) não-colineares e construir e retornar um triângulo com esses pontos.
void modifica: recebe um triângulo e o altera de forma que os seus pontos passam a valer 2 vezes o seu valor. A função deve alterar o triângulo original.
O uso de ponteiros é sua decisão desde que as funções façam o que está descrito.
No main:
Leia coordenadas inteiras (x1,y1), (x2, y2), (x3, y3).
Chame valida com essas coordenadas.
Se formarem um triângulo, construa um triângulo com esses pontos usando a função constroi e chame a função modifica com esse triângulo. Imprima as novas coordenadas como abaixo.
Se não formarem um triângulo, imprima INVALIDO
*/

#include <stdio.h>
#include<stdlib.h>

typedef struct ponto_s{

int x;
int y;

}ponto[3];

struct triangulo_s {

ponto pontos[3];

};

struct triangulo_s constroi(struct triangulo_s x) {

for(int i=0;i<3;i++) {

x.pontos[i]->x *= 2;
x.pontos[i]->y *= 2;

}

for(int i=0;i<3;i++) {

printf("%i %i\n",x.pontos[i]->x,x.pontos[i]->y);

}

return x;

}

int valida(struct triangulo_s x) {

int a = ((x.pontos[0]->x - x.pontos[1]->x) * (x.pontos[1]->y - x.pontos[2]->y)) - ((x.pontos[1]->x - x.pontos[2]->x) * (x.pontos[0]->y - x.pontos[1]->y)); 

return a;

}

int main(void) {

struct triangulo_s triangulo; 

for(int i=0;i<3;i++) {

scanf("%i %i",&triangulo.pontos[i]->x,&triangulo.pontos[i]->y);

}


if(valida(triangulo)==0) {
  printf("INVÁLIDO");
}

else {
  constroi(triangulo);
}

return 0;

}

