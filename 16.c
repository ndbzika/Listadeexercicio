#include <stdio.h>
#include <ctype.h> //as fun��es desta biblioteca servem para classificar caracteres ASCII, ou seja, para dizer se um dado byte representa uma letra, ou um d�gito, ou um branco, etc. em c�digo ASCII

void main(){
	char letra;
	printf("Informe uma letra em minusculo: \n");
	scanf("%c",&letra);
	printf("A letra em maiusculo eh %c.", toupper(letra)); // Converte caracter min�sculo em mai�sculo.
	getch();
}
