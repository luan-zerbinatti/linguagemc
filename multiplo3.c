#include <stdio.h>

int main()
{
    
    int contar = 0;



    int qtd = 0;

    while(contar <= 100 ){
        if(contar % 3 == 0){
            printf("%d\n",contar);
            qtd++;
        }
        contar++;
    }
    printf("Quantidade de multiplos de 3 é %d\n" ,qtd);
    return 0;
}