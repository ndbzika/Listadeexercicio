#include <stdio.h>
const float dolar = 4.97; //dependendo da situa��o poderia-se pedir para informar a cota��o do dolar em vez de j� estar aqui
void main(){
	float real, converter;
	printf("Informe o valor em reais:");
	scanf("%f",&real);
	converter = real/dolar;
	printf("Voce tem %.2f dolares.",converter);
	getch();
}
