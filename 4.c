#include <stdio.h>
#include <math.h>
void main(){
	int num, dobro, triplo, quadrado, cubo;
	float raiz;
	printf("Informe um numero inteiro positivo:");
	scanf("%d", &num);
	dobro = 2*num;
	triplo = 3*num;
	quadrado = pow(num,2);
	cubo = pow(num,3);
	raiz = sqrt(num);
	printf("Obtemos sobre seu numero, seu dobro que eh %d, seu triplo que eh %d, seu quadrado que eh %d, seu cubo que eh %d e sua raiz que eh %.2f.", dobro,triplo,quadrado,cubo,raiz);
	getchar();
}