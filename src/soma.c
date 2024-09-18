#include <stdio.h>

int main(){
  int v1, v2 , rs;

  printf("Digite um numero:\n");
//  o comando scanf, realiza a captura do número
// que o usuario ira digitar. Apos capturar o 
// o numero sera alocado na variavel v1 
  scanf("%d",&v1);

printf("Digite outro numero:\n");
scanf("%d",&v2);

printf("O valor de v1 é %d e esta em %p \n",v1,&v1);
printf("O valor de v2 é %d e esta em %p \n",v2,&v2);

rs = v1 + v2;
printf("O resultado da soma é %d \n" ,rs);


return 0;
}