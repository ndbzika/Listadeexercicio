#include <stdio.h>
	void main(){
		float pesop1,pesop2,alturap1,alturap2;
		printf("Informe o peso dos dois jogadores da primeiro dupla:");
		scanf("%f%f",&pesop1,&pesop2);
		printf("Informe a altura dos dois primeiros jogadores:");
		scanf("%f%f",&alturap1,&alturap2);
		float pesop3,pesop4,alturap3,alturap4;
		printf("Informe o peso dos dois outros jogadores da outra dupla:");
		scanf("%f%f",&pesop3,&pesop4);
		printf("Informe a altura dos dois outros jogadores da outra dupla:");
		scanf("%f%f",&alturap3,&alturap4);
		float p_m_dupla1 = (pesop1+pesop2)/2;
		float p_m_dupla2 = (pesop3+pesop4)/2;
		float a_m_dupla1 = (alturap1+alturap2)/2;
		float a_m_dupla2 = (alturap3+alturap4)/2;
		float p_m_all = (p_m_dupla1+p_m_dupla2)/2;
		float a_m_all = (a_m_dupla1+a_m_dupla2)/2;
		printf("Nesse torneio de volei a altura media dos jogadores eh %.2f e o peso medio eh %.2f.",a_m_all,p_m_all);
		printf("\nA altura media da primeira dupla eh %.2f e o peso %.2f.",a_m_dupla1,p_m_dupla1);
		printf("\nA altura media da segunda dupla eh %.2f e o peso %.2f.",a_m_dupla2,p_m_dupla2);
		getch();
	}
