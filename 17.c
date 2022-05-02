#include <stdio.h>

void main(){
	float base, altura, area, valor, valorfinal;
	printf("Informe a base e a altura da casa:");
	scanf("%f%f",&base,&altura);
	area = base*altura;
	printf("Informe o valor cobrado pelo arquiteto por metro quadrado:");
	scanf("%f",&valor);
	valorfinal = valor*area;
	printf("O projeto custarah %.2f reais.",valorfinal);
	getch();
}
