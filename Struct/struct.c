#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    struct PESSOA {
	char nome[30];
	char email[20];
	char telefone[10];
    } ;

    int tnome, temail, tteleone;
    
	struct PESSOA pessoa;
	printf("Digite seu nome: ");
	gets(pessoa.nome);
    printf("Digite seu email: ");
    gets(pessoa.email);
    printf("Digite seu telefone: ");
    gets(pessoa.telefone);

    tnome = strlen(pessoa.nome);
    temail = strlen(pessoa.email);
    tteleone = strlen(pessoa.telefone);
	
	printf("Nome: %d digitos\n", tnome);
    printf("Email: %d digitos\n", temail);
    printf("Telefone: %d digitos\n", tteleone);
}