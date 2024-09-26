#include <stdio.h>
#include <stdio.h>
#include <stdio.h>

int man(){
    char *label_nome = "Nome: ";
    char *label_email = "Email: ";
    char *label_telefone = "Telefone: ";
    char *label_idade = "Idade: ";

    char input_nome[30];
    char input_email[50];
    char input_telefone[15];
    char input_idade[4];

    FILE *cadastro;
    cadastro = fopen("files/cadastro.txt","a+");

        printf("Digite o seu Nome completo:\n");
            fgets(input_nome,40,stdin);

     printf("Digite o seu Email:\n");
            fgets(input_email,40,stdin);

     printf("Digite o seu Telefone:\n");
            fgets(input_telefone,40,stdin);

     printf("Digite o seu Idade:\n");
            fgets(input_idade,40,stdin);


    fseek(cadastro,0,SEEK_END);
    fputs(label_nome,cadastro);
    fputs(input_nome,cadastro);






    fputs("--------------------------------",cadastro);
    fclose(cadastro);
    printf("\nDados cadastrados com sucesso!\n");



}