#include <stdio.h>
const float PI = 3.14;
void main(){
	float raio;
	printf("Informe o raio da circunferencia:");
	scanf("%f", &raio);
	float area = PI*raio*raio;
	float comprimento = 2*PI*raio;
	printf("Sua area eh %.2f e seu comprimento eh %.2f.",area,comprimento);
	getchar();
}