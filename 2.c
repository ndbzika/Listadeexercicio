#include <stdio.h>
void main(){
	float portugues;
	float matematica;
	float ciencias;
	printf("Informe sua nota de portugues:");
	scanf("%f", &portugues);
	printf("Informe sua nota de matematica:");
	scanf("%f", &matematica);
	printf("Informe sua nota de ciencias:");
	scanf("%f", &ciencias);
	int peso1 = 2;
	int peso2 = 3;
	int peso3 = 1;
	float somaponderada = (portugues*peso1)+(matematica*peso2)+(ciencias*peso3);
	float mediaponderada = somaponderada/(peso1+peso2+peso3);
	printf("A sua media aritmetica ponderada eh de %.2f", mediaponderada);
	getch(); 
}