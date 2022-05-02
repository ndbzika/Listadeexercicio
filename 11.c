#include <stdio.h>
const float dolar = 4.97; //dependendo da situação poderia-se pedir para informar a cotação do dolar em vez de já estar aqui
void main(){
	float real, converter;
	printf("Informe o valor em reais:");
	scanf("%f",&real);
	converter = real/dolar;
	printf("Voce tem %.2f dolares.",converter);
	getch();
}
