#include <stdio.h>
const float polegadas = 2.54;
void main(){
	float num, centimetros;
	printf("Informe o valor em polegadas:");
	scanf("%f", &num);
	centimetros = num*polegadas;
	printf("O mesmo valor em centimetros eh %.2f centimetros.",centimetros);
	getch();
}
