#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int termo1, termo2, novoTermo, n, i;
	novoTermo = 0;
	printf ("\n\nEste programa imprime a S�rie de Fibonacci at� um termo n!");
	printf ("\n\nDigite a quantidade de termos para impress�o: ");
	scanf ("%d", &n);
	if (n <= 0) {
		printf ("\n\nN�o � poss�vel imprimir nenhum termo da S�rie de Fibonacci");
	}
	else if (n == 1) {
		printf ("\n\nS�rie de Fibonacci: 1, ");
	}
	else if (n == 2) {
		printf ("\n\nS�rie de Fibonacci: 1, 1, ");
	}
	else if (n > 2) {
		termo1 = 1;
		termo2 = 1;
		i = 2;
		printf ("\n\nS�rie de Fibonacci: %d, %d, ", termo1, termo2);
		while (i < n) {
			novoTermo = termo1 + termo2;
			printf ("%d, ", novoTermo);
			termo1 = termo2;
			termo2 = novoTermo;
			i = i + 1;
		}
	}	
	printf ("...");
	printf ("\n\nObrigado por utilizar nosso sistema!\n\n");
	system ("Pause");
	return 0;
}

