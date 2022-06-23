#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int i, div;
	div=0;
	printf ("\n\nEste programa verifica se o número digitado é par!");
	printf("\n\nDigite um número: ");
	scanf("%d",&i);
		div = i / 2;
		
		if ((div * 2) == i) {
			printf("É par!");
		}
		else if ((div * 2) != i) {
			printf("Não é par!");
		}

	printf ("\n\nObrigado por utilizar nosso sistema!\n\n");
	system ("Pause");
	return 0;
}

