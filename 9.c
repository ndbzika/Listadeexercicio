#include <stdio.h>
void main(){
	float distancia, velocidade, tempo;
	printf("Informe a distancia percorrida em quilometros:");
	scanf("%f",&distancia);
	printf("Informe o tempo em que foi realizada em horas:");
	scanf("%f", &tempo);
	velocidade = (distancia/tempo)/3.6;
	printf("A velocidade media desse foi de %.2f m/s.",velocidade);
	getchar();	 
}