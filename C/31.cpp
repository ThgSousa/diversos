#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float nota,peso,one,two;
	int i;
	one=0;
	two=0;
	printf("Esse programa determina a média ponderada de 4 notas!\n\n");

	for(i=1;i<=4;i++){
		printf("\n\nDigite a NOTA %d: ",i);
		scanf("%f",&nota);	
		printf("\n\nDigite o PESO %d: ",i);
		scanf("%f",&peso);
		one = (nota*peso)+one;
		two = two+peso;
		system("cls");
	}
	one = one/two;
	printf("\n\na média ponderada é de %.2f!",one);
	


	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

