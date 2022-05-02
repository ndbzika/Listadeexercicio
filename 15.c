#include <stdio.h>
#include <string.h>

void main(){
	char palavra[100];
	int k = 2;
	printf("Informe uma palavra:");
	scanf("%s", &palavra);
	printf("A terceira letra eh %c", palavra[k]);
}
