#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int i, div;
	div=0;
	printf ("\n\nEste programa verifica se o n�mero digitado � par!");
	printf("\n\nDigite um n�mero: ");
	scanf("%d",&i);
		div = i / 2;
		
		if ((div * 2) == i) {
			printf("� par!");
		}
		else if ((div * 2) != i) {
			printf("N�o � par!");
		}

	printf ("\n\nObrigado por utilizar nosso sistema!\n\n");
	system ("Pause");
	return 0;
}

