#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int p, q, r, s;
	printf ("\n\nEste programa analisa um proposi��o composta!");
	printf ("\n\nPara o valor l�gico de cada proposi��o simples digite: ");
	printf ("\n\n1 - Verdadeiro\n\n0 - Falso");
	printf ("\n\nDigite o valor l�gico de p: ");
	scanf ("%d", &p);
	printf ("\n\nDigite o valor l�gico de q: ");
	scanf ("%d", &q);
	printf ("\n\nDigite o valor l�gico de r: ");
	scanf ("%d", &r);
	printf ("\n\nDigite o valor l�gico de s: ");
	scanf ("%d", &s);
	
	if (((p == 1) || (p == 0)) && ((q == 1) || (q == 0)) && ((r == 1) || (r == 0)) && ((s == 1) || (s == 0))) {
		if (p == 1 || q == 1 || r == 1 || s == 1) {
			printf ("\n\nA proposi��o P � verdadeira!");
		}
		else
			printf ("\n\nA proposi��o P � falsa!");
	}
	else
		printf ("\n\nDigite valores l�gicos v�lidos!");
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}



