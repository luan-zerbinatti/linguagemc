#include <stdio.h>

int main(){
    int valor = 30;
    int *pvalor = &valor;
    printf("Valor da variavel é %d e o endereço de memória é %p\n",valor, &valor);
    printf("O endereço de pvalor é %p é o valor de %d\n",pvalor, *pvalor);
    return 0;
}