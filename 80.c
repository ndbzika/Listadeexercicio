#include <stdio.h>
#include <math.h>
	void main(){
		float a,b,c;
		printf("Informe os coefientes a, b e c de uma funcao de segundo grau:");
		scanf("%f%f%f",&a,&b,&c);
		float delta = sqrt(pow(b,2)-4*a*c);
		if(delta>0){
			float x1 = (-(b)+delta)/2*a;
			float x2 = (-(b)-delta)/2*a;
			printf("Existem duas raizes reais, %.0f e %.0f",x1,x2);
		} else if(delta == 0){
			float x = (-(b)+delta)/2*a;
			printf("Existe apenas uma raiz real, %.0f.",x);
		} else {
			printf("Nao existem raizes reais para essa funcao.");
		}
		getch();
	}
