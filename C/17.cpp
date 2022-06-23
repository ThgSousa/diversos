#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	float s,t;
	printf ("\n\nEste programa determina a velocidade de um móvel!");
	printf ("\n\nEspaço percorrido pelo movel: ");
	scanf ("%f", &s);
	printf ("\n\nTempo: ");
	scanf ("%f", &t);
	s = s/t;
	printf ("\n\nA velocidade do movel é de %.1f!",s);

	printf ("\n\nObrigado por utilizar nosso sistema!\n\n");
	system ("Pause");
	return 0;
}

