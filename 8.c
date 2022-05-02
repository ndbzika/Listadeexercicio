#include <stdio.h>
void main(){
	float tcelcius,tkelvin,tfarenheint;
	printf("Informe a temperatura em graus celsius:");
	scanf("%f",&tcelcius);
	tkelvin = tcelcius+273;
	tfarenheint = tcelcius*1.8+32;
	printf("A mesma temperatura em kelvin eh %.2f e em fahrenraint eh %.2f.",tkelvin,tfarenheint);
	getchar();
}