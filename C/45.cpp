#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float v,d,epm;
	v=0;
	printf("Esse programa determina velocidade do automóvel!\n\n");
	
	printf("\n\nDigite o diametro do pneu: ");
	scanf("%f", &d);
	printf("Digite a frequencia de EPM do veiculo: ");
	scanf("%f", &epm);
	v= (2*3.14)*(epm/60)*(d/2);

	printf ("\n\nA velocidade do automóvel é de %.1f!", v);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


