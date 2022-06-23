#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int p, q, r, s;
	printf ("\n\nEste programa analisa um proposição composta!");
	printf ("\n\nPara o valor lógico de cada proposição simples digite: ");
	printf ("\n\n1 - Verdadeiro\n\n0 - Falso");
	printf ("\n\nDigite o valor lógico de p: ");
	scanf ("%d", &p);
	printf ("\n\nDigite o valor lógico de q: ");
	scanf ("%d", &q);
	printf ("\n\nDigite o valor lógico de r: ");
	scanf ("%d", &r);
	printf ("\n\nDigite o valor lógico de s: ");
	scanf ("%d", &s);
	
	if (((p == 1) || (p == 0)) && ((q == 1) || (q == 0)) && ((r == 1) || (r == 0)) && ((s == 1) || (s == 0))) {
		if (p == 1 || q == 1 || r == 1 || s == 1) {
			printf ("\n\nA proposição P é verdadeira!");
		}
		else
			printf ("\n\nA proposição P é falsa!");
	}
	else
		printf ("\n\nDigite valores lógicos válidos!");
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}



