#include <stdio.h>
const float TAXA = 0.11;
	void main(){
		float salario_bruto;
		printf("Informe o valor do seu salario bruto:");
		scanf("%f",&salario_bruto);
		float salario_liq = salario_bruto-(salario_bruto*TAXA);
		if(salario_liq >= 4664.69){
			float imposto = salario_liq-(salario_liq*(27.5/100));
			printf("Voce recebe um salario de R$%.2f.",imposto);
		} else if(salario_liq >= 3751.06){
			float imposto = salario_liq-(salario_liq*(22.5/100));
			printf("Voce recebe um salario de R$%.2f.",imposto);
		} else if(salario_liq >= 2826.66){
			float imposto = salario_liq-(salario_liq*(15/100));
			printf("Voce recebe um salario de R$%.2f.",imposto);
		} else if(salario_liq >= 1903.99){
			float imposto = salario_liq-(salario_liq*(7.5/100));
			printf("Voce recebe um salario de R$%.2f.",imposto);
		} else {
			printf("Voce recebe um salario de R$%.2f e esta isento de imposto.",salario_liq);
		}
		getch();
	}
