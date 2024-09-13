#include <stdio.h>

int main(){

     int num;

     int contar=0;
     int rs;
     printf("Digite um numero para fazer a tabuada:\n");
     scanf("%d",&num);

     while (contar <= 10){
        rs = num * contar;
        printf("%d x %d = %d\n" ,num,contar,rs);
        contar++;
     }
     return 0;
}