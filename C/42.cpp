#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float comp;

	printf("Esse programa determina a altura de um predio usando sua sombra!\n\n");
	printf("Digite o comprimento da sombra: ");
	scanf("%f", &comp);

	comp=comp*0.57;
	printf ("\n\nA altura do predio é %.1f!", comp);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


