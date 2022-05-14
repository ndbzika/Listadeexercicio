#include <stdio.h>
	void main(){
		int a,b,c;
		printf("Informe tres numeros inteiros distintos:");
		scanf("%d%d%d",&a,&b,&c);
		if(a>b && a>c){
			printf("O numero %d eh maior que %d e %d.",a,b,c);
		} else if(b>a && b>c){
			printf("O numero %d eh maior que %d e %d.",b,a,c);
		} else {
			printf("O numero %d eh maior que %d e %d.",c,a,b);
		}
		getch();
	}
