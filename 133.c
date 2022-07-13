#include <stdio.h>
void main(){
	int num,k,aux;
	printf("Informe um valor:");
	scanf("%d",&num);
	aux = num;
	int aux2 = num;
	for(k=aux2;k>0;k--){
		while(aux2-num>=0){
			printf("*");
			num++;
		}
		printf("\n");
		num = aux-1;
		aux = num;
	}
	getch();
}
