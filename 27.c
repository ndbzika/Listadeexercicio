#include <stdio.h>
 void main(){
 	float comprimento,largura,volume;
 	printf("Informe o comprimento, a largura e a quantidade de litros que deseja encher a cisterna:");
 	scanf("%f%f%f",&comprimento,&largura,&volume);
 	float altura = volume/(comprimento*largura);
 	printf("Voce precisa colocar agua ate %.2f metros de altura da cisterna.",altura);
 	getch();
 }
