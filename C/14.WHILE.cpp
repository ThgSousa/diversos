#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int termo1, termo2, novoTermo, n, i;
	novoTermo = 0;
	printf ("\n\nEste programa imprime a Série de Fibonacci até um termo n!");
	printf ("\n\nDigite a quantidade de termos para impressão: ");
	scanf ("%d", &n);
	if (n <= 0) {
		printf ("\n\nNão é possível imprimir nenhum termo da Série de Fibonacci");
	}
	else if (n == 1) {
		printf ("\n\nSérie de Fibonacci: 1, ");
	}
	else if (n == 2) {
		printf ("\n\nSérie de Fibonacci: 1, 1, ");
	}
	else if (n > 2) {
		termo1 = 1;
		termo2 = 1;
		i = 2;
		printf ("\n\nSérie de Fibonacci: %d, %d, ", termo1, termo2);
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

