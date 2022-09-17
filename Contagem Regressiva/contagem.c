#include <stdio.h>

int main() {
	int i, contador;
	printf("Digite um numero: ");
	scanf("%d", &i);
	for(contador = i; contador >= 0; contador--){
		printf("%d ", contador);
	}
}