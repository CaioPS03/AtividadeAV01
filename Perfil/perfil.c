#include <stdio.h>

int main() {
	int d, m, a, soma1, soma2, resposta;
	printf("Digite dua data de nascimento: ");
	scanf("%d/%d/%d", &d, &m, &a);
	soma1 = (d*100 + m) + a;
	soma2 = soma1/100 + soma1%100;
	resposta = soma2%5;
	if(resposta == 0) {
		printf("Seu perfil é: Timido\n");
	} else if(resposta == 1) {
		printf("Seu perfil é: Sonhador\n");
	} else if(resposta == 2) {
		printf("Seu perfil é: Paquerador\n");
	} else if(resposta == 3) {
		printf("Seu perfil é: Atraente\n");
	} else if(resposta == 4) {
		printf("Seu perfil é: Irresistivel\n");
	}
}