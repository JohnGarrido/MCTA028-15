// not finished, it is a challenge from google code jam 2017 that I tried to solve in C

#include <stdio.h>
#include<stdlib.h>

void prod(char pancake[], int num){

int count_plus=0, count_mines=0;

for(int i=0;i<=1000;i++) {

if(pancake[i]=='+') {

  count_plus += 1;

if(pancake[i]=='-') {

  count_mines += 1;

}
}
}

if((count_plus%num)==0) {

printf("POSSIVEL");

}

else if(count_mines==0) {

  printf(0);

}


else{

printf("IMPOSSIVEL");

}
}

int main() {

int testCases, k;
char *pancake = malloc(sizeof(char)*1000);

scanf("%i",&testCases);

do {

scanf("%s %i",pancake,&k);
prod(pancake,k);

testCases--;

}while(testCases>0);

return 0;

}
