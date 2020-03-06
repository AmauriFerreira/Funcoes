#include<stdio.h>

void vogal(char c){
	if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
		printf("Nao eh vogal: %c", c);
	else
		printf("eh vogal: %c", c);
}

int main() {
	char c;
	printf("Digite um caractere: \n");
	scanf("%c", &c);
	vogal(c);
	
	return 0;
}
