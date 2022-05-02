#include <stdio.h>
void main(){
	float KB,bits,bytes,MB,GB;
	printf("Informe o valor em KB:");
	scanf("%f",&KB);
	bits = KB*8000;
	bytes = KB*1000;
	MB = KB/1000;
	GB = KB/1000000;
	printf("Esse valor tem %.2f bits, %.2f bytes, %.3f MBs e %.6f GBs.",bits,bytes,MB,GB);
	getch();
}
