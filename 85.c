#include <stdio.h>
	void main(){
		int num1,num2;
		printf("Informe dois numeros:");
		scanf("%d%d",&num1,&num2);
		char operador;
		printf("Informe um operador:");
		fflush(stdin);
		scanf("%c",&operador);
		switch(operador){
			case '+': printf("A soma eh %d",num1+num2); break;
			case '-': printf("A subtracao eh %d",num1-num2); break;
			case '*': printf("A multiplicacao eh %d",num1*num2); break;
			case '/': printf("A divisao eh %d",num1/num2); break;
		}
		getch();
	}
