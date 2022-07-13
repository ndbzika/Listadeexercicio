#include <stdio.h>
void main(){
	int num,k,aux;
	printf("Informe um valor:");
	scanf("%d",&num);
	aux = num;
	int aux2 = num;
	for(k=0;k<aux2;k++){
		while(num>0){
			printf("*");
			num--;
		}
		printf("\n");
		num = aux-1;
		aux = num;
		int i = 0;
		while(aux2-aux>i){
			printf(" ");
			i++;
		}
	}
	getch();
}
