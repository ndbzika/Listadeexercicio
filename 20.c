//Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 300,00.
//Escreva um programa que leia o comprimento e a largura de um terreno localizado
//nesta cidade e calcule o seu valor de mercado.
#include <stdio.h>

const float PRECOM2 = 300;
void main(){
	float comp, larg, area, valor;
	printf("Informe o comprimento e a largura do terreno:\n");
	scanf("%f%f",&comp,&larg);
	area = comp*larg;
	valor = area*PRECOM2;
	printf("O valor desse terreno no mercado eh de %.2f reais.",valor);
	getch();
}
