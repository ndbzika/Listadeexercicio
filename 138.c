//questão 138
#include <stdio.h>
void main(){
	int num,soma=0,aux,aux2;
	printf("Informe um numero inteiro positivo:");
	scanf("%d",&num);
	while(num>0){
		if(num<9){
			soma+=num;
			num = 0;
		}else{
		soma=num%10+soma;
		num=num/10;
		}
	}
	printf("a soma dos algarismos eh %d",soma);
	getch();
}
