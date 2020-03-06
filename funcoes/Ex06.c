#include<stdio.h>

void mesDiferente(int numero){
	if(numero > 4 || numero < 1)
		printf("Números invalidos");
	else {
		if(numero == 1)
			printf("%d: Janeiro", numero);
		else if(numero == 2)
			printf("%d: Fevereiro", numero);
		else
			printf("%d: Marco", numero);
	}
}

int main() {
	int numero = 0;
	printf("Digite 1, 2 ou 3 - Que representara os meses do primeiro trimestre\n");
	scanf("%d", &numero);
	mesDiferente(numero);
	return 0;
}
