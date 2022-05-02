#include <stdio.h>
#include <math.h>
void main(){
	float catetoop, catetoadj, hipotenusa;
	printf("Informe o cateto oposto e o cateto adjacente:");
	scanf("%f%f", &catetoop,&catetoadj);
	float soma = (catetoop*catetoop)+(catetoadj*catetoadj);
	hipotenusa = sqrt(soma);
	printf("A hipotenusa desse triangulo eh %.2f.",hipotenusa);
	getch();
}
