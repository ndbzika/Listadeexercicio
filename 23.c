#include <stdio.h>
#include <math.h>
const float PI = 3.14;
	void main(){
		float raio;
		printf("Informe o valor da raio:");
		scanf("%f",&raio);
		float volume = 4*PI*pow(raio,3)/3;
		printf("O volume da esfera eh %.2f.",volume);
		getch();
	}
