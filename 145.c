//questão 145
#include <stdio.h>
void main(){
	int k, num, valores, soma=0;
	printf("Informe um valor limite:");
	scanf("%d",&num);
	do{
		printf("Informe um numero:");
		scanf("%d",&valores);
		soma+=valores;
	}while(soma<=num);
	printf("\nA soma dos numeros informados superam o valor informado.\nPrograma encerrado");
	getch();
}
