#include<stdio.h>

void numerosDiferente(double numero1, double numero2){
	if(numero1 != numero2)
		printf("Números diferentes");
	else
		printf("Números iguais");
}

int main() {
	double numero1, numero2;
	printf("Digite dois numeros");
	scanf("%f%f", &numero1,&numero2);
	numerosDiferente(numero1, numero1);
	return 0;
}
