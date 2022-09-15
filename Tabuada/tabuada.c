#include <stdio.h>

int main() {
	int numero, contador = 0, tabuada = 0, i;
	
	printf("Informe um numero: ");
	scanf("%d", &numero);
	while(tabuada<numero){
		tabuada++;
		for(i = 0; i < 10; i++){
			contador++;
			printf("%d x %d: %d\n", tabuada, contador, tabuada*contador);
			if(contador == 10){
				contador *=0;
				printf("\n");
			}
		}	
	}

	
	
	return 0;
}