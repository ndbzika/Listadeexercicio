//questão 158
#include <stdio.h>
const int TAMANHO = 10;
void main(){
	int k, vet[TAMANHO],media,soma=0;
	for(k=0;k<TAMANHO;k++){
		printf("Informe um valor inteiro:");
		scanf("%d",&vet[k]);
		soma+=vet[k];
	}
	media = soma/TAMANHO;
	for(k=0;k<TAMANHO;k++){
		if(vet[k]>media){
			printf("%d ",vet[k]);
		}
	}
}
