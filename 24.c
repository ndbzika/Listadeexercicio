#include <stdio.h>
	void main(){
		float termo, razao;
		printf("Informe o primeiro termo e a razao para calcular a sua PA:");
		scanf("%f%f",&termo,&razao);
		float termo2 = termo+(2-1)*razao;
		float termo3 = termo+(3-1)*razao;
		float termo4 = termo+(4-1)*razao;
		float termo5 = termo+(5-1)*razao;
		printf("A progressao aritmetica com razao %.2f do termo %.2f eh:",razao,termo);
		printf("\n%.2f",termo);
		printf("\n%.2f",termo2);
		printf("\n%.2f",termo3);
		printf("\n%.2f",termo4);
		printf("\n%.2f",termo5);
		getch();
	}
