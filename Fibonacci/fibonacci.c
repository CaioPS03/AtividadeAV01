#include <stdio.h>

int main() {
	int a, b, soma, i, n;
	a = 0;
	b = 1;
	printf("Digite quantos numeros quer da sequencia: ");
	scanf("%d", &n);
	printf("%d ", b);
	
	for(i = 1; i < n; i++){
		soma = a + b;
		a = b;
		b = soma;
		printf("%d ", soma);
	}
}