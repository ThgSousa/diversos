#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main (void) {
	setlocale (LC_ALL, "Portuguese");
	float H, div;
	int n;
	H = 0;
	div = 1;
	printf ("\n\nEste programa determina o valor de H!");
	printf ("\n\nDigite o valor de n: ");
	scanf ("%d", &n);
	if (n <= 0) {
		printf ("\n\nNão é possível determinar o valor de H!");
	}
	else if (n > 0) {
		do {
			H = H + (1/div);
			div = div + 1;
		} while (div <= n);
		printf ("\n\nO valor de H é %.2f!", H);
	}
	printf ("\n\nObrigado por utilizar nosso sistema!\n\n");
	system ("Pause");
	return 0;	
}

