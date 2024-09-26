#include <stdio.h>
#include "../lib/usuario.h"

int main(){
    //Declaração da estrutura Usuario como us
    Usuario us;

    FILE *arq;    

    system("clear");
    printf("*************************************\n");
    printf("********** Cadastro de Usuario ******\n");
    printf("*************************************\n");
    printf("Digite o nome de usuario:\n");

    fgets(us.nomeusuario,20,stdin);
    printf("%s",us.nomeusuario);
    printf("%d\n", sizeof(us.nomeusuario));

    printf("Digite a senha do usuario:\n");
    fgets(us.senha, sizeof(us.senha),stdin);

     printf("Digite o nivel do usuario:\n");
    fgets(us.nivel, sizeof(us.nivel),stdin);


    arq = fopen("file/usuarios.txt","a+");


    fputs(us.nomeusuario,arq);
    fputs(us.senha,arq);
    fputs(us.nivel,arq);
    return 0;
}