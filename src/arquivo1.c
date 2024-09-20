#include <stdio.h>


#include <stdlib.h>

#include <string.h>

int main(){
    system("clear");

char *palavra [50];
char *label_nome="Nome";

    printf("Digite seu nome completo:\n");
   //scanf("%s",palavra);
    fgets(palavra,50,stdin);

    FILE *ar;
    ar = fopen("files/teste.txt","w");
    fseek(ar,0,SEEK_END);

    fputs (label_nome,ar);
    fputs(palavra,ar);

    fseek(ar,0,SEEK_END);

    printf("O arquivo esta no endereço:%p\n",ar);

    fclose(ar);

    return 0;
}