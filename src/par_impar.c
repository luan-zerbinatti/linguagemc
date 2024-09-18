#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero:\n");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("O numero digitado é Par\n");
    }
    else{
        printf("O numero dogitado é Impar\n");
    }
    return 0;
}