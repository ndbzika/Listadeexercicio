#include <stdio.h>
void main(){
	float base, altura, area;
	printf("Informe a base e a altura do triangulo:");
	scanf("%f%f",&base,&altura);
	area = (base*altura)/2;
	printf("A area do triangulo eh %.2f.",area);
	getchar();
}