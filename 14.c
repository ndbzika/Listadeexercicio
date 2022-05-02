#include <stdio.h>
#include <string.h> //Biblioteca que trabalha com strings

void main(){
	char palavra[100]; //declarou uma variável(char palavra) e que vai ter no máximo 100 caracteres[100]
	int tamanho;
	printf("Informe uma palavra:");
	scanf("%s", &palavra);
	tamanho = strlen(palavra);
	printf("O comprimento da palavra %s eh de %d caracteres.",palavra,tamanho); //strlen - informa o comprimento da string fornecida
	getch();
}
