#include <stdio.h>
void main(){
	float lado;
	printf("Informe o lado do quadrado:");
	scanf("%f", &lado);
	float area = lado*lado;
	float perimetro = 4*lado;
	printf("Informamos que a area do seu quadrado eh %.2f e seu perimetro eh %.2f.", area,perimetro);
	getchar();
}