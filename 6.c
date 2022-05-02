#include <stdio.h>
void main(){
	int num;
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	int sucessor = num+1;
	int antecessor = num-1;
	printf("O sucessor desse numero eh %d e seu antecessor eh %d.",sucessor,antecessor);
	getch();
}
