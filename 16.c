#include <stdio.h>
#include <ctype.h> //as funções desta biblioteca servem para classificar caracteres ASCII, ou seja, para dizer se um dado byte representa uma letra, ou um dígito, ou um branco, etc. em código ASCII

void main(){
	char letra;
	printf("Informe uma letra em minusculo: \n");
	scanf("%c",&letra);
	printf("A letra em maiusculo eh %c.", toupper(letra)); // Converte caracter minúsculo em maiúsculo.
	getch();
}
