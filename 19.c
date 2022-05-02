#include <stdio.h>

void main(){
	float angulo1,angulo2,angulo3;
	printf("Informe o valor do primeiro angulo:\n");
	scanf("%f",&angulo1);
	printf("Informe o valor do segundo angulo:\n");
	scanf("%f",&angulo2);
	angulo3 = 180-angulo1-angulo2;
	printf("O valor do terceiro angulo eh %.1f.",angulo3);
	getch();
}
