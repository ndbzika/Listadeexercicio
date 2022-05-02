#include <stdio.h>
void main(){
	float numero1,numero2,numero3;
	printf("Informe os tres numeros:");
	scanf("%f%f%f", &numero1,&numero2,&numero3);
	float media = (numero1+numero2+numero3)/3;
	printf("A media aritmetica dos numeros informados eh %.2f",media);
	getch();
}
