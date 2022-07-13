// questão 43
#include <stdio.h>
void main(){
	float valorAtual,valorAnterior,variacao;
	printf("Informe o preco atual da acao:");
	scanf("%f",&valorAtual);
	printf("Informe o preco anterior da acao:");
	scanf("%f",&valorAnterior);
	variacao = ((valorAtual*100)/valorAnterior)/2;
	printf("A variacao foi de %.2f%%",variacao);
	getch();
}
